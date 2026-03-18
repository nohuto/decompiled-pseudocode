/*
 * XREFs of sub_140008E60 @ 0x140008E60
 * Callers:
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14002E5AC @ 0x14002E5AC (sub_14002E5AC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140008E60(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  unsigned int v4; // r8d
  unsigned int i; // eax
  __int64 v6; // rcx
  unsigned int j; // r10d

  if ( *(_DWORD *)(a2 + 12) == 251658240 || a2 == a1 + 1016 )
    return 1;
  v3 = *(_QWORD *)(a1 + 1392);
  v4 = 0;
  if ( v3 )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 1552); ++i )
    {
      if ( a2 == v3 + ((unsigned __int64)i << 7) + 8 )
        return 1;
    }
  }
  v6 = *(_QWORD *)(a1 + 1400);
  if ( !v6 )
    goto LABEL_9;
  for ( j = 0; j < *(unsigned __int16 *)(a1 + 1554); ++j )
  {
    if ( a2 == v6 + ((unsigned __int64)j << 7) + 8 )
      return 1;
  }
LABEL_9:
  while ( v4 < 2 )
  {
    if ( a2 == a1 + ((unsigned __int64)v4 << 7) + 1144 )
      return 1;
    ++v4;
  }
  return 0;
}
