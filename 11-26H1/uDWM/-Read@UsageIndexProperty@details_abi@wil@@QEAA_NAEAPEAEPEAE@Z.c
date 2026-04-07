/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18005BCF0
 * Callers:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18005B9A0 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18005BA90 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18005BDE0 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x18005BF74 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x180088C3C (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 * Callees:
 *     memcpy_s @ 0x18005C508 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x18008EE5A (_invalid_parameter_noinfo.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  unsigned __int16 *v5; // r8
  __int16 v8; // ax
  unsigned __int8 *v9; // rcx
  bool result; // al
  unsigned __int16 *v11; // rsi
  unsigned __int16 v12; // ax
  unsigned __int16 *v13; // rbp

  v3 = *((_BYTE *)this + 2);
  v5 = (unsigned __int16 *)*a2;
  if ( v3 == 1 )
  {
    v11 = v5 + 1;
    if ( v5 + 1 > (unsigned __int16 *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    if ( v5 )
    {
      v12 = *v5;
    }
    else
    {
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
      v12 = 0;
    }
    *((_DWORD *)this + 1) = v12;
    goto LABEL_10;
  }
  if ( v3 == 2 )
  {
    v11 = v5 + 2;
    if ( v5 + 2 > (unsigned __int16 *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    memcpy_s((char *)this + 4, 4uLL, v5, 4uLL);
LABEL_10:
    v5 = v11;
  }
  v8 = *(_WORD *)this;
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( !v8 )
  {
    v13 = v5 + 1;
    if ( v5 + 1 > (unsigned __int16 *)a3 )
      return 0;
    memcpy_s((char *)this + 8, 2uLL, v5, 2uLL);
    v5 = v13;
  }
  v9 = (unsigned __int8 *)v5 + *((unsigned __int16 *)this + 4);
  if ( v9 <= a3 )
  {
    *((_QWORD *)this + 3) = v5;
    result = 1;
    *a2 = v9;
    return result;
  }
  return 0;
}
