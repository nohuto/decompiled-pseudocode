/*
 * XREFs of ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BE800
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004F7CC (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1400317E0 (PhysicalToLogicalInPlaceRgn.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     xxxCalcClientRect @ 0x140047B98 (xxxCalcClientRect.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     xxxDrawWindowFrame @ 0x14025CE6C (xxxDrawWindowFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GreWatchVisRgnChange @ 0x14030ECA0 (GreWatchVisRgnChange.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 EmptyRgn; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 DCEx; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  HDC v16; // r14
  __int64 UserSessionState; // rax
  __int16 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  struct tagWND *i; // r14
  __int64 v29; // r8
  int v30; // eax
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // r8
  HDC v34; // r14
  __int64 v35; // r8
  RECT v36; // xmm0
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  HBRUSH v41; // rbx
  int ObjectOwner; // edi
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int BrushColor; // ebx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  HRGN v51; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v52[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v53; // [rsp+30h] [rbp-40h]
  __int128 v54; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-28h] BYREF
  RECT v56; // [rsp+58h] [rbp-18h] BYREF

  v56 = 0LL;
  if ( *((_QWORD *)PtiCurrent((__int64)a1, a2) + 62) )
  {
    v5 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v5, v4) + 62) + 8LL);
    if ( (*(_DWORD *)(v5 + 64) & 1) != 0 )
    {
      LODWORD(v51) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2007);
    }
  }
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_QWORD *)(v8 + 136);
  if ( v9 && (*(_BYTE *)(v8 + 31) & 0x10) != 0 && (!a2 || !GetStyleWindow((__int64)a1, 2568)) )
  {
    if ( v9 <= 1 )
    {
      v56 = *(RECT *)(v8 + 88);
      EmptyRgn = GreCreateRectRgnIndirect(&v56, v4, v6);
      if ( !EmptyRgn )
        EmptyRgn = 1LL;
    }
    else
    {
      EmptyRgn = CreateEmptyRgn(v5, v4, v6, v7);
      if ( !EmptyRgn )
      {
LABEL_12:
        EmptyRgn = 1LL;
        goto LABEL_15;
      }
      if ( !(unsigned int)GreCombineRgn(EmptyRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
      {
        GreDeleteObject(EmptyRgn);
        goto LABEL_12;
      }
    }
LABEL_15:
    if ( a2 && EmptyRgn != 1 && (unsigned int)GreCombineRgn(EmptyRgn, EmptyRgn, a2, 1LL) == 1 )
    {
      GreDeleteObject(EmptyRgn);
      return;
    }
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
    if ( !IsInsideUserApiHook(v12, v11) )
    {
      DCEx = _GetDCEx(a1, EmptyRgn, 328833LL);
      v15 = *((_QWORD *)a1 + 5);
      v16 = (HDC)DCEx;
      if ( (*(_BYTE *)(v15 + 16) & 0x40) == 0
        || (UserSessionState = W32GetUserSessionState(v15, v14),
            v18 = 8193,
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != *(_QWORD *)(UserSessionState + 18888)) )
      {
        v18 = 0x2000;
      }
      xxxDrawWindowFrame(a1, v16, v18);
      _ReleaseDC(v16);
    }
    xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
    v56 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
    xxxCalcClientRect(a1, &v56, 1);
    v21 = W32GetUserSessionState(v20, v19);
    SetRectRgnIndirect(*(_QWORD *)(v21 + 63376), &v56);
    if ( EmptyRgn > 1 )
    {
      v24 = W32GetUserSessionState(v23, v22);
      v25 = GreCombineRgn(EmptyRgn, EmptyRgn, *(_QWORD *)(v24 + 63376), 1LL);
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          GreDeleteObject(EmptyRgn);
          EmptyRgn = 0LL;
LABEL_43:
          v33 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
            v33 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
          v34 = (HDC)_GetDCEx(a1, EmptyRgn, v33);
          GreWatchVisRgnChange(v34);
          v35 = *((_QWORD *)a1 + 5);
          v56 = *(RECT *)(v35 + 88);
          v36 = v56;
          v37 = *(_DWORD *)(v35 + 92);
          v38 = -*(_DWORD *)(v35 + 88);
          v56.right -= *(_DWORD *)(v35 + 88);
          v39 = (unsigned int)-v37;
          v56.bottom += v39;
          v56.top += v39;
          v56.left = v38 + _mm_cvtsi128_si32((__m128i)v36);
          v40 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
          v41 = *(HBRUSH *)(v40 + 72);
          if ( v41 )
          {
            if ( (unsigned __int64)v41 <= 0x1F )
              v41 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v40, v39) + 19872) + 8LL * (_QWORD)v41 + 4688);
          }
          else if ( (*(_BYTE *)(v35 + 18) & 1) != 0 )
          {
            v41 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v40, v39) + 19872) + 4816LL);
          }
          else
          {
            v41 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v40, v39) + 19872) + 4736LL);
          }
          ObjectOwner = GreGetObjectOwner(v41, 16LL);
          if ( ObjectOwner && ObjectOwner != (unsigned int)PsGetCurrentProcessId() )
          {
            BrushColor = GreGetBrushColor(v41);
            if ( BrushColor == -1 )
            {
              v46 = W32GetUserSessionState(v44, v43);
              BrushColor = GreGetBrushColor(*(_QWORD *)(*(_QWORD *)(v46 + 19872) + 4736LL));
            }
            v47 = W32GetUserSessionState(v44, v43);
            GreSetSolidBrush(*(_QWORD *)(v47 + 43040), BrushColor);
            v41 = *(HBRUSH *)(W32GetUserSessionState(v49, v48) + 43040);
          }
          FillRect(v34, &v56, v41);
          GreWatchVisRgnChange(v34);
          _ReleaseDC(v34);
          SetOrClrWF(1, a1, 0x108u, 1);
          SetOrClrWF(1, a1, 0x102u, 1);
          SetOrClrWF(1, a1, 0x120u, 1);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v50);
          return;
        }
      }
      else
      {
        GreDeleteObject(EmptyRgn);
        EmptyRgn = 1LL;
      }
    }
    v26 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v26 + 31) & 2) != 0 )
      goto LABEL_43;
    v27 = *(_QWORD *)(v26 + 136);
    v54 = 0LL;
    if ( v27 != 1 )
    {
      if ( (unsigned int)GreGetRgnBox(v27, &v56) )
        goto LABEL_34;
      v26 = *((_QWORD *)a1 + 5);
    }
    v56 = *(RECT *)(v26 + 88);
LABEL_34:
    for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      v29 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v29 + 31) & 0x10) != 0 && ((*(_BYTE *)(v29 + 20) & 4) != 0 || !*(_QWORD *)(v29 + 136)) )
      {
        if ( (unsigned int)IntersectRect(&v54, &v56.left, (int *)(v29 + 88)) )
        {
          v51 = (HRGN)EmptyRgn;
          v30 = PhysicalToLogicalInPlaceRgn((__int64)i, (__int64)&v51);
          v52[0] = 0;
          v31 = v30;
          v53 = 0LL;
          AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v52, v32);
          xxxInternalInvalidate(i, v51, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v52);
          if ( v31 )
            GreDeleteObject(v51);
        }
      }
    }
    goto LABEL_43;
  }
}
