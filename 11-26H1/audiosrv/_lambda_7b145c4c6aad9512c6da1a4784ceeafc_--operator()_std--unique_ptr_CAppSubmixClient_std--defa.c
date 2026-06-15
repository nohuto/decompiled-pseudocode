/*
 * XREFs of _lambda_7b145c4c6aad9512c6da1a4784ceeafc_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800BAA6C
 * Callers:
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_7b145c4c6aad9512c6da1a4784ceeafc___ @ 0x1800BB39C (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--_ea_1800BB39C.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4443@Z @ 0x180002448 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?NotifySubmixClient@CAppSubmixClient@@QEAAX_KW4ProcessSubmix_NotificationType@@0@Z @ 0x1800BC59C (-NotifySubmixClient@CAppSubmixClient@@QEAAX_KW4ProcessSubmix_NotificationType@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_7b145c4c6aad9512c6da1a4784ceeafc_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__(
        __int64 a1,
        _QWORD **a2)
{
  signed __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  struct AudioSrvTelemetryProvider *v7; // rax
  _DWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  signed __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h] BYREF
  int v15; // [rsp+90h] [rbp+30h] BYREF
  int v16; // [rsp+98h] [rbp+38h] BYREF
  int v17; // [rsp+A0h] [rbp+40h] BYREF
  int v18; // [rsp+A8h] [rbp+48h] BYREF

  v4 = _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)a1 + 80LL));
  v5 = (__int64)*a2;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 8) + 208LL))(**(_QWORD **)(a1 + 8));
  CAppSubmixClient::NotifySubmixClient(v5, v4, 0LL, v6);
  v7 = AudioSrvTelemetryProvider::Instance();
  v8 = (_DWORD *)*((_QWORD *)v7 + 1);
  if ( *v8 > 4u )
  {
    LOBYTE(v7) = tlgKeywordOn(*((_QWORD *)v7 + 1), 512LL);
    if ( (_BYTE)v7 )
    {
      v9 = *(_QWORD **)(a1 + 8);
      v13 = v4;
      v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 200LL))(*v9);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 8) + 128LL))(**(_QWORD **)(a1 + 8));
      v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a2 + 48LL))(**a2);
      v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a2 + 40LL))(**a2);
      v14 = **(_QWORD **)(a1 + 16);
      LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     (int)v8,
                     (int)&unk_1801A272F,
                     v10,
                     v11,
                     (__int64)&v14,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v13);
    }
  }
  return (char)v7;
}
