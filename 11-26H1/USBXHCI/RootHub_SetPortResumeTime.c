/*
 * XREFs of RootHub_SetPortResumeTime @ 0x14004A45C
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003C83C (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 */

__int64 __fastcall RootHub_SetPortResumeTime(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rdi

  v3 = *(_QWORD *)(a1 + 48);
  v4 = a2 - 1;
  v5 = 120LL * (unsigned int)(a2 - 1);
  RootHub_AcquireReadModifyWriteLock(a1, a2 - 1);
  ++*(_DWORD *)(v5 + v3 + 48);
  *(_WORD *)(v5 + v3 + 52) = a3;
  return RootHub_ReleaseReadModifyWriteLock(a1, v4);
}
