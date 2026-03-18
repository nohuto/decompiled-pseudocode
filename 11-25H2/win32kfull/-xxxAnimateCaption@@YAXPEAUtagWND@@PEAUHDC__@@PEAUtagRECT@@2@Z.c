/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DF124
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1402DF754 (xxxDrawAnimatedRects.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetWindowBorders @ 0x140044DD8 (GetWindowBorders.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     _WindowFromDC @ 0x1401553E8 (_WindowFromDC.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1402DF03C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  unsigned int DpiForSystem; // eax
  LONG v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 UserSessionState; // rax
  HDC CompatibleDC; // rdi
  LONG left; // ecx
  LONG top; // eax
  LONG v19; // r14d
  LONG v20; // r15d
  LONG right; // esi
  int v22; // r12d
  int v23; // esi
  __int64 v24; // rcx
  int WindowBorders; // r13d
  unsigned int v26; // eax
  int DpiDependentMetric; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  LONG v30; // eax
  __int64 v31; // rax
  struct tagWND *v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  HDC v42; // r13
  __int64 v43; // rcx
  int v44; // r12d
  __int64 i; // rax
  int v46; // r8d
  unsigned int v47; // ecx
  unsigned __int16 v48; // cx
  __int64 v49; // rcx
  __int64 v50; // rdx
  _BYTE v51[4]; // [rsp+60h] [rbp-69h] BYREF
  int v52; // [rsp+64h] [rbp-65h]
  int v53; // [rsp+68h] [rbp-61h]
  int v54; // [rsp+6Ch] [rbp-5Dh]
  LONG v55; // [rsp+70h] [rbp-59h]
  LONG v56; // [rsp+74h] [rbp-55h]
  int v57; // [rsp+78h] [rbp-51h]
  HDC v58; // [rsp+80h] [rbp-49h]
  struct tagWND *v59; // [rsp+88h] [rbp-41h]
  unsigned __int64 v60; // [rsp+90h] [rbp-39h]
  struct tagRECT *v61; // [rsp+98h] [rbp-31h] BYREF
  struct tagWND *v62; // [rsp+A0h] [rbp-29h]
  __int64 v63; // [rsp+A8h] [rbp-21h]
  HBITMAP CompatibleBitmap; // [rsp+B0h] [rbp-19h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B8h] [rbp-11h] BYREF
  struct tagRECT v66; // [rsp+C8h] [rbp-1h] BYREF

  v59 = a1;
  v60 = (unsigned __int64)a4;
  v61 = a3;
  v58 = a2;
  v62 = (struct tagWND *)WindowFromDC((__int64)a2, (__int64)a2);
  if ( v62 )
  {
    DpiForSystem = GetDpiForSystem();
    v8 = GetDpiDependentMetric(2, DpiForSystem) - 1;
    if ( !IsRemoteConnection(v10, v9) )
    {
      v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19872);
      v14 = *(unsigned int *)(v13 + 2236);
      if ( (v14 & 2) == 0 )
      {
        UserSessionState = W32GetUserSessionState(v13, v14);
        CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(UserSessionState + 43248));
        if ( CompatibleDC )
        {
          left = a4->left;
          top = a4->top;
          v19 = a3->top;
          v20 = a3->left;
          right = a3->right;
          v22 = a4->right - a4->left;
          v55 = left;
          v23 = right - v20;
          v24 = *((_QWORD *)a1 + 5);
          v56 = top;
          WindowBorders = GetWindowBorders(*(_DWORD *)(v24 + 28), *(_DWORD *)(v24 + 24));
          v26 = GetDpiForSystem();
          DpiDependentMetric = GetDpiDependentMetric(2, v26);
          v28 = (unsigned int)(2 * WindowBorders);
          if ( v61->bottom - v19 > DpiDependentMetric )
          {
            v20 += WindowBorders;
            v19 += WindowBorders;
            v23 -= v28;
          }
          v29 = (unsigned int)(*(_DWORD *)(v60 + 12) - v56);
          if ( (int)v29 > DpiDependentMetric )
          {
            v55 += WindowBorders;
            v56 += WindowBorders;
            v22 -= v28;
          }
          v54 = v20;
          v30 = v22;
          v53 = v19;
          v52 = v23;
          v66.left = 0;
          if ( v23 > v22 )
            v30 = v23;
          v66.top = v8;
          v66.right = v30;
          v66.bottom = 2 * v8;
          v31 = W32GetUserSessionState(v29, v28);
          CompatibleBitmap = GreCreateCompatibleBitmapEx(
                               *(HDC *)(*(_QWORD *)(v31 + 56968) + 64LL),
                               v66.right,
                               2 * v8,
                               0,
                               0LL,
                               0LL);
          v32 = v62;
          v63 = GreSelectBitmap(CompatibleDC, CompatibleBitmap);
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v62);
          if ( *(_DWORD *)(W32GetUserSessionState(v34, v33) + 43264)
            || (v37 = *(_DWORD *)(W32GetUserSessionState(v36, v35) + 66804) & 0x80000010, v38 = 45, v37 != -2147483632) )
          {
            v38 = 13;
          }
          xxxDrawCaptionTemp(v59, CompatibleDC, &v66, 0LL, 0LL, 0LL, v38);
          LOBYTE(v39) = 1;
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v51, v39);
          EnterLeaveCritShared::EnterLeaveCritShared(&v61, 1LL);
          EnterSharedRenderCrit(v40);
          v41 = SaveScreen(v32, 0, 0LL, v20, v19, v23, v8);
          v42 = v58;
          v60 = v41;
          if ( v41 || (unsigned int)GreBitBltInternal(CompatibleDC, 0, 0, v23, v8, v58, v20, v19, 0xCC0020u, 0, 0) )
          {
            v55 -= v20;
            v56 -= v19;
            v44 = v22 - v23;
            v61 = (struct tagRECT *)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            GreBitBltInternal(v42, v20, v19, v23, v8, CompatibleDC, 0, v8, 0xCC0020u, 0, 0);
            for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
            {
              v48 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - (_WORD)v61;
              if ( v48 > 0xFAu )
                break;
              v46 = v48;
              v47 = (int)((unsigned __int64)(274877907LL * (v55 * v48 + 125)) >> 32) >> 4;
              LODWORD(v58) = v20 + (v47 >> 31) + v47;
              LODWORD(v59) = v19 + (v56 * v46 + 125) / 250;
              v57 = v23 + (v44 * v46 + 125) / 250;
              UserSleep(1LL);
              if ( v60 )
              {
                SaveScreen(v62, 1u, v60, v54, v53, v52, v8);
                v53 = (int)v59;
                v52 = v57;
                v54 = (int)v58;
                v60 = SaveScreen(v62, 0, 0LL, (int)v58, (int)v59, v57, v8);
              }
              else
              {
                GreBitBltInternal(v42, v54, v53, v52, v8, CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
                v53 = (int)v59;
                v52 = v57;
                v54 = (int)v58;
                GreBitBltInternal(CompatibleDC, 0, 0, v57, v8, v42, (int)v58, (int)v59, 0xCC0020u, 0, 0);
              }
              GreBitBltInternal(v42, (int)v58, (int)v59, v57, v8, CompatibleDC, 0, v8, 0xCC0020u, 0, 0);
            }
            if ( v60 )
              SaveScreen(v62, 1u, v60, v54, v53, v52, v8);
            else
              GreBitBltInternal(v42, v54, v53, v52, v8, CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
          }
          LeaveRenderCrit(v43);
          UserSessionSwitchLeaveCrit(v49);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v51);
          GreSelectBitmap(CompatibleDC, v63);
          GreDeleteObject(CompatibleBitmap);
          GreDeleteDC(CompatibleDC);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v50);
        }
      }
    }
  }
}
