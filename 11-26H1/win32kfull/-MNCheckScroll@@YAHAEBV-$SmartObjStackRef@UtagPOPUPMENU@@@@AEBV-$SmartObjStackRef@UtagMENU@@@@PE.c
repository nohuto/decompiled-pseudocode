/*
 * XREFs of ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x140288E04
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x140175E24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 */

__int64 __fastcall MNCheckScroll(__int64 **a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 DpiMetricsForCurrentThread; // rax
  int v11; // r8d
  unsigned int v12; // ebx
  __int64 i; // rdx
  __int64 v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // rdx
  __int64 j; // r8
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rbx
  struct tagRECT v25; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v26[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a1;
  v25 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, *v4);
  MNGetPopupBoundsRect((__int64)v26, a3, &v25, 0);
  v8 = v25.bottom - v25.top;
  if ( *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) && *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) < v8 )
    v8 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL);
  if ( *(_QWORD *)(**a2 + 88)
    && *(_DWORD *)(**(_QWORD **)(**a2 + 88) + 72LL) == *(_DWORD *)(**a2 + 64)
    && (v9 = **a2, *(_DWORD *)(v9 + 68) + 6 > v8) )
  {
    DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v9, v6, v7);
    v11 = 0;
    v12 = -6 - 2 * *(_DWORD *)(DpiMetricsForCurrentThread + 28) + v8;
    for ( i = *(_QWORD *)(**a2 + 88); v11 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL); i += 96LL )
    {
      if ( *(_DWORD *)(*(_QWORD *)i + 68LL) > v12 )
        break;
      ++v11;
    }
    v14 = i - 96;
    if ( !v11 )
      v14 = i;
    v15 = 0;
    *(_DWORD *)(**a2 + 68) = *(_DWORD *)(*(_QWORD *)v14 + 68LL);
    v16 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1);
    for ( j = *(_QWORD *)(**a2 + 88) + 96LL * (int)v16; (int)v16 >= 0; v16 = (unsigned int)(v16 - 1) )
    {
      v15 += *(_DWORD *)(*(_QWORD *)j + 76LL);
      if ( v15 > *(_DWORD *)(**a2 + 68) )
        break;
      j -= 96LL;
    }
    v18 = (unsigned int)(v16 + 1);
    if ( (_DWORD)v16 == *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1 )
      v18 = (unsigned int)v16;
    *(_DWORD *)(**a2 + 120) = v18;
    if ( *(_DWORD *)(**a2 + 116) > (int)v18 )
      *(_DWORD *)(**a2 + 116) = v18;
    v19 = **a2;
    if ( *(_DWORD *)(v19 + 116) == (_DWORD)v18 )
    {
      *(_DWORD *)(v19 + 124) |= 3u;
    }
    else
    {
      v20 = *(_DWORD *)(v19 + 116) == 0;
      v19 = **a2;
      v21 = *(_DWORD *)(v19 + 124);
      if ( v20 )
        v22 = v21 & 0xFFFFFFFC | 2;
      else
        v22 = v21 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v19 + 124) = v22;
    }
    v23 = **a2;
    return (unsigned int)(2 * *(_DWORD *)(GetDpiMetricsForCurrentThread(v19, v16, v18) + 28) + *(_DWORD *)(v23 + 68));
  }
  else
  {
    *(_DWORD *)(**a2 + 124) &= 0xFFFFFFFC;
    *(_DWORD *)(**a2 + 116) = 0;
    *(_DWORD *)(**a2 + 120) = 0;
    return *(unsigned int *)(**a2 + 68);
  }
}
