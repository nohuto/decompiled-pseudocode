/*
 * XREFs of _lambda_9ae8c4928910e969c2e408eee9d60c41_::operator() @ 0x18014ED64
 * Callers:
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180063060 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$01@@U1@U3@U3@U1@U3@U3@U_tlgWrapperBinary@@U3@U1@U3@U3@U1@U3@U3@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$01@@355355AEBU_tlgWrapperBinary@@535535563@Z @ 0x180007748 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$01@@U1@U3@U.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_9ae8c4928910e969c2e408eee9d60c41_::operator()(__int64 a1)
{
  _QWORD *v1; // rax
  _WORD *v3; // rdi
  __int64 v4; // rcx
  _WORD *v5; // r14
  _DWORD *v6; // rsi
  __int64 v7; // r8
  _DWORD *v8; // rdx
  int v9; // ecx
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int16 v16; // [rsp+C0h] [rbp-80h] BYREF
  __int16 v17; // [rsp+C2h] [rbp-7Eh] BYREF
  __int16 v18; // [rsp+C4h] [rbp-7Ch] BYREF
  __int16 v19; // [rsp+C6h] [rbp-7Ah] BYREF
  __int16 v20; // [rsp+C8h] [rbp-78h] BYREF
  __int16 v21; // [rsp+CAh] [rbp-76h] BYREF
  int v22; // [rsp+CCh] [rbp-74h] BYREF
  int v23; // [rsp+D0h] [rbp-70h] BYREF
  int v24; // [rsp+D4h] [rbp-6Ch] BYREF
  int v25; // [rsp+D8h] [rbp-68h] BYREF
  int v26; // [rsp+DCh] [rbp-64h] BYREF
  int v27; // [rsp+E0h] [rbp-60h] BYREF
  int v28; // [rsp+E4h] [rbp-5Ch] BYREF
  __int64 v29; // [rsp+E8h] [rbp-58h] BYREF
  _WORD *v30; // [rsp+F0h] [rbp-50h] BYREF
  __int16 v31; // [rsp+F8h] [rbp-48h]
  _WORD *v32; // [rsp+100h] [rbp-40h] BYREF
  __int16 v33; // [rsp+108h] [rbp-38h]
  __int16 v34; // [rsp+140h] [rbp+0h] BYREF
  __int16 v35; // [rsp+148h] [rbp+8h] BYREF
  __int16 v36; // [rsp+150h] [rbp+10h] BYREF
  __int16 v37; // [rsp+158h] [rbp+18h] BYREF

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 72LL) )
  {
    v3 = &unk_1801D7978;
    v4 = **(_QWORD **)(a1 + 8);
    if ( v4 )
      v5 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    else
      v5 = &unk_1801D7978;
    v1 = *(_QWORD **)(a1 + 16);
    if ( *v1 )
    {
      v1 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 40LL))(*v1);
      v3 = v1;
    }
    v6 = *(_DWORD **)(*(_QWORD *)a1 + 72LL);
    if ( *v6 > 4u )
    {
      LOBYTE(v1) = tlgKeywordOn(*(_QWORD *)(*(_QWORD *)a1 + 72LL), 256LL);
      if ( (_BYTE)v1 )
      {
        v8 = *(_DWORD **)(a1 + 24);
        v9 = **(_DWORD **)(a1 + 32);
        v30 = v3 + 9;
        v34 = *v3;
        v35 = v3[7];
        v23 = *((_DWORD *)v3 + 1);
        v36 = v3[1];
        v37 = v3[6];
        v24 = *((_DWORD *)v3 + 2);
        v32 = v5 + 9;
        v17 = *v5;
        v18 = v5[7];
        v25 = *((_DWORD *)v5 + 1);
        v10 = v5[1];
        v22 = v9;
        LOWORD(v9) = v3[8];
        v19 = v10;
        v11 = v5[6];
        v16 = v9;
        v20 = v11;
        v12 = *((_DWORD *)v5 + 2);
        v31 = v9;
        v21 = v5[8];
        v26 = v12;
        v27 = *(_DWORD *)(v7 + 80);
        LODWORD(v8) = *v8;
        v33 = v21;
        v29 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v7 + 96, (signed int)v8);
        v28 = **(_DWORD **)(a1 + 24);
        LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
                       (int)v6,
                       (int)&unk_1801AE4EC,
                       v13,
                       v14,
                       (__int64)&v28,
                       &v29,
                       (__int64)&v27,
                       (__int64)&v21,
                       (__int64)&v26,
                       (__int64)&v20,
                       (__int64)&v19,
                       (__int64)&v25,
                       (__int64)&v18,
                       (__int64)&v17,
                       (__int64 *)&v32,
                       (__int64)&v16,
                       (__int64)&v24,
                       (__int64)&v37,
                       (__int64)&v36,
                       (__int64)&v23,
                       (__int64)&v35,
                       (__int64)&v34,
                       (__int64 *)&v30,
                       (__int64)&v22);
      }
    }
  }
  return (char)v1;
}
