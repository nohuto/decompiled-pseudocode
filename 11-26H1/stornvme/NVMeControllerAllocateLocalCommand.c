/*
 * XREFs of NVMeControllerAllocateLocalCommand @ 0x14001D1A8
 * Callers:
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 *     NVMeControllerGetLocalCommand @ 0x14001D328 (NVMeControllerGetLocalCommand.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeControllerAllocateLocalCommand(__int64 a1)
{
  void *v3; // [rsp+50h] [rbp+20h] BYREF
  __int64 v4; // [rsp+58h] [rbp+28h]

  v3 = 0LL;
  v4 = 0LL;
  StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
  if ( v3 )
    NVMeFreeDmaBuffer(a1, 4232LL, (__int64 *)&v3, v4);
  return 0LL;
}
