/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x140430744
 * Callers:
 *     DpiAcpiGetAcpiChildName @ 0x140193AF0 (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiExposeInfo @ 0x140252C64 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildUidFromName @ 0x140252F60 (DpiAcpiGetAcpiChildUidFromName.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiAcpiPrepareAcpiEnumChildCache @ 0x14025300C (DpiAcpiPrepareAcpiEnumChildCache.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1403B21B4 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  int v3; // edi
  __int64 v4; // rax
  __int64 Pool2; // rax
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r9
  void *v10; // rcx
  int v11[6]; // [rsp+50h] [rbp-1h] BYREF
  struct _STRING DestinationString; // [rsp+68h] [rbp+17h] BYREF
  int v13; // [rsp+78h] [rbp+27h] BYREF
  __int128 v14; // [rsp+7Ch] [rbp+2Bh]
  int v15; // [rsp+8Ch] [rbp+3Bh]

  result = 0LL;
  DestinationString = 0LL;
  memset(v11, 0, sizeof(v11));
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  if ( !*(_QWORD *)(a1 + 3432) )
  {
    if ( *(_DWORD *)(a1 + 3416) )
      return 3221225473LL;
    v3 = DpiAcpiPrepareAcpiEnumChildCache(a1);
    if ( v3 >= 0 )
    {
      v4 = *(_QWORD *)(a1 + 3424);
      *(_DWORD *)(a1 + 3416) = 0;
      Pool2 = ExAllocatePool2(256LL, 16LL * *(unsigned int *)(v4 + 4), 1953656900LL);
      *(_QWORD *)(a1 + 3432) = Pool2;
      if ( Pool2 )
      {
        v6 = 1;
        v7 = *(_QWORD *)(a1 + 3424) + 8LL;
        while ( v6 < *(_DWORD *)(*(_QWORD *)(a1 + 3424) + 4LL) )
        {
          v7 += *(unsigned int *)(v7 + 4) + 8LL;
          if ( (*(_BYTE *)v7 & 1) != 0 )
          {
            RtlInitAnsiString(&DestinationString, (PCSZ)(v7 + 8));
            v8 = *(_QWORD *)(a1 + 24);
            *(_OWORD *)&v11[2] = 0LL;
            qmemcpy(v11, "AeiC_ADR", 8);
            v3 = DpiAcpiEvalAcpiMethodEx(v8, (const void **)&DestinationString, v11, v9, &v13, 0x18u, 1);
            if ( v3 >= 0 )
            {
              if ( v13 != 1114596673 || !DWORD1(v14) )
              {
                v3 = -1072431089;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 1055;
                goto LABEL_19;
              }
              *(_DWORD *)(*(_QWORD *)(a1 + 3432) + 16LL * *(unsigned int *)(a1 + 3416)) = HIDWORD(v14);
              *(_QWORD *)(*(_QWORD *)(a1 + 3432) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3416))++ + 8) = v7 + 8;
            }
            else
            {
              WdLogSingleEntry1(3LL);
              v3 = 0;
              WdLogGlobalForLineNumber = 1037;
            }
          }
          ++v6;
        }
        return (unsigned int)v3;
      }
      v3 = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 975;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 953;
    }
LABEL_19:
    v10 = *(void **)(a1 + 3432);
    *(_DWORD *)(a1 + 3416) = -1;
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(a1 + 3432) = 0LL;
    }
    return (unsigned int)v3;
  }
  return result;
}
