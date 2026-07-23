/*
 * XREFs of MiReturnProcessVads @ 0x140A08654
 * Callers:
 *     MiAllocateProcessVads @ 0x140A03904 (MiAllocateProcessVads.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 *     MiInsertProcessVads @ 0x140A085A8 (MiInsertProcessVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnProcessVads(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      if ( (v2[7] & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        ExFreePoolWithTag((PVOID)(v2[7] & 0xFFFFFFFFFFFFFFF0uLL), 0);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
