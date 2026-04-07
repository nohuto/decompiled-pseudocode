/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18005B9A0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18005B12C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18003092C (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18005BCF0 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ??R?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEBA_NPEAX_K01I@Z @ 0x18005C148 (--R-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEBA_NPEAX_K01I@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  char v4; // bl
  unsigned int i; // edi
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  __int16 v9; // [rsp+38h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-30h]
  __int16 v11; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+52h] [rbp-1Eh]
  unsigned int v13; // [rsp+54h] [rbp-1Ch]
  unsigned __int16 v14; // [rsp+58h] [rbp-18h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  unsigned __int8 *v16; // [rsp+90h] [rbp+20h] BYREF
  __int64 v17; // [rsp+98h] [rbp+28h]

  v17 = a2;
  v16 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v11 = *(_WORD *)(a1 + 2);
  v12 = *(_BYTE *)(a1 + 4);
  v4 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  LOWORD(v8) = *(_WORD *)(a1 + 6);
  BYTE2(v8) = *(_BYTE *)(a1 + 8);
  HIDWORD(v8) = 0;
  v9 = 0;
  v10 = 0LL;
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v11,
            &v16,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    for ( i = 0;
          i < v13
       && wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v8,
            &v16,
            *(unsigned __int8 **)(a1 + 32));
          ++i )
    {
      LODWORD(v7) = HIDWORD(v8);
      if ( !(unsigned __int8)wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::operator()(
                               a2,
                               DWORD2(v15),
                               v14,
                               DWORD2(v10),
                               v9,
                               v7,
                               v8) )
        goto LABEL_7;
    }
  }
  v4 = 1;
LABEL_7:
  wistd::function<void (int const &)>::~function<void (int const &)>(a2);
  return v4;
}
