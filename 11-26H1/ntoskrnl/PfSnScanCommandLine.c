/*
 * XREFs of PfSnScanCommandLine @ 0x1409D320C
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x1409D30B0 (PfSnCalculateScenarioNameAndHash.c)
 * Callees:
 *     PfSnParsePrefetchParam @ 0x140AB05DC (PfSnParsePrefetchParam.c)
 *     PfSnCaptureParamBlockString @ 0x140AFFA24 (PfSnCaptureParamBlockString.c)
 *     PfSnGetUnsafeProcessParameters @ 0x140B13768 (PfSnGetUnsafeProcessParameters.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnScanCommandLine(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 v3; // rbx
  __int64 UnsafeProcessParameters; // rax
  int v8; // edi
  int v9; // eax
  int v10; // edi
  void *v11; // r10
  __int64 v12; // r9
  unsigned __int8 *v13; // r8
  unsigned __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  _OWORD v24[2]; // [rsp+20h] [rbp-28h] BYREF
  int v25; // [rsp+68h] [rbp+20h] BYREF

  v25 = 0;
  LODWORD(v3) = 0;
  v24[0] = 0LL;
  UnsafeProcessParameters = PfSnGetUnsafeProcessParameters();
  if ( UnsafeProcessParameters )
  {
    v8 = PfSnCaptureParamBlockString(UnsafeProcessParameters, UnsafeProcessParameters + 112, v24);
    if ( v8 >= 0 )
    {
      v9 = PfSnParsePrefetchParam(v24, &v25);
      v10 = v25;
      v11 = (void *)*((_QWORD *)&v24[0] + 1);
      if ( v9 < 0 )
        v10 = 0;
      if ( !a3 )
        goto LABEL_13;
      v12 = LOWORD(v24[0]);
      v13 = (unsigned __int8 *)*((_QWORD *)&v24[0] + 1);
      v3 = 314159LL;
      if ( LOWORD(v24[0]) >= 8uLL )
      {
        v14 = (unsigned __int64)LOWORD(v24[0]) >> 3;
        v12 = LOWORD(v24[0]) - 8 * v14;
        do
        {
          v15 = v13[6]
              + 37 * (v13[5] + 37 * (v13[4] + 37 * (v13[3] + 37 * (v13[2] + 37 * (v13[1] + 37 * (*v13 + 37 * v3))))));
          v16 = v13[7];
          v13 += 8;
          v3 = v16 + 37 * v15;
          --v14;
        }
        while ( v14 );
      }
      v17 = v12 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v20 = v18 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  if ( v23 != 1 )
                    goto LABEL_13;
                  LODWORD(v3) = *v13++ + 37 * v3;
                }
                LODWORD(v3) = *v13++ + 37 * v3;
              }
              LODWORD(v3) = *v13++ + 37 * v3;
            }
            LODWORD(v3) = *v13++ + 37 * v3;
          }
          LODWORD(v3) = *v13++ + 37 * v3;
        }
        LODWORD(v3) = *v13++ + 37 * v3;
      }
      LODWORD(v3) = *v13 + 37 * v3;
LABEL_13:
      *a1 = v3;
      *a2 = v10;
      v8 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v8 = -1073741431;
  }
  v11 = (void *)*((_QWORD *)&v24[0] + 1);
LABEL_14:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v8;
}
