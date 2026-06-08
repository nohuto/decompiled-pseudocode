/*
 * XREFs of PctGetIntelEsuType @ 0x14000523C
 * Callers:
 *     InitEnergyCounters @ 0x14002A270 (InitEnergyCounters.c)
 *     ConfigureIntelEmu @ 0x14002B800 (ConfigureIntelEmu.c)
 *     InitDriver @ 0x14004A03C (InitDriver.c)
 * Callees:
 *     GetCPUFamilyAndModel @ 0x140049008 (GetCPUFamilyAndModel.c)
 */

__int64 PctGetIntelEsuType()
{
  __int64 v0; // rbx
  unsigned int v1; // edi
  unsigned int i; // edx
  _DWORD v4[8]; // [rsp+20h] [rbp-79h]
  _DWORD v5[44]; // [rsp+40h] [rbp-59h]
  unsigned __int8 v6; // [rsp+100h] [rbp+67h] BYREF
  __int16 v7; // [rsp+108h] [rbp+6Fh] BYREF

  v0 = 0LL;
  v4[0] = 55;
  v6 = 0;
  v7 = 0;
  v4[1] = 74;
  v1 = 2;
  v4[2] = 90;
  v4[3] = 93;
  v4[4] = 77;
  v4[5] = 76;
  v5[0] = 92;
  v5[1] = 60;
  v5[2] = 69;
  v5[3] = 70;
  v5[4] = 63;
  v5[5] = 86;
  v5[6] = 79;
  v5[7] = 61;
  v5[8] = 71;
  v5[9] = 85;
  v5[10] = 87;
  v5[11] = 133;
  v5[12] = 42;
  v5[13] = 45;
  v5[14] = 58;
  v5[15] = 62;
  v5[16] = 78;
  v5[17] = 94;
  v5[18] = 142;
  v5[19] = 158;
  v5[20] = 125;
  v5[21] = 126;
  v5[22] = 138;
  v5[23] = 140;
  v5[24] = 141;
  v5[25] = 165;
  v5[26] = 166;
  v5[27] = 167;
  v5[28] = 151;
  v5[29] = 154;
  v5[30] = 190;
  v5[31] = 183;
  v5[32] = 186;
  v5[33] = 191;
  v5[34] = 156;
  v5[35] = 170;
  v5[36] = 172;
  v5[37] = 181;
  v5[38] = 197;
  v5[39] = 198;
  v5[40] = 189;
  v5[41] = 188;
  GetCPUFamilyAndModel(&v7, &v6);
  if ( v7 == 6 )
  {
    for ( i = 0; i < 6; ++i )
    {
      if ( v6 == v4[i] )
        return 0;
    }
    while ( (unsigned int)v0 < 0x2A )
    {
      if ( v6 == v5[v0] )
        return 1;
      v0 = (unsigned int)(v0 + 1);
    }
  }
  return v1;
}
