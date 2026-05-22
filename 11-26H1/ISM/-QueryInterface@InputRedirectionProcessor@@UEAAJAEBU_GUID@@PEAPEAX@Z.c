/*
 * XREFs of ?QueryInterface@InputRedirectionProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800769A0
 * Callers:
 *     ?QueryInterface@InputRedirectionProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B47A0 (-QueryInterface@InputRedirectionProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B47B0 (-QueryInterface@InputRedirectionProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B47C0 (-QueryInterface@InputRedirectionProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputRedirectionProcessor::QueryInterface(
        InputRedirectionProcessor *this,
        const struct _GUID *a2,
        InputRedirectionProcessor **a3)
{
  InputRedirectionProcessor *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system"
                    "\\lib\\inputredirectionprocessor.cpp",
      (const char *)0x80070057LL,
      v11);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
LABEL_20:
    *a3 = v4;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
    v8 = (unsigned __int64)v4 + 8;
LABEL_19:
    v4 = (InputRedirectionProcessor *)(v8 & -(__int64)(v4 != 0LL));
    goto LABEL_20;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4;
  if ( !v9 )
  {
    (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
    v8 = (unsigned __int64)v4 + 16;
    goto LABEL_19;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v10 )
  {
    (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
    v8 = (unsigned __int64)v4 + 24;
    goto LABEL_19;
  }
  return 2147500034LL;
}
