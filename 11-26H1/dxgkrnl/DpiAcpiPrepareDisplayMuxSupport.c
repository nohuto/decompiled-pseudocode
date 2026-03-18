/*
 * XREFs of DpiAcpiPrepareDisplayMuxSupport @ 0x1402533C0
 * Callers:
 *     DpiFdoIsMdmDeviceAndOwnsMux @ 0x1400905B8 (DpiFdoIsMdmDeviceAndOwnsMux.c)
 *     DpiMdmProcessStartAdapter @ 0x140090C00 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x14005A034 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?DpiAcpiDoesDepContainMux@@YAEPEAU_FDO_CONTEXT@@PEAU_ACPI_EVAL_OUTPUT_BUFFER_V1@@@Z @ 0x1400932E8 (-DpiAcpiDoesDepContainMux@@YAEPEAU_FDO_CONTEXT@@PEAU_ACPI_EVAL_OUTPUT_BUFFER_V1@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiAcpiPrepareAcpiEnumChildCache @ 0x14025300C (DpiAcpiPrepareAcpiEnumChildCache.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1403B21B4 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareDisplayMuxSupport(struct _FDO_CONTEXT *a1)
{
  int v2; // esi
  __int64 result; // rax
  __int64 v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // r9d
  int v9; // eax
  __int64 v10; // r11
  _BYTE *v11; // r10
  __int64 v12; // rdx
  bool v13; // cf
  __int64 v14; // rcx
  int v15; // r9d
  int v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  struct _STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _ACPI_EVAL_OUTPUT_BUFFER_V1 v19[8]; // [rsp+70h] [rbp-90h] BYREF

  v17 = 0LL;
  memset(v19, 0, 148);
  DestinationString = 0LL;
  *(_OWORD *)v16 = 0LL;
  if ( !*((_BYTE *)a1 + 6392) )
  {
    *((_BYTE *)a1 + 6392) = 1;
    v2 = DpiAcpiPrepareAcpiEnumChildCache((__int64)a1);
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(2LL);
      result = (unsigned int)v2;
      WdLogGlobalForLineNumber = 1143;
      return result;
    }
    v4 = *((_QWORD *)a1 + 428);
    v5 = 1;
    v6 = v4 + 8;
    if ( *(_DWORD *)(v4 + 4) > 1u )
    {
      do
      {
        v6 += *(unsigned int *)(v6 + 4) + 8LL;
        if ( (*(_BYTE *)v6 & 1) != 0 )
        {
          RtlInitAnsiString(&DestinationString, (PCSZ)(v6 + 8));
          v7 = *((_QWORD *)a1 + 3);
          BYTE1(v16[2]) = 0;
          HIWORD(v16[2]) = 0;
          v16[3] = 0;
          strcpy((char *)v16, "AeiCDMID");
          v17 = 1LL;
          v9 = DpiAcpiEvalAcpiMethodEx(v7, (int)&DestinationString, (int)v16, v8, v19, 0x94u, 1);
          if ( v9 == -1073741772 )
          {
            WdLogSingleEntry1(4LL);
            WdLogGlobalForLineNumber = 1205;
          }
          else if ( v9 >= 0 )
          {
            if ( v19[0].Signature != 1114596673 || v19[0].Count != 1 || v19[0].Argument[0].Type != 1 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1223;
              goto LABEL_23;
            }
            if ( (int)RtlStringCchCopyA((char *)a1 + 6120, 128LL, (const char *)v19[0].Argument[0].Data) >= 0 )
            {
              if ( (int)RtlStringCchCopyA(
                          (char *)a1 + 6248,
                          v10,
                          &DestinationString.Buffer[*DestinationString.Buffer == 92]) >= 0 )
              {
                v12 = *((_QWORD *)a1 + 428);
                ++*((_DWORD *)a1 + 1595);
                *((_QWORD *)a1 + 798) = v6 + 8;
                RtlInitAnsiString(&DestinationString, (PCSZ)(v12 + 16));
                v17 = 0LL;
                v13 = *((_BYTE *)a1 + 2716) != 0;
                LOWORD(v17) = 1;
                *(_OWORD *)v16 = 0LL;
                v16[1] = v13 ? 1346716755 : 1346716767;
                v14 = *((_QWORD *)a1 + 3);
                v16[0] = 1130980673;
                if ( (int)DpiAcpiEvalAcpiMethodEx(v14, (int)&DestinationString, (int)v16, v15, v19, 0x94u, 1) < 0 )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 1305;
LABEL_21:
                  *((_DWORD *)a1 + 1529) = 5;
                  goto LABEL_23;
                }
                if ( !DpiAcpiDoesDepContainMux(a1, v19) )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 1317;
                  goto LABEL_21;
                }
              }
              else
              {
                *v11 = 0;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 1263;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1239;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1213;
          }
        }
LABEL_23:
        ++v5;
      }
      while ( v5 < *(_DWORD *)(*((_QWORD *)a1 + 428) + 4LL) );
    }
  }
  return 0LL;
}
