/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180165C00
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180165634 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180165888 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1801659C4 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x180165B10 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x1802241A8 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 * Callees:
 *     memcpy_s @ 0x180099A90 (memcpy_s.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char *v5; // r8
  __int16 v7; // ax
  unsigned __int8 *v8; // rcx
  bool result; // al
  char *v10; // rbp
  char *v11; // rbp
  unsigned __int16 Destination; // [rsp+50h] [rbp+8h] BYREF

  v5 = (char *)*a2;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    v10 = v5 + 2;
    if ( v5 + 2 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    Destination = 0;
    memcpy_s(&Destination, 2uLL, v5, 2uLL);
    *((_DWORD *)this + 1) = Destination;
    goto LABEL_13;
  }
  if ( *((_BYTE *)this + 2) == 2 )
  {
    v10 = v5 + 4;
    if ( v5 + 4 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    memcpy_s((char *)this + 4, 4uLL, v5, 4uLL);
LABEL_13:
    v5 = v10;
  }
  v7 = *(_WORD *)this;
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( !v7 )
  {
    v11 = v5 + 2;
    if ( v5 + 2 > (char *)a3 )
      return 0;
    memcpy_s((char *)this + 8, 2uLL, v5, 2uLL);
    v5 = v11;
  }
  v8 = (unsigned __int8 *)&v5[*((unsigned __int16 *)this + 4)];
  if ( v8 <= a3 )
  {
    *((_QWORD *)this + 3) = v5;
    result = 1;
    *a2 = v8;
    return result;
  }
  return 0;
}
