/*
 * XREFs of RIMRetrieveNormalizationRange @ 0x1401F5964
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1401E1634 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRetrieveRealAngularPhysicalValues @ 0x1401F5AF4 (RIMRetrieveRealAngularPhysicalValues.c)
 */

__int64 __fastcall RIMRetrieveNormalizationRange(__int16 a1, __int16 a2, __int16 a3, __int16 *a4, _QWORD *a5)
{
  _QWORD *v5; // r14
  unsigned int v10; // r15d
  int v11; // r9d
  _WORD *v12; // rdx
  int v13; // ecx
  unsigned int v14; // r8d
  __int16 v15; // r10
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int64 v20; // xmm0_8
  __int128 v21; // xmm1
  _OWORD v23[4]; // [rsp+28h] [rbp-71h] BYREF
  __int64 v24; // [rsp+68h] [rbp-31h]
  _OWORD v25[4]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+1Fh]
  int v27; // [rsp+110h] [rbp+77h] BYREF

  v5 = a5;
  v10 = 0;
  if ( !a5 )
  {
    LODWORD(a5) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 25);
  }
  v11 = *((_DWORD *)a4 + 12);
  v12 = &unk_140272E02;
  v13 = *((_DWORD *)a4 + 13);
  v14 = 0;
  v15 = *a4;
  LODWORD(a5) = v11;
  v27 = v13;
  while ( *(v12 - 1) != v15 || *v12 != a4[28] )
  {
    ++v14;
    v12 += 6;
    if ( v14 >= 5 )
      return v10;
  }
  v10 = 1;
  *v5 = *(_QWORD *)((char *)&unk_140272E04 + 12 * v14);
  if ( a1 == 13
    && (a2 == 63 && a3 == 4 || a2 == 61 && a3 == 1 || a2 == 62 && a3 == 1 || a2 == 65 && a3 == 1)
    && v13 - v11 > 0 )
  {
    v16 = *((_OWORD *)a4 + 1);
    v23[0] = *(_OWORD *)a4;
    v23[2] = *((_OWORD *)a4 + 2);
    v17 = *((_QWORD *)a4 + 8);
    v23[1] = v16;
    v18 = *((_OWORD *)a4 + 3);
    v24 = v17;
    v23[3] = v18;
    RIMRetrieveRealAngularPhysicalValues(v23, &a5);
    v19 = *((_OWORD *)a4 + 1);
    v25[0] = *(_OWORD *)a4;
    v25[2] = *((_OWORD *)a4 + 2);
    v20 = *((_QWORD *)a4 + 8);
    v25[1] = v19;
    v21 = *((_OWORD *)a4 + 3);
    v26 = v20;
    v25[3] = v21;
    RIMRetrieveRealAngularPhysicalValues(v25, &v27);
  }
  return v10;
}
