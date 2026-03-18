/*
 * XREFs of sub_14002B6F0 @ 0x14002B6F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_1400078E0 @ 0x1400078E0 (sub_1400078E0.c)
 */

__int64 __fastcall sub_14002B6F0(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  _BYTE *v4; // rdx
  __int64 v5; // r10
  unsigned int v6; // r11d
  unsigned int i; // ecx
  __int64 v8; // r10
  unsigned int j; // ecx
  unsigned int k; // ecx
  unsigned __int64 v11; // rdx

  v3 = a1;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
  {
    v4 = *(_BYTE **)(sub_140005000(a2) + 4200);
  }
  else if ( a2 == a1 + 1016 )
  {
    v4 = (_BYTE *)(a1 + 1008);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 1392);
    if ( v5 )
    {
      v6 = *(unsigned __int16 *)(a1 + 1552);
      for ( i = 0; i < v6; ++i )
      {
        v4 = (_BYTE *)(v5 + ((unsigned __int64)i << 7));
        if ( (_BYTE *)a2 == v4 + 8 )
          goto LABEL_21;
      }
    }
    v8 = *(_QWORD *)(v3 + 1400);
    if ( v8 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(v3 + 1554); ++j )
      {
        v4 = (_BYTE *)(v8 + ((unsigned __int64)j << 7));
        if ( (_BYTE *)a2 == v4 + 8 )
          goto LABEL_21;
      }
    }
    for ( k = 0; k < 2; ++k )
    {
      v11 = (unsigned __int64)k << 7;
      if ( a2 == v11 + v3 + 1144 )
      {
        v4 = (_BYTE *)(v3 + v11 + 1136);
        goto LABEL_21;
      }
    }
    v4 = 0LL;
  }
LABEL_21:
  *v4 = 0;
  return sub_1400078E0(v3, (__int64)v4);
}
