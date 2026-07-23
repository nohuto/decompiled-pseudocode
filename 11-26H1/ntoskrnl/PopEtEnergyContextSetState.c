/*
 * XREFs of PopEtEnergyContextSetState @ 0x1409CC484
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1409CBF10 (PoEnergyContextUpdateComponentPower.c)
 *     PoSetProcessEnergyTrackingState @ 0x140AFDCC0 (PoSetProcessEnergyTrackingState.c)
 * Callees:
 *     RtlStateDurationUpdate @ 0x1404C5A38 (RtlStateDurationUpdate.c)
 *     PopEtStringIntern @ 0x1409CBCEC (PopEtStringIntern.c)
 *     PopEtStringSet @ 0x1409CC948 (PopEtStringSet.c)
 *     RtlInternEntryDereference @ 0x1409CD1F8 (RtlInternEntryDereference.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1409CDAE4 (PopEtEnergyContextProcessStateUpdate.c)
 */

__int64 __fastcall PopEtEnergyContextSetState(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r14
  __int64 v5; // rdi
  char v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ebp
  unsigned int v11; // ebx
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 1640);
  v15 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (a2[3] & 1) == 0 )
    goto LABEL_7;
  v7 = (__int64)(a2 + 4);
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(v7 + 2 * v8) );
  if ( !v8 || (v13 = PopEtStringIntern(v7, v8, &v15), v5 = v15, v11 = v13, v13 >= 0) )
  {
    if ( *(_QWORD *)(v2 + 464) != v5 )
    {
      PopEtStringSet(v2 + 464, v5);
      v6 = 1;
    }
LABEL_7:
    v9 = *(_DWORD *)(v2 + 472);
    v10 = a2[1] | (unsigned __int16)(v9 & ~(unsigned __int16)*a2);
    if ( (unsigned __int16)v9 == v10 )
    {
      if ( !v6 )
      {
LABEL_10:
        v11 = 0;
        goto LABEL_11;
      }
    }
    else
    {
      RtlStateDurationUpdate(
        (unsigned __int64 *)(v2 + 120),
        (v10 & 4) != 0,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      RtlStateDurationUpdate((unsigned __int64 *)(v2 + 416), (v10 & 8) != 0, v14);
      *(_WORD *)(v2 + 472) = v10;
    }
    PopEtEnergyContextProcessStateUpdate(a1);
    goto LABEL_10;
  }
LABEL_11:
  if ( v5 )
    RtlInternEntryDereference(PopEtGlobals + 56);
  return v11;
}
