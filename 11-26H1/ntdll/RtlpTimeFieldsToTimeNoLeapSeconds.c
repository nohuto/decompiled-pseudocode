/*
 * XREFs of RtlpTimeFieldsToTimeNoLeapSeconds @ 0x1800A04F0
 * Callers:
 *     RtlpTimeFieldsToTime @ 0x18009FF20 (RtlpTimeFieldsToTime.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpTimeFieldsToTimeNoLeapSeconds(__int16 *a1, _QWORD *a2)
{
  int v2; // eax
  int v3; // r9d
  unsigned int v4; // r8d
  unsigned int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // r11
  unsigned int v8; // r14d
  int v9; // r10d
  unsigned int v10; // r15d
  __int16 *v11; // rbx
  __int64 v12; // r12
  int v13; // ecx
  int v14; // eax

  v2 = a1[1];
  v3 = a1[2];
  v4 = *a1;
  v5 = a1[3];
  v6 = a1[4];
  v7 = (unsigned int)(v2 - 1);
  v8 = a1[5];
  v9 = v3 - 1;
  v10 = a1[6];
  if ( v2 < 1 || v3 < 1 || v4 - 1601 > 0x722A || (unsigned int)v7 > 0xB )
    return 0;
  v11 = LeapYearDaysPrecedingMonth;
  if ( v4 != 400 * (v4 / 0x190) && (v4 == 100 * (v4 / 0x64) || (v4 & 3) != 0) )
  {
    v12 = (unsigned int)v7;
    v13 = NormalYearDaysPrecedingMonth[v2];
    v14 = NormalYearDaysPrecedingMonth[v12];
  }
  else
  {
    v13 = LeapYearDaysPrecedingMonth[v2];
    v12 = v7;
    v14 = LeapYearDaysPrecedingMonth[v7];
  }
  if ( (__int16)v9 >= v13 - v14 || v8 > 0x3B || v10 > 0x3E7 || v6 > 0x3B || v5 > 0x17 )
    return 0;
  if ( v4 - 1600 != 400 * ((v4 - 1600) / 0x190) && (v4 - 1600 == 100 * ((v4 - 1600) / 0x64) || (v4 & 3) != 0) )
    v11 = NormalYearDaysPrecedingMonth;
  *a2 = 10000
      * (v10
       + 1000 * (v8 + 60 * (v6 + 60 * v5))
       + 86400000LL
       * (int)(v9 + ((v4 - 1601) >> 2) + 365 * (v4 - 1601) + (v4 - 1601) / 0x190 - (v4 - 1601) / 0x64 + v11[v12]));
  return 1;
}
