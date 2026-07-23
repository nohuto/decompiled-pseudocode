/*
 * XREFs of MiDeleteVadEventAwe @ 0x14087F3B0
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 */

__int64 __fastcall MiDeleteVadEventAwe(__int64 a1)
{
  __int64 v1; // r11
  __int64 ProcessPartition; // rax
  unsigned __int64 v3; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 88) )
  {
    ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    MiReturnResident(ProcessPartition, v3);
  }
  result = *(unsigned int *)(v1 + 8);
  if ( (result & 1) == 0 )
    return MiDereferenceControlArea(*(_QWORD *)(v1 + 40));
  return result;
}
