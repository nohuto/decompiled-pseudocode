/*
 * XREFs of sub_140183060 @ 0x140183060
 * Callers:
 *     <none>
 * Callees:
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 */

__int64 __fastcall sub_140183060(__int64 DriverObject, _DWORD *BugCheckParameter3, unsigned int *a3, __int64 a4)
{
  if ( !qword_140168D90 )
    qword_140168D90 = (__int64)MmLockPagableDataSection(sub_1401B71D0);
  if ( !DriverObject || !BugCheckParameter3 )
    KeBugCheckEx(0xF1u, 0x2000uLL, DriverObject, (ULONG_PTR)BugCheckParameter3, 0LL);
  return StorPortInitialize(DriverObject, BugCheckParameter3, a3, a4);
}
