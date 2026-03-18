/*
 * XREFs of HUBDSM_CheckingIfExemptSecureBioDevice @ 0x1400208D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfExemptSecureBioDevice(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int16 v3; // r9
  __int16 v4; // r8
  __int64 v5; // rax
  _DWORD v7[24]; // [rsp+0h] [rbp-60h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4061;
  v7[0] = 1381041160;
  v7[1] = 1381106696;
  v7[2] = 1381172232;
  v3 = *(_WORD *)(v1 + 2004);
  v4 = *(_WORD *)(v1 + 2006);
  v5 = 0LL;
  v7[3] = 1381237768;
  v7[4] = 1381303304;
  v7[5] = 1401947144;
  v7[6] = 1887831242;
  v7[7] = 1888027850;
  v7[8] = -1240333070;
  v7[9] = -1235548942;
  v7[10] = -1234893582;
  v7[11] = -1233255182;
  v7[12] = -1232927502;
  v7[13] = -1235680014;
  v7[14] = -1232468750;
  v7[15] = 395777871;
  v7[16] = 402790223;
  v7[17] = 683940815;
  v7[18] = -1341121585;
  v7[19] = -1739968780;
  v7[20] = 555637126;
  v7[21] = 555768198;
  while ( v3 != LOWORD(v7[v5]) || v4 != HIWORD(v7[v5]) )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x16 )
      return v2;
  }
  return 4089;
}
