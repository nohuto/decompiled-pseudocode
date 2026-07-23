/*
 * XREFs of RtlpCompareAces @ 0x180043BE0
 * Callers:
 *     RtlpConvertAclToAutoInherit @ 0x180124828 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlEqualSid @ 0x180043DE0 (RtlEqualSid.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

char __fastcall RtlpCompareAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rdx
  __int16 v9; // bp
  int v11; // ecx

  v6 = *a1;
  if ( (unsigned __int8)v6 < 5u || (unsigned __int8)v6 > 8u )
  {
    if ( (unsigned __int8)(*a2 - 5) <= 3u
      || RtlBaseAceType[*a2] != RtlBaseAceType[v6]
      || RtlIsSystemAceType[*a2] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    {
      return 0;
    }
    v9 = *((_WORD *)a1 + 4);
    if ( *((_WORD *)a2 + 4) == v9 && !memcmp(a2 + 8, a1 + 8, 4LL * HIBYTE(*((_WORD *)a2 + 4)) + 8) )
      return 1;
    if ( (a2[1] & 3 | ~a2[1] & 8) == 8
      && (a3 || a4)
      && (_BYTE)v9 == 1
      && !a1[10]
      && !a1[11]
      && !a1[12]
      && !a1[13]
      && !a1[14]
      && a1[15] == 3
      && a1[9] == 1 )
    {
      v11 = *((_DWORD *)a1 + 4);
      if ( v11 )
      {
        if ( v11 == 1 && a4 && RtlEqualSid(a2 + 8, a4) )
          return 1;
      }
      else if ( a3 && RtlEqualSid(a2 + 8, a3) )
      {
        return 1;
      }
    }
    return 0;
  }
  if ( (unsigned __int8)(*a2 - 5) > 3u )
    return 0;
  return RtlpCompareKnownObjectAces(a1, a2);
}
