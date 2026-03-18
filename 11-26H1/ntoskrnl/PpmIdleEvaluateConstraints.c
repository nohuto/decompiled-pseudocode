/*
 * XREFs of PpmIdleEvaluateConstraints @ 0x140507E70
 * Callers:
 *     PpmIdleSelectStates @ 0x1403EA21C (PpmIdleSelectStates.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PoAllProcessorsDeepIdle @ 0x1406013E0 (PoAllProcessorsDeepIdle.c)
 */

unsigned __int64 __fastcall PpmIdleEvaluateConstraints(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rbx
  int v5; // eax
  char v6; // al
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 34880);
  v8 = 0LL;
  *a2 = RtlGetInterruptTimePrecise(&v8);
  v4 = v8;
  *(_QWORD *)(v2 + 672) = v8;
  *(_QWORD *)(v2 + 680) = *(_QWORD *)(a1 + 34896) + *(_QWORD *)(a1 + 35104);
  *(_BYTE *)(v2 + 714) = *(_BYTE *)(a1 + 35356);
  *(_BYTE *)(v2 + 712) = *(_BYTE *)(a1 + 34964);
  *(_BYTE *)(v2 + 713) = *(_BYTE *)(a1 + 34965);
  *(_BYTE *)(v2 + 715) = 1;
  if ( *(_BYTE *)(a1 + 33) && (unsigned __int8)PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v2 + 716) = 1;
    *(_WORD *)(v2 + 56) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v2 + 716) = 0;
  }
  if ( *(_BYTE *)(v2 + 1) )
  {
    *(_WORD *)(v2 + 56) |= 0x100u;
    v5 = *(_DWORD *)(v2 + 36);
  }
  else
  {
    v5 = -1;
  }
  *(_DWORD *)(v2 + 704) = v5;
  if ( PpmIdleRespectIdleStateMax )
  {
    v6 = BYTE2(PpmCurrentProfile[89 * dword_140F106CC + 37]);
    *(_BYTE *)(v2 + 718) = v6;
    if ( v6 )
      *(_WORD *)(v2 + 56) |= 0x4000u;
  }
  else
  {
    *(_BYTE *)(v2 + 718) = 0;
  }
  return v4;
}
