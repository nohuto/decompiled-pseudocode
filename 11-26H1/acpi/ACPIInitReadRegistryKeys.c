/*
 * XREFs of ACPIInitReadRegistryKeys @ 0x1400D7F6C
 * Callers:
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1400D1E58 (OSCloseHandle.c)
 */

void ACPIInitReadRegistryKeys()
{
  void *v0; // rbx
  void *v1; // rsi
  int v2; // eax
  int v3; // edx
  unsigned int v4; // edi
  _BYTE *Pool2; // rax
  int v6; // eax
  int v7; // edx
  int v8; // r9d
  char *v9; // rax
  __int64 v10; // rax
  int v11; // r14d
  unsigned int v12; // edi
  _BYTE *v13; // rax
  unsigned int v14; // r14d
  char *v15; // rax
  char *v16; // r15
  unsigned int v17; // edx
  char v18; // di
  char *v19; // rax
  char v20; // cl
  int v21; // [rsp+28h] [rbp-10h]
  int v22; // [rsp+28h] [rbp-10h]
  unsigned int v23; // [rsp+70h] [rbp+38h] BYREF
  int v24; // [rsp+78h] [rbp+40h] BYREF
  int v25; // [rsp+80h] [rbp+48h] BYREF
  void *v26; // [rsp+88h] [rbp+50h] BYREF

  v0 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v24 = 0;
  v23 = 4;
  v1 = 0LL;
  if ( (int)OSReadRegValue("Attributes", 0LL, &v24, &v23) >= 0 )
    AcpiOverrideAttributes |= v24 & 0xFFFEFFFF;
  AcpiProcessorString = 0LL;
  v2 = OSOpenHandle("\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0", 0LL, (__int64)&v26);
  if ( v2 >= 0 )
  {
    v4 = 40;
    while ( 1 )
    {
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, v4, 1399874369LL);
      v0 = Pool2;
      if ( !Pool2 )
        break;
      v23 = v4;
      v4 += 10;
      v6 = OSReadRegValue("Identifier", v26, Pool2, &v23);
      if ( v6 != -2147483643 )
      {
        if ( v6 >= 0 )
        {
          v9 = strstr((const char *)v0, "Stepping");
          if ( v9 )
            *(v9 - 1) = 0;
          v10 = -1LL;
          do
            ++v10;
          while ( *((_BYTE *)v0 + v10) );
          v11 = v10 + 1;
          v12 = 10;
          while ( 1 )
          {
            if ( v1 )
              ExFreePoolWithTag(v1, 0);
            v13 = (_BYTE *)ExAllocatePool2(256LL, v12, 1399874369LL);
            v1 = v13;
            if ( !v13 )
              break;
            v23 = v12;
            v12 += 10;
            v6 = OSReadRegValue("VendorIdentifier", v26, v13, &v23);
            if ( v6 != -2147483643 )
            {
              if ( v6 >= 0 )
              {
                v14 = v23 + 2 + v11;
                v15 = (char *)ExAllocatePool2(64LL, v14, 1399874369LL);
                v16 = v15;
                if ( v15 )
                {
                  RtlStringCchPrintfA(v15, v14, "%s - %s", (const char *)v1, (const char *)v0);
                  v17 = 0;
                  v18 = 1;
                  if ( v14 )
                  {
                    v19 = v16;
                    do
                    {
                      v20 = *v19;
                      if ( !*v19 )
                        break;
                      if ( v20 < 32 || v20 == 44 )
                        *v19 = 32;
                      ++v17;
                      ++v19;
                    }
                    while ( v17 < v14 );
                  }
                  WORD1(AcpiProcessorString) = v14;
                  LOWORD(AcpiProcessorString) = v14;
                  *((_QWORD *)&AcpiProcessorString + 1) = v16;
                  v23 = 4;
                  if ( (int)OSReadRegValue("ProcDevAsyncStart", 0LL, &v25, &v23) < 0 || !v25 )
                    v18 = 0;
                  AcpiProcessorAsyncStart = v18;
                  v24 = 0;
                  v23 = 4;
                  if ( (int)OSReadRegValue("PccWatchdogRetryCount", 0LL, &v24, &v23) >= 0 && v24 )
                    AcpiPccWatchdogRetryCount = v24;
                }
                goto LABEL_41;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_41;
              v8 = 18;
              goto LABEL_14;
            }
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = 17;
LABEL_14:
          v22 = v6;
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v7,
            11,
            v8,
            (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
            v22);
        }
        break;
      }
    }
LABEL_41:
    if ( v26 )
      OSCloseHandle(v26);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = v2;
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      11,
      16,
      (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
      v21);
  }
}
