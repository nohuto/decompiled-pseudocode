/*
 * XREFs of DlrmUpdateLinkInformation @ 0x14012D438
 * Callers:
 *     DlrmHandlePowerStateAction @ 0x14012D0B4 (DlrmHandlePowerStateAction.c)
 *     DlrmHandleScaleAction @ 0x14012D1A8 (DlrmHandleScaleAction.c)
 *     StorAdapterDlrmSystemThread @ 0x14012DE30 (StorAdapterDlrmSystemThread.c)
 * Callees:
 *     StorLogDLRMUpdateLinkInfo @ 0x14012EAF0 (StorLogDLRMUpdateLinkInfo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DlrmUpdateLinkInformation(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  KIRQL v5; // al
  int v6; // ecx
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]

  v10 = 0LL;
  v11 = 0;
  if ( !a1 )
    goto LABEL_2;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
  {
    v2 = -1073741584;
    goto LABEL_9;
  }
  v4 = *(_QWORD *)(v3 + 6280);
  if ( v4 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v4 + 40))(*(_QWORD *)(v4 + 8), &v10);
    if ( v2 < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 272));
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
      v6 = v11;
      *(_QWORD *)a1 = v10;
      *(_DWORD *)(a1 + 8) = v6;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v5);
    }
  }
  else
  {
LABEL_2:
    v2 = -1073741811;
  }
LABEL_9:
  v8 = v10;
  v9 = v11;
  StorLogDLRMUpdateLinkInfo(a1, &v8, (unsigned int)v2);
  return (unsigned int)v2;
}
