/*
 * XREFs of ?OnInput@InputSink@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x14009A148
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x140099894 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4444444444444444@Z @ 0x14009A65C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

void __fastcall InputTraceLogging::InputSink::OnInput(
        __int64 a1,
        HWND a2,
        const struct CompositionInputObject *a3,
        char a4,
        const struct tagINPUT_TRANSFORM *a5)
{
  __int64 v5; // rax
  int v6; // [rsp+C0h] [rbp-80h] BYREF
  int v7; // [rsp+C4h] [rbp-7Ch] BYREF
  int v8; // [rsp+C8h] [rbp-78h] BYREF
  int v9; // [rsp+CCh] [rbp-74h] BYREF
  int v10; // [rsp+D0h] [rbp-70h] BYREF
  int v11; // [rsp+D4h] [rbp-6Ch] BYREF
  int v12; // [rsp+D8h] [rbp-68h] BYREF
  int v13; // [rsp+DCh] [rbp-64h] BYREF
  int v14; // [rsp+E0h] [rbp-60h] BYREF
  int v15; // [rsp+E4h] [rbp-5Ch] BYREF
  int v16; // [rsp+E8h] [rbp-58h] BYREF
  int v17; // [rsp+ECh] [rbp-54h] BYREF
  int v18; // [rsp+F0h] [rbp-50h] BYREF
  int v19; // [rsp+F4h] [rbp-4Ch] BYREF
  int v20; // [rsp+F8h] [rbp-48h] BYREF
  int v21; // [rsp+FCh] [rbp-44h] BYREF
  const struct CompositionInputObject *v22; // [rsp+100h] [rbp-40h] BYREF
  HWND v23; // [rsp+108h] [rbp-38h] BYREF
  __int64 v24; // [rsp+110h] [rbp-30h] BYREF
  int v25; // [rsp+148h] [rbp+8h] BYREF

  LOBYTE(v25) = a4;
  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 4) != 0 )
    {
      v5 = qword_1403AA9D8 & 4;
      if ( v5 == qword_1403AA9D8 && (unsigned int)dword_1403AA9C0 > 5 && v5 == qword_1403AA9D8 )
      {
        v23 = a2;
        v21 = 0;
        v22 = a3;
        v25 = *((_DWORD *)a5 + 15);
        v6 = *((_DWORD *)a5 + 14);
        v7 = *((_DWORD *)a5 + 13);
        v8 = *((_DWORD *)a5 + 12);
        v9 = *((_DWORD *)a5 + 11);
        v10 = *((_DWORD *)a5 + 10);
        v11 = *((_DWORD *)a5 + 9);
        v12 = *((_DWORD *)a5 + 8);
        v13 = *((_DWORD *)a5 + 7);
        v14 = *((_DWORD *)a5 + 6);
        v15 = *((_DWORD *)a5 + 5);
        v16 = *((_DWORD *)a5 + 4);
        v17 = *((_DWORD *)a5 + 3);
        v18 = *((_DWORD *)a5 + 2);
        v19 = *((_DWORD *)a5 + 1);
        v20 = *(_DWORD *)a5;
        v24 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1403AA9C0,
          (unsigned int)&unk_1403759E7,
          qword_1403AA9D8,
          dword_1403AA9C0,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&v8,
          (__int64)&v7,
          (__int64)&v6,
          (__int64)&v25);
      }
    }
  }
}
