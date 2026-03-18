/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180115744
 * Callers:
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D9730 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180115940 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180116000 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18011652C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x180116630 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  int v7; // r8d
  int v8; // r9d
  int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  int v12; // [rsp+80h] [rbp-29h] BYREF
  int v13; // [rsp+84h] [rbp-25h] BYREF
  int v14; // [rsp+88h] [rbp-21h] BYREF
  int v15; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v16; // [rsp+90h] [rbp-19h] BYREF
  int v17; // [rsp+94h] [rbp-15h] BYREF
  CInteractionContextWrapper *v18; // [rsp+98h] [rbp-11h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v20; // [rsp+B0h] [rbp+7h]
  __int128 v21; // [rsp+C0h] [rbp+17h]
  __int128 v22; // [rsp+D0h] [rbp+27h]
  __int128 v23; // [rsp+E0h] [rbp+37h]
  int v24; // [rsp+110h] [rbp+67h] BYREF
  int v25; // [rsp+118h] [rbp+6Fh] BYREF
  int v26; // [rsp+120h] [rbp+77h] BYREF
  CInteractionContextWrapper *v27; // [rsp+128h] [rbp+7Fh] BYREF

  *((_BYTE *)this + 80) |= 1u;
  v3 = *((_OWORD *)a2 + 1);
  v19 = *(_OWORD *)a2;
  v4 = *((_OWORD *)a2 + 2);
  v20 = v3;
  v5 = *((_OWORD *)a2 + 3);
  v21 = v4;
  v6 = *((_OWORD *)a2 + 4);
  v22 = v5;
  v23 = v6;
  CInteractionContextWrapper::_UpdateInteractionOutput(
    this,
    (const struct INTERACTION_CONTEXT_OUTPUT *)&v19,
    (CInteractionContextWrapper *)((char *)this + 24));
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 88LL))(this) )
    CInteractionContextWrapper::AddBufferedOutput(
      this,
      *((_DWORD *)this + 53),
      *((_DWORD *)this + 55),
      *((_QWORD *)this + 28),
      (const struct INTERACTION_CONTEXT_OUTPUT *)&v19);
  v9 = v19;
  if ( (_DWORD)v19 != 1 )
    goto LABEL_8;
  *((_BYTE *)this + 84) = 1;
  *((_BYTE *)this + 148) = 1;
  if ( (unsigned int)dword_1803DC880 <= 4 )
    return;
  v10 = qword_1803DC898;
  if ( (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v24 = *((_DWORD *)this + 11);
    v25 = HIDWORD(v23);
    v26 = v22;
    LODWORD(v27) = HIDWORD(v21);
    v12 = DWORD2(v21);
    v13 = v23;
    v14 = HIDWORD(v22);
    v15 = HIDWORD(v20);
    v16 = DWORD2(v20);
    v17 = DWORD1(v20);
    v18 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      qword_1803DC898,
      (unsigned int)&unk_1803B6628,
      v7,
      v8,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
LABEL_8:
    v10 = qword_1803DC898;
  }
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (v10 & 2) == v10 )
  {
    v11 = *((_BYTE *)this + 80) & 1;
    v26 = v9;
    v24 = v11;
    v25 = DWORD1(v19);
    v27 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (unsigned int)&unk_1803B6703,
      v7,
      v8,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
  }
}
