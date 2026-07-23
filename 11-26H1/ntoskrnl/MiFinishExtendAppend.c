/*
 * XREFs of MiFinishExtendAppend @ 0x1404829A0
 * Callers:
 *     MiAppendSubsectionChain @ 0x1404C17E8 (MiAppendSubsectionChain.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x140482AB0 (MiInsertSubsectionNode.c)
 *     MiMarkSubsectionsStatic @ 0x140482BB0 (MiMarkSubsectionsStatic.c)
 *     MiReturnAllSubsectionCharges @ 0x140482C1C (MiReturnAllSubsectionCharges.c)
 *     MiMarkSubsectionsDynamic @ 0x1406FCDB4 (MiMarkSubsectionsDynamic.c)
 */

__int64 __fastcall MiFinishExtendAppend(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 i; // rbx
  unsigned int v11; // ebp

  v3 = *a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(*a1 + 48) )
  {
    v11 = a1[6] & 0x3FFFFFFF;
    if ( !v11 )
      v4 = MiReturnAllSubsectionCharges(*(_QWORD *)(a2 + 16));
    MiMarkSubsectionsStatic(v5, v11);
    if ( !*a3 && *(_QWORD *)(v5 + 8) && (*(_DWORD *)(v3 + 56) & 0x30000000) != 0 )
      *a3 = v5;
  }
  else if ( *(_QWORD *)(v5 + 8) )
  {
    v4 = MiMarkSubsectionsDynamic(*(_QWORD *)(a2 + 16));
  }
  *((_DWORD *)a1 + 8) &= 0xFFFFFu;
  *((_DWORD *)a1 + 10) = *(_DWORD *)(a2 + 40);
  *((_DWORD *)a1 + 13) = 0;
  a1[2] = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  for ( i = a1[2]; i; i = *(_QWORD *)(i + 16) )
    MiInsertSubsectionNode(v3, i, 1LL);
  return v4;
}
