/*
 * XREFs of MiWriteCloneFlags @ 0x1404AFAC4
 * Callers:
 *     SymCryptModExpWindowed @ 0x14057034C (SymCryptModExpWindowed.c)
 *     MiCreateCloneZeroDescriptor @ 0x140B580FC (MiCreateCloneZeroDescriptor.c)
 * Callees:
 *     <none>
 */

void __fastcall MiWriteCloneFlags(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
