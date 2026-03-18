/*
 * XREFs of RIMRetrieveNormalizationRange @ 0x14016A7E8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x14016A024 (RIMPopulatePointerDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRetrieveRealAngularPhysicalValues @ 0x140210B84 (RIMRetrieveRealAngularPhysicalValues.c)
 */

__int64 __fastcall RIMRetrieveNormalizationRange(__int16 a1, __int16 a2, __int16 a3, __int128 *a4, _QWORD *a5)
{
  _QWORD *v5; // r14
  unsigned int v10; // r15d
  int v11; // r9d
  int v12; // ecx
  unsigned int v13; // edx
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  __int128 v19; // xmm1
  __int128 v21; // [rsp+20h] [rbp-50h] BYREF
  __int128 v22; // [rsp+30h] [rbp-40h]
  __int128 v23; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  int v26; // [rsp+B8h] [rbp+48h] BYREF

  v5 = a5;
  v10 = 0;
  if ( !a5 )
  {
    LODWORD(a5) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 25LL);
  }
  v11 = *((_DWORD *)a4 + 12);
  v12 = *((_DWORD *)a4 + 13);
  v13 = 0;
  LODWORD(a5) = v11;
  v26 = v12;
  while ( v13 < 5 )
  {
    if ( word_140271518[6 * v13] == *(_WORD *)a4 && word_140271518[6 * v13 + 1] == *((_WORD *)a4 + 28) )
    {
      v10 = 1;
      *v5 = *(_QWORD *)&word_140271518[6 * v13 + 2];
      if ( a1 == 13
        && (a2 == 63 && a3 == 4 || a2 == 61 && a3 == 1 || a2 == 62 && a3 == 1 || a2 == 65 && a3 == 1)
        && v12 - v11 > 0 )
      {
        v14 = a4[1];
        v21 = *a4;
        v23 = a4[2];
        v15 = *((_QWORD *)a4 + 8);
        v22 = v14;
        v16 = a4[3];
        v25 = v15;
        v24 = v16;
        RIMRetrieveRealAngularPhysicalValues(&v21, &a5);
        v17 = a4[1];
        v21 = *a4;
        v23 = a4[2];
        v18 = *((_QWORD *)a4 + 8);
        v22 = v17;
        v19 = a4[3];
        v25 = v18;
        v24 = v19;
        RIMRetrieveRealAngularPhysicalValues(&v21, &v26);
      }
      return v10;
    }
    ++v13;
  }
  return v10;
}
