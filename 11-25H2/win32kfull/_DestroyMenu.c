/*
 * XREFs of _DestroyMenu @ 0x140047890
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     NtUserDestroyMenu @ 0x1400467F0 (NtUserDestroyMenu.c)
 *     MNFreeItem @ 0x140047A00 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140048FE0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxLoadSysDesktopMenu @ 0x1401B23E8 (xxxLoadSysDesktopMenu.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxGetSystemMenu @ 0x1402CA414 (xxxGetSystemMenu.c)
 *     xxxSetSystemMenu @ 0x1402E9E68 (xxxSetSystemMenu.c)
 * Callees:
 *     MNFreeItem @ 0x140047A00 (MNFreeItem.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B30B8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400C7A00 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401850D8 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyMenu(struct _HEAD *a1)
{
  __int64 v2; // rsi
  int i; // edi
  __int64 v4; // rdx
  __int64 v5; // rdi
  bool v6; // zf
  void *CurrentWin32kStackRefLookAside; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !a1 )
    return 0LL;
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v11, a1);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v2 = *((_QWORD *)a1 + 11);
    for ( i = *(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL); i; --i )
    {
      MNFreeItem(a1, v2, 1LL);
      v2 += 96LL;
    }
    if ( *((_QWORD *)a1 + 11) )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 136LL), 0, *((PVOID *)a1 + 12));
      Win32FreePool(*((void **)a1 + 11));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 32LL) = 0LL;
      *((_QWORD *)a1 + 11) = 0LL;
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) = 0;
    }
    v4 = *((_QWORD *)a1 + 3);
    v12 = 0LL;
    LockObjectAssignment(&v12, v4);
    HMAssignmentUnlock((char *)a1 + 80);
    v5 = *((_QWORD *)a1 + 19);
    *(_QWORD *)v5 = 0LL;
    v6 = *(_DWORD *)(v5 + 8) == 0;
    *(_BYTE *)(v5 + 12) = 1;
    if ( v6 )
    {
      CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
      Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v5);
    }
    HMFreeObject(a1);
    DeferrableUnlockObjectAssignment<tagDESKTOP>(&v12);
    if ( v11 )
      *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19768) = 0LL;
  }
  else
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v11);
  }
  return 1LL;
}
