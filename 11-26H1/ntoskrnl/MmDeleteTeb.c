/*
 * XREFs of MmDeleteTeb @ 0x140A048C4
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x140A04984 (MiFreeToSubAllocatedRegion.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall MmDeleteTeb(struct _KPROCESS *a1, unsigned __int64 a2)
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
