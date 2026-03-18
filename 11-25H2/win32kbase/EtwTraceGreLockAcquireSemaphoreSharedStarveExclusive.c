/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x14017D740
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x14015E824 (McTemplateK0pz_EtwWriteTransfer.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

int __fastcall EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(__int64 a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  bool v7; // zf

  LODWORD(SessionState) = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)SessionState )
  {
    v7 = gbLockEtw == 0;
  }
  else
  {
    SessionState = W32GetSessionState(v5);
    v5 = *(_QWORD *)(SessionState + 88);
    v7 = *(_DWORD *)(v5 + 16) == 0;
  }
  if ( !v7 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    LODWORD(SessionState) = McTemplateK0pz_EtwWriteTransfer(v5, &LockAcquireSharedStarveExclusive, v6, a2, a1);
  return SessionState;
}
