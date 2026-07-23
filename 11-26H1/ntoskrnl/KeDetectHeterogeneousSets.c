/*
 * XREFs of KeDetectHeterogeneousSets @ 0x140B2663C
 * Callers:
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405ECF10 (KiAssignSubNodeSharedReadyQueues.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeDetectHeterogeneousSets(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // r9
  __int64 *v5; // r10
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // cl
  bool v10; // cf
  __int64 v12; // r10
  __int64 *v13; // rsi
  _BYTE *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  char v17; // dl
  unsigned __int8 *v18; // rcx

  v1 = (unsigned int)KeNumberProcessors_0;
  v3 = *(_BYTE *)(KiProcessorBlock[0] + 35352);
  v4 = v3;
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    return 0LL;
  v5 = &qword_140FC2DC8;
  v6 = (unsigned int)(KeNumberProcessors_0 - 1);
  do
  {
    v7 = *v5++;
    v8 = v4;
    v9 = v3;
    v4 = *(_BYTE *)(v7 + 35352);
    v10 = v3 < v4;
    v3 = v4;
    if ( v10 )
      v3 = v9;
    if ( v8 > v4 )
      v4 = v8;
    --v6;
  }
  while ( v6 );
  if ( v3 == v4 )
    return 0LL;
  v12 = 0LL;
  if ( a1 )
  {
    v13 = KiProcessorBlock;
    v14 = (_BYTE *)(a1 + 48);
    do
    {
      v15 = *v13;
      v16 = *(_QWORD *)(a1 + 16);
      ++v13;
      v17 = *(_BYTE *)(v15 + 35352);
      v14[1] = v17;
      *v14 = v4 - v17;
      v14 += 4;
      *(_BYTE *)(v12 + v16) = v17;
      ++v12;
      v18 = *(unsigned __int8 **)(a1 + 24);
      *v18 = v4;
      v18[1] = v4;
      --v1;
    }
    while ( v1 );
  }
  KiEfficiencyClassSystem = 1;
  return 1LL;
}
