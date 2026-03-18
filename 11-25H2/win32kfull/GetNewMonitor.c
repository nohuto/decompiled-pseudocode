/*
 * XREFs of GetNewMonitor @ 0x14006568C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1400262B4 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     GetInheritedMonitor @ 0x140036E20 (GetInheritedMonitor.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1401A8180 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     TransformRectAroundPoint @ 0x1401F2D58 (TransformRectAroundPoint.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1401F88F4 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetNewMonitor(struct tagWND *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 InheritedMonitor; // rbx
  struct tagRECT si128; // xmm7
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // r12
  struct tagRECT v13; // xmm6
  __int64 v14; // rcx
  _DWORD *v15; // r9
  bool v16; // dl
  unsigned __int64 v17; // r8
  struct tagMONITOR *v18; // rax
  struct tagMONITOR *v19; // rax
  __int64 v20; // r9
  struct tagRECT v22; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-40h] BYREF

  InheritedMonitor = 0LL;
  si128 = 0LL;
  v8 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), a2);
  v22 = 0LL;
  v12 = HasMaximizedState(a1);
  v13 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v23 = v13;
  if ( a2 )
  {
    v13 = *a2;
    v23 = *a2;
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v10, v9, v11) )
  {
    v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
    if ( (*((_DWORD *)a1 + 96) & 0x10) == 0 && v14 && *(struct tagWND **)(v14 + 16) == a1 )
    {
      v15 = (_DWORD *)(v14 + 200);
      v16 = (*(_DWORD *)(v14 + 200) & 0x800000) != 0;
      if ( a2 )
      {
        v17 = *(_QWORD *)(v14 + 24) - *(_QWORD *)&v13.left;
        if ( !v17 )
          v17 = *(_QWORD *)(v14 + 32) - _mm_srli_si128((__m128i)v13, 8).m128i_u64[0];
        if ( v17 )
        {
          *v15 |= 0x200000u;
        }
        else
        {
          InheritedMonitor = *(_QWORD *)(v14 + 216);
          v16 = (*v15 & 8) != 0;
        }
      }
      if ( v16 )
      {
        si128 = *(struct tagRECT *)(v14 + 24);
        v22 = si128;
        if ( a2 )
          *a2 = si128;
      }
    }
  }
  if ( a3 )
    *a3 = v13;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor(a1);
    if ( !InheritedMonitor )
    {
      v18 = a2
          ? (struct tagMONITOR *)MonitorFromRect(a2, 0LL, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL))
          : _MonitorFromWindowInternal(a1, 0, 1);
      InheritedMonitor = (__int64)v18;
      if ( !v18 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          v19 = (struct tagMONITOR *)MonitorFromRect(&v23, 2LL, 0LL);
          v13 = v23;
        }
        else
        {
          v19 = _MonitorFromWindowInternal(a1, 2u, 1);
        }
        InheritedMonitor = (__int64)v19;
      }
    }
  }
  if ( a3
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 688LL) & 0x2000000) == 0
    && v8
    && v8 != InheritedMonitor
    && IsTopLevelWindow((__int64)a1) )
  {
    if ( IsRectEmptyInl(&v22) )
    {
      if ( !v12 )
      {
        TransformRectAroundPoint(
          (unsigned int)&v23,
          *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 60LL),
          (_DWORD)a2,
          (unsigned int)&v22,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 60LL),
          *(_QWORD *)(v20 + 88));
        si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&v22);
      }
      if ( !IsRectEmptyInl(&v22)
        && !(unsigned int)IsNewMonitorRectMostOccupied(
                            &v22,
                            (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                            (const struct tagRECT *)(*(_QWORD *)(v8 + 40) + 28LL)) )
      {
        InheritedMonitor = v8;
        v22 = v13;
        si128 = v13;
      }
    }
    if ( !IsRectEmptyInl(&v22) )
      *a3 = si128;
  }
  return InheritedMonitor;
}
