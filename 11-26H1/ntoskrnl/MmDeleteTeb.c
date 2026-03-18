/*
 * XREFs of MmDeleteTeb @ 0x14095F004
 * Callers:
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x14095F0C4 (MiFreeToSubAllocatedRegion.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall MmDeleteTeb(struct _KPROCESS *a1, unsigned __int64 a2)
{
  ULONG_PTR v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0;
  KeStackAttachProcess(a1, &ApcState);
  v3 = MiObtainReferencedVadEx(a2, 0LL, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion(v3);
  return KiUnstackDetachProcess((__int64)&ApcState, 0);
}
