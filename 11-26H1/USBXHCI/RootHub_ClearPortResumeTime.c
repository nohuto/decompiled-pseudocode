/*
 * XREFs of RootHub_ClearPortResumeTime @ 0x14004A180
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x14001C480 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 */

__int64 __fastcall RootHub_ClearPortResumeTime(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 48);
  v3 = a2 - 1;
  v4 = 120LL * (unsigned int)(a2 - 1);
  RootHub_AcquireReadModifyWriteLock(a1, a2 - 1);
  --*(_DWORD *)(v4 + v2 + 48);
  return RootHub_ReleaseReadModifyWriteLock(a1, v3);
}
