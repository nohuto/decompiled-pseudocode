/*
 * XREFs of IopPortBacktrackAllocation @ 0x1407A97C0
 * Callers:
 *     <none>
 * Callees:
 *     IopPortGetNextAlias @ 0x1407A9930 (IopPortGetNextAlias.c)
 *     RtlDeleteRange @ 0x140B4C0E0 (RtlDeleteRange.c)
 */

__int64 __fastcall IopPortBacktrackAllocation(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  char NextAlias; // al
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a2;
  v11 = v4;
  while ( 1 )
  {
    NextAlias = IopPortGetNextAlias(*(unsigned int *)(a2[5] + 36LL), v4, &v11);
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_QWORD *)(a2[4] + 32LL);
    if ( !NextAlias )
      break;
    v5 = v11;
    RtlDeleteRange(v8, v11, *(_QWORD *)(v7 + 16) + v11 - 1, v9);
    v4 = v5;
  }
  return RtlDeleteRange(v8, *a2, a2[1], v9);
}
