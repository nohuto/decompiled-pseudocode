/*
 * XREFs of RtlpTimeToTimeFieldsNoLeapSeconds @ 0x14044A1C0
 * Callers:
 *     RtlpTimeToTimeFields @ 0x140449E70 (RtlpTimeToTimeFields.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTimeToTimeFieldsNoLeapSeconds(__int64 *a1, _WORD *a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  signed __int64 v5; // rcx
  signed __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  int v8; // esi
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // rbx
  __int16 v16; // ax
  unsigned int v17; // r9d
  __int64 result; // rax

  v2 = *a1;
  v4 = -*a1;
  if ( v4 < 0 )
    v4 = v2;
  v5 = (unsigned __int64)(((unsigned __int64)v4 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( v2 < 0 )
    v5 = -v5;
  v6 = -v5;
  if ( v5 > 0 )
    v6 = v5;
  v7 = (unsigned __int64)(((unsigned __int64)v6 * (unsigned __int128)(unsigned __int64)Magic86400000) >> 64) >> 26;
  v8 = v7;
  if ( v5 < 0 )
  {
    v7 = -(__int64)v7;
    v8 = v7;
  }
  v9 = v5 - 86400000 * v7;
  a2[7] = ((int)v7 + 1) % 7u;
  v10 = (unsigned int)v7 / 0x23AB1;
  v11 = (unsigned int)v7 % 0x23AB1;
  v12 = (100 * ((v11 - 36524 * ((100 * v11 + 75) / 0x37BB49)) % 0x5B5) + 75) / 0x8EAD
      + 4 * ((v11 - 36524 * ((100 * v11 + 75) / 0x37BB49)) / 0x5B5 + 25 * ((100 * v11 + 75) / 0x37BB49 + 4 * v10));
  v13 = v12 + 1;
  v14 = v12 / 0x64 + v8 + -365 * v12 - v12 / 0x190 - (v12 >> 2);
  if ( v12 + 1 != 400 * ((v12 + 1) / 0x190) && (v13 == 100 * (v13 / 0x64) || (v13 & 3) != 0) )
  {
    v15 = *((unsigned __int8 *)NormalYearDayToMonth + v14);
    v16 = NormalYearDaysPrecedingMonth[v15];
  }
  else
  {
    LOWORD(v15) = *((unsigned __int8 *)LeapYearDayToMonth + v14);
    v16 = LeapYearDaysPrecedingMonth[*((unsigned __int8 *)LeapYearDayToMonth + v14)];
  }
  a2[1] = v15 + 1;
  a2[2] = v12 / 0x64 + v8 + -365 * v12 - v12 / 0x190 - (v12 >> 2) - v16 + 1;
  v17 = v9 / 0x3E8 / 0x3C;
  *a2 = v12 + 1601;
  a2[3] = v17 / 0x3C;
  a2[4] = v17 % 0x3C;
  a2[5] = v9 / 0x3E8 % 0x3C;
  result = 1000LL;
  a2[6] = v9 % 0x3E8;
  return result;
}
