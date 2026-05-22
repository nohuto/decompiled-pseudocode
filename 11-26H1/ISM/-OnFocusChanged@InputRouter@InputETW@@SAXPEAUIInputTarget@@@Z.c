/*
 * XREFs of ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x18002A634
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000E0B0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18000BE18 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18002A7D4 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall InputETW::InputRouter::OnFocusChanged(int (__fastcall ***a1)(struct IInputTarget *, GUID *, __int64 *))
{
  int (__fastcall *v2)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 v3; // rcx
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-40h]
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v14; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF

  if ( InputETW::IsVerboseEnabled(1uLL) )
  {
    v16 = 0;
    v15 = 0;
    v14 = 0;
    if ( a1 )
    {
      v10 = 0LL;
      v2 = **a1;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      if ( v2((struct IInputTarget *)a1, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v10) >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 32LL))(v10, &v16);
        if ( v6 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x91,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v6,
            v9);
        v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 40LL))(v10, &v15);
        if ( v7 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x92,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v7,
            v9);
        v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 48LL))(v10, &v14);
        if ( v8 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x93,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v8,
            v9);
      }
      v3 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
    }
    v4 = InputETW::Provider();
    if ( *(_DWORD *)v4 > 5u && (*((_BYTE *)v4 + 16) & 1) != 0 && (*((_QWORD *)v4 + 3) & 1LL) == *((_QWORD *)v4 + 3) )
    {
      v10 = v14;
      v11 = v15;
      v12 = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v4,
        (__int64)&unk_180229A14,
        (__int64)v4,
        v5,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
