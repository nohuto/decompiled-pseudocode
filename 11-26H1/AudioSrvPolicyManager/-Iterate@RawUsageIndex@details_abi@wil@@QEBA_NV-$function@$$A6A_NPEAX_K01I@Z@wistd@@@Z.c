/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180033368
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180034548 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@XZ @ 0x180017818 (--1-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@XZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180033C6C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-31h] BYREF
  __int64 v10; // [rsp+50h] [rbp-29h] BYREF
  __int16 v11; // [rsp+58h] [rbp-21h] BYREF
  char v12; // [rsp+5Ah] [rbp-1Fh]
  int v13; // [rsp+5Ch] [rbp-1Dh]
  unsigned __int16 v14; // [rsp+60h] [rbp-19h]
  __int128 v15; // [rsp+68h] [rbp-11h]
  __int16 v16; // [rsp+78h] [rbp-1h] BYREF
  char v17; // [rsp+7Ah] [rbp+1h]
  unsigned int v18; // [rsp+7Ch] [rbp+3h]
  unsigned __int16 v19; // [rsp+80h] [rbp+7h]
  __int128 v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+6Fh]
  unsigned __int8 *v23; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+7Fh] BYREF

  v22 = a2;
  v23 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v16 = *(_WORD *)(a1 + 2);
  v17 = *(_BYTE *)(a1 + 4);
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  v11 = *(_WORD *)(a1 + 6);
  v12 = *(_BYTE *)(a1 + 8);
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v16,
            &v23,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    v4 = 0;
    v5 = *((_QWORD *)&v20 + 1);
    while ( v4 < v18
         && wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v11,
              &v23,
              *(unsigned __int8 **)(a1 + 32)) )
    {
      v21 = v13;
      v24 = v14;
      v8 = *((_QWORD *)&v15 + 1);
      v9 = v19;
      v10 = v5;
      v6 = *(_QWORD *)(a2 + 112);
      if ( !v6 )
        __fastfail(7u);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, int *))(*(_QWORD *)v6 + 32LL))(
              v6,
              &v10,
              &v9,
              &v8,
              &v24,
              &v21) )
      {
        wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(a2);
        return 0;
      }
      ++v4;
    }
  }
  wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(a2);
  return 1;
}
