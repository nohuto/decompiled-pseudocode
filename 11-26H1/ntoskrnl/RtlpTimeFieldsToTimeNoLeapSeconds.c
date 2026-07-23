/*
 * XREFs of RtlpTimeFieldsToTimeNoLeapSeconds @ 0x14044A4CC
 * Callers:
 *     RtlpTimeFieldsToTime @ 0x14044A428 (RtlpTimeFieldsToTime.c)
 *     RtlParseLeapSecondData @ 0x1408ADA94 (RtlParseLeapSecondData.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpTimeFieldsToTimeNoLeapSeconds(__int16 *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // r8d
  unsigned int v5; // esi
  int v6; // r11d
  unsigned int v7; // r14d
  __int64 v8; // rbx
  unsigned int v9; // r15d
  unsigned int v10; // r10d
  unsigned int v11; // ebp
  BOOL v12; // eax
  __int64 v13; // rdi
  __int16 *v14; // r10
  int v15; // eax
  int v16; // ecx
  char result; // al

  v2 = a1[1];
  v4 = *a1;
  v5 = a1[3];
  v6 = a1[2] - 1;
  v7 = a1[4];
  v8 = v2;
  v9 = a1[5];
  v10 = v2 - 1;
  v11 = a1[6];
  if ( a1[1] < 1 || a1[2] < 1 || v4 - 1601 > 0x722A || v10 > 0xB )
    return 0;
  v12 = v4 == 400 * (v4 / 0x190) || v4 != 100 * (v4 / 0x64) && (v4 & 3) == 0;
  v13 = v10;
  v14 = LeapYearDaysPrecedingMonth;
  if ( v12 )
  {
    v15 = LeapYearDaysPrecedingMonth[v13];
    v16 = LeapYearDaysPrecedingMonth[v8];
  }
  else
  {
    v15 = NormalYearDaysPrecedingMonth[v13];
    v16 = NormalYearDaysPrecedingMonth[v8];
  }
  if ( (__int16)v6 >= v16 - v15 || v5 > 0x17 || v7 > 0x3B || v9 > 0x3B || v11 > 0x3E7 )
    return 0;
  if ( v4 - 1600 != 400 * ((v4 - 1600) / 0x190) && (v4 - 1600 == 100 * ((v4 - 1600) / 0x64) || (v4 & 3) != 0) )
    v14 = NormalYearDaysPrecedingMonth;
  result = 1;
  *a2 = 10000
      * (v11
       + 1000 * (v9 + 60 * (v7 + 60 * v5))
       + 86400000LL
       * (int)(v6 + ((v4 - 1601) >> 2) + 365 * (v4 - 1601) + (v4 - 1601) / 0x190 - (v4 - 1601) / 0x64 + v14[v13]));
  return result;
}
