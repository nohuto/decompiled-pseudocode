/*
 * XREFs of KeSelectNodeForAffinity @ 0x1404ADF48
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x1404ADD98 (KiSetIdealNodeProcessByGroup.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KeQueryNodeGroupAffinity @ 0x14020183C (KeQueryNodeGroupAffinity.c)
 */

__int64 __fastcall KeSelectNodeForAffinity(__int64 a1)
{
  unsigned __int16 v1; // dx
  unsigned __int16 v4; // bx
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v7; // edi
  __int64 v8; // rsi

  v1 = KeNumberNodes;
  if ( KeNumberNodes == 1 )
    return KeNodeBlock[0];
  v4 = KiProcessNodeSeed++;
  if ( (unsigned __int16)KiProcessNodeSeed >= (unsigned __int16)KeNumberNodes )
    KiProcessNodeSeed = 0;
  v5 = 0;
  do
  {
    if ( v4 >= v1 )
      v4 = 0;
    v6 = KeNodeBlock[v4];
    if ( (*(_BYTE *)(v6 + 10) & 1) == 0
      && (KeQueryNodeGroupAffinity(KeNodeBlock[v4], *(_WORD *)(a1 + 8)) & *(_QWORD *)a1) != 0 )
    {
      return v6;
    }
    v1 = KeNumberNodes;
    ++v5;
    ++v4;
  }
  while ( v5 < (unsigned __int16)KeNumberNodes );
  v7 = 0;
  while ( 1 )
  {
    if ( v4 >= v1 )
      v4 = 0;
    v8 = KeNodeBlock[v4];
    if ( (KeQueryNodeGroupAffinity(v8, *(_WORD *)(a1 + 8)) & *(_QWORD *)a1) != 0 )
      break;
    v1 = KeNumberNodes;
    ++v7;
    ++v4;
    if ( v7 >= (unsigned __int16)KeNumberNodes )
      return 0LL;
  }
  return v8;
}
