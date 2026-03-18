/*
 * XREFs of sub_14002E4EC @ 0x14002E4EC
 * Callers:
 *     sub_140007A70 @ 0x140007A70 (sub_140007A70.c)
 *     sub_140008150 @ 0x140008150 (sub_140008150.c)
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14002E5AC @ 0x14002E5AC (sub_14002E5AC.c)
 */

char __fastcall sub_14002E4EC(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rbx

  v3 = a2;
  v4 = sub_140005000(a2);
  if ( *(_WORD *)(v4 + 4212) )
  {
    *(_BYTE *)(v5 + 3) = 4;
    return v4;
  }
  v6 = *(_DWORD *)(a1 + 24);
  if ( (v6 & 0x10) != 0 )
  {
    LOBYTE(v4) = 14;
    goto LABEL_7;
  }
  if ( (v6 & 0x100) != 0 )
  {
    LOBYTE(v4) = 2;
LABEL_7:
    *(_BYTE *)(v5 + 3) = v4;
    if ( v3 )
    {
      do
      {
        v7 = *(_QWORD *)(v3 + 40);
        LOBYTE(v4) = sub_14000A8A0(a1, v3, 0);
        v3 = v7;
      }
      while ( v7 );
    }
    return v4;
  }
  LOBYTE(v4) = sub_14002E5AC(a1, v5, a1 + 336, *(unsigned __int16 *)(a1 + 324));
  if ( !(_BYTE)v4 )
  {
    while ( v3 )
    {
      if ( *(_BYTE *)(v3 + 3) == 5 )
        LOBYTE(v4) = sub_1400092F0(a1, v3);
      v3 = *(_QWORD *)(v3 + 40);
    }
  }
  return v4;
}
