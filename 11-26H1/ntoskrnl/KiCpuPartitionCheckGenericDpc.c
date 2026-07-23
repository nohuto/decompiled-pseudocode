/*
 * XREFs of KiCpuPartitionCheckGenericDpc @ 0x1405F6CF0
 * Callers:
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     KeSwapDirectoryTableBase @ 0x14047D69C (KeSwapDirectoryTableBase.c)
 *     KeGenericCallDpc @ 0x1404CAE90 (KeGenericCallDpc.c)
 * Callees:
 *     EtwTraceCpuPartitionGenericDpcViolation @ 0x1406C83F4 (EtwTraceCpuPartitionGenericDpcViolation.c)
 */

__int64 __fastcall KiCpuPartitionCheckGenericDpc(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // r9
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // r8
  __int64 i; // rdx

  result = *(_QWORD *)&stru_140FC11F0.WaitRegister.Flags;
  v2 = **(_WORD **)KiSystemCpuPartition;
  if ( v2 >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
  {
    p_WaitRegister = *(_KWAIT_STATUS_REGISTER **)KiSystemCpuPartition;
    v2 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  }
  else
  {
    p_WaitRegister = &stru_140FC11F0.WaitRegister;
  }
  for ( i = 0LL; (unsigned __int16)i < v2; LOWORD(i) = i + 1 )
  {
    result = *(__int64 *)((char *)&stru_140FC11F0.116 + 8 * (unsigned __int16)i + 4);
    if ( *(_QWORD *)(*(_QWORD *)KiSystemCpuPartition + 8LL * (unsigned __int16)i + 8) != result )
      return EtwTraceCpuPartitionGenericDpcViolation(a1, i, p_WaitRegister);
  }
  while ( (unsigned __int16)i < *(_WORD *)&p_WaitRegister->Flags )
  {
    result = (unsigned __int16)i;
    if ( *(_QWORD *)&p_WaitRegister[8 * (unsigned __int16)i + 8].Flags )
      return EtwTraceCpuPartitionGenericDpcViolation(a1, i, p_WaitRegister);
    LOWORD(i) = i + 1;
  }
  return result;
}
