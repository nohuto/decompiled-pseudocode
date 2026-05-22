/*
 * XREFs of ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180051BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801B47D0 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801B4DA0 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnHitTest(
        InputRedirectionProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // ebp
  __int64 v6; // rcx
  int v8; // r15d
  __int64 v9; // rdx
  _DWORD *i; // rcx
  __int64 j; // rbx
  InputRedirectionTarget *v13; // r15
  int v14; // eax
  __int64 (__fastcall *v15)(InputRedirectionTarget *, GUID *, char *); // rdi
  int v16; // eax
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  char v20; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  *(_DWORD *)a4 = 0;
  v6 = *((_QWORD *)this + 9);
  v8 = *(_DWORD *)a2;
  v9 = *((unsigned int *)a2 + 1);
  v19 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, v9, &v19) >= 0 )
  {
    for ( i = (_DWORD *)*((_QWORD *)this + 10); i != *((_DWORD **)this + 11); i += 4 )
    {
      if ( (*(_DWORD *)(v19 + 4) & *i) != 0 )
      {
        v8 = *(_DWORD *)(v19 + 4);
        break;
      }
    }
  }
  for ( j = *((_QWORD *)this + 10); j != *((_QWORD *)this + 11); j += 16LL )
  {
    if ( (v8 & *(_DWORD *)j) != 0 )
    {
      v13 = *(InputRedirectionTarget **)(j + 8);
      if ( InputRedirectionTarget::IsValid(v13) )
      {
        v14 = 0;
        if ( v19 )
          v14 = *(_DWORD *)(v19 + 16);
        if ( *((_DWORD *)v13 + 16) != v14 )
        {
          v15 = **(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v13;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a4 + 1);
          v16 = v15(v13, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
          if ( v16 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x179,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection"
                            "\\system\\lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v16,
              v17);
          LOBYTE(v4) = (*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v13 + 32LL))(v13) != 0;
          *(_DWORD *)a4 = v4 + 2;
        }
      }
      else
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase((char *)this + 80, &v20, j);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      return 0LL;
    }
  }
  return 0LL;
}
