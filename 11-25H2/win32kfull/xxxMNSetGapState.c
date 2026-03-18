/*
 * XREFs of xxxMNSetGapState @ 0x1402E998C
 * Callers:
 *     xxxInsertMenuItem @ 0x140048320 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x14029B120 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402E9B84 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x140044744 (IsMFMWFPWindow.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 *     xxxInvalidateRect @ 0x1402BEDA4 (xxxInvalidateRect.c)
 *     MNGetpItem @ 0x1402BF404 (MNGetpItem.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall xxxMNSetGapState(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  int v23; // eax
  __int64 v24; // rdx
  _QWORD v26[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, 0LL);
  v28 = 0LL;
  if ( (a3 & 3) != 0 )
  {
    LOBYTE(v9) = IsMFMWFPWindow((__int64)a1);
    if ( v9 )
    {
      v11 = safe_cast_fnid_to_PMENUWND(v10);
      if ( v11 )
      {
        v8 = *(_QWORD *)(v11 + 8);
        if ( v8 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v26, v8);
          if ( *(_QWORD *)v26[0] )
          {
            v12 = MNGetpItem((__int64)v26, a2);
            if ( v12 )
            {
              LODWORD(v28) = *(_DWORD *)(*(_QWORD *)v12 + 64LL);
              DWORD2(v28) = *(_DWORD *)(*(_QWORD *)v12 + 64LL) + *(_DWORD *)(*(_QWORD *)v12 + 72LL);
              DWORD1(v28) = *(_DWORD *)(*(_QWORD *)v12 + 68LL);
              HIDWORD(v28) = *(_DWORD *)(*(_QWORD *)v12 + 68LL) + *(_DWORD *)(*(_QWORD *)v12 + 76LL);
              if ( (a3 & 1) == 0 )
              {
                v18 = MNGetpItem((__int64)v26, a2 + 1);
                v21 = *v20;
                if ( a4 )
                {
                  *(_DWORD *)(v21 + 4) |= 0x40000000u;
                  if ( !v18 )
                    goto LABEL_20;
                  *(_DWORD *)(*(_QWORD *)v18 + 4LL) |= 0x80000000;
                }
                else
                {
                  *(_DWORD *)(v21 + 4) &= ~0x40000000u;
                  if ( !v18 )
                    goto LABEL_20;
                  *(_DWORD *)(*(_QWORD *)v18 + 4LL) &= ~0x80000000;
                }
                UserSessionState = W32GetUserSessionState(v21, v19);
                HIDWORD(v28) += *(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 2172LL);
                goto LABEL_20;
              }
              v13 = MNGetpItem((__int64)v26, a2 - 1);
              v16 = *v15;
              if ( a4 )
              {
                *(_DWORD *)(v16 + 4) |= 0x80000000;
                if ( v13 )
                {
                  *(_DWORD *)(*(_QWORD *)v13 + 4LL) |= 0x40000000u;
LABEL_13:
                  v17 = W32GetUserSessionState(v16, v14);
                  DWORD1(v28) -= *(_DWORD *)(*(_QWORD *)(v17 + 19872) + 2172LL);
                }
              }
              else
              {
                *(_DWORD *)(v16 + 4) &= ~0x80000000;
                if ( v13 )
                {
                  *(_DWORD *)(*(_QWORD *)v13 + 4LL) &= ~0x40000000u;
                  goto LABEL_13;
                }
              }
LABEL_20:
              v23 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                             *(_QWORD *)(*(_QWORD *)v26[0] + 40LL),
                                             *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL) + 116LL))
                              + 68LL);
              DWORD1(v28) -= v23;
              HIDWORD(v28) -= v23;
              Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)a1);
              xxxInvalidateRect(a1, (__int64)&v28, 1);
              Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v24);
            }
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v26, v8);
}
