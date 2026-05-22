/*
 * XREFs of ?QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067750
 * Callers:
 *     ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800676D0 (-QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A39B0 (-QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A39C0 (-QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A39D0 (-QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A39E0 (-QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A39F0 (-QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A3A00 (-QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A3A10 (-QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A3A20 (-QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A3A30 (-QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMInputRouter::QueryInterface(DWMInputRouter *this, const struct _GUID *a2, DWMInputRouter **a3)
{
  DWMInputRouter *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data4;
    if ( !v5 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 24;
LABEL_6:
      v4 = (DWMInputRouter *)(v6 & -(__int64)(v4 != 0LL));
LABEL_7:
      *a3 = v4;
      return 0LL;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data4;
    if ( !v8 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 32;
      goto LABEL_6;
    }
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4;
    if ( !v9 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 40;
      goto LABEL_6;
    }
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data4;
    if ( !v10 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 56;
      goto LABEL_6;
    }
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d4af35ea_8997_45e5_aac9_eeb1b4026e03.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d4af35ea_8997_45e5_aac9_eeb1b4026e03.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d4af35ea_8997_45e5_aac9_eeb1b4026e03.Data4;
    if ( !v11 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      goto LABEL_7;
    }
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data4;
    if ( !v12 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 8;
      goto LABEL_6;
    }
    v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9ea1391d_b072_488c_9579_08639d61cf31.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9ea1391d_b072_488c_9579_08639d61cf31.Data1 )
      v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9ea1391d_b072_488c_9579_08639d61cf31.Data4;
    if ( !v13 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 16;
      goto LABEL_6;
    }
    v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data1 )
      v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data4;
    if ( !v14 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 48;
      goto LABEL_6;
    }
    v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data1 )
      v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data4;
    if ( !v15 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 64;
      goto LABEL_6;
    }
    v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v16 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 72;
      goto LABEL_6;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL,
      v17);
    return 2147942487LL;
  }
}
