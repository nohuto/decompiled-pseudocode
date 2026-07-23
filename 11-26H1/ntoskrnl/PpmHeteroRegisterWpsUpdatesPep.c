/*
 * XREFs of PpmHeteroRegisterWpsUpdatesPep @ 0x1407E8180
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 */

__int64 __fastcall PpmHeteroRegisterWpsUpdatesPep(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG v4; // esi
  unsigned int i; // ebp
  _WORD *Prcb; // rax
  __int16 v7; // dx
  __int16 v8; // cx

  v2 = 0;
  if ( !PpmHeteroHgsEnabled
    || PpmHeteroHgsVendor != 3
    || *(_QWORD *)(a2 + 64)
    || !*(_QWORD *)(a2 + 8)
    || !*(_DWORD *)(a2 + 16)
    || !*(_QWORD *)(a2 + 32)
    || !*(_QWORD *)(a2 + 72)
    || !*(_QWORD *)(a2 + 80) )
  {
    return (unsigned int)-1073741811;
  }
  if ( PpmHeteroHgsTableEntry || PpmHeteroCheckWpsTableUpdated || PpmHeteroAcknowledgeWpsUpdate )
    return (unsigned int)-1073741616;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 > KeQueryMaximumProcessorCountEx(0xFFFFu) )
    return (unsigned int)-1073741811;
  for ( i = 0; i < v4; Prcb[17725] = v8 * *(_WORD *)(a2 + 44) )
  {
    Prcb = (_WORD *)KeGetPrcb(i);
    Prcb[17711] = i;
    v7 = *(_WORD *)(a2 + 24) * i;
    v8 = i++;
    Prcb[17709] = v7;
  }
  PpmHeteroHgsTableEntry = *(_QWORD *)(a2 + 8);
  PpmHeteroWpsParkingTableEntry = *(_QWORD *)(a2 + 32);
  PpmHeteroWpsUpdateInterfaceHandle = *(_QWORD *)a2;
  PpmHeteroCheckWpsTableUpdated = *(_QWORD *)(a2 + 72);
  PpmHeteroAcknowledgeWpsUpdate = *(_QWORD *)(a2 + 80);
  PpmHeteroHgsCapabilityBits = *(_DWORD *)(a2 + 24);
  return v2;
}
