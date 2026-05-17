/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x1800D8010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetDaclSecurityDescriptor(__int64 a1, char a2, __int64 a3, char a4)
{
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // ax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
  {
    if ( a2 )
    {
      v5 = v4 | 4;
      *(_QWORD *)(a1 + 32) = 0LL;
      if ( a3 )
        *(_QWORD *)(a1 + 32) = a3;
      v6 = v5 & 0xFFF7;
      *(_WORD *)(a1 + 2) = v6;
      if ( !a4 )
        return 0LL;
      v7 = v6 | 8;
    }
    else
    {
      v7 = v4 & 0xFFFB;
    }
    *(_WORD *)(a1 + 2) = v7;
    return 0LL;
  }
  return 3221225593LL;
}
