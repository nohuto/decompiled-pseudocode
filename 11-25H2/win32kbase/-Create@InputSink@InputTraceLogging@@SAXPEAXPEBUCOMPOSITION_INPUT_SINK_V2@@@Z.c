/*
 * XREFs of ?Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x14009B9D4
 * Callers:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x14009B614 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U2@U2@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U?$_tlgWrapSz@G@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@34433AEBU?$_tlgWrapperByRef@$0BA@@@5344336534433653443365344336AEBU?$_tlgWrapSz@G@@7@Z @ 0x140009E98 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U2@U2@U1@U1@U-.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x140068B20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?CompositionInputQueueTypeToString@InputTraceLogging@@CAPEBDW4CompositionInputQueueType@@@Z @ 0x14023DA18 (-CompositionInputQueueTypeToString@InputTraceLogging@@CAPEBDW4CompositionInputQueueType@@@Z.c)
 */

void __fastcall InputTraceLogging::InputSink::Create(void *a1, const struct COMPOSITION_INPUT_SINK_V2 *a2)
{
  __int64 v4; // r8
  PVOID v5; // rdi
  int v6; // ecx
  const WCHAR *v7; // rax
  bool v8; // zf
  __int64 v9; // rcx
  const WCHAR *v10; // rax
  void *v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+160h] [rbp-80h] BYREF
  int v21; // [rsp+164h] [rbp-7Ch] BYREF
  int v22; // [rsp+168h] [rbp-78h] BYREF
  int v23; // [rsp+16Ch] [rbp-74h] BYREF
  int v24; // [rsp+170h] [rbp-70h] BYREF
  int v25; // [rsp+174h] [rbp-6Ch] BYREF
  int v26; // [rsp+178h] [rbp-68h] BYREF
  int v27; // [rsp+17Ch] [rbp-64h] BYREF
  int v28; // [rsp+180h] [rbp-60h] BYREF
  const WCHAR *v29; // [rsp+188h] [rbp-58h] BYREF
  const WCHAR *v30; // [rsp+190h] [rbp-50h] BYREF
  __int64 v31; // [rsp+198h] [rbp-48h] BYREF
  __int64 v32; // [rsp+1A0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+1A8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+1B0h] [rbp-30h] BYREF
  void *v35; // [rsp+1B8h] [rbp-28h] BYREF
  __int64 v36; // [rsp+1C0h] [rbp-20h] BYREF
  __int64 v37; // [rsp+1C8h] [rbp-18h] BYREF
  __int64 v38; // [rsp+1D0h] [rbp-10h] BYREF
  __int64 v39; // [rsp+1D8h] [rbp-8h] BYREF
  void *v40; // [rsp+1E0h] [rbp+0h] BYREF
  __int64 v41; // [rsp+1E8h] [rbp+8h] BYREF
  __int64 v42; // [rsp+1F0h] [rbp+10h] BYREF
  __int64 v43; // [rsp+1F8h] [rbp+18h] BYREF
  __int64 v44; // [rsp+200h] [rbp+20h] BYREF
  void *v45; // [rsp+208h] [rbp+28h] BYREF
  __int64 v46; // [rsp+210h] [rbp+30h] BYREF
  __int64 v47; // [rsp+218h] [rbp+38h] BYREF
  __int64 v48; // [rsp+220h] [rbp+40h] BYREF
  __int64 v49; // [rsp+228h] [rbp+48h] BYREF
  __int64 v50; // [rsp+230h] [rbp+50h] BYREF
  __int64 v51; // [rsp+238h] [rbp+58h] BYREF
  __int64 v52; // [rsp+240h] [rbp+60h] BYREF
  __int64 v53; // [rsp+248h] [rbp+68h] BYREF
  __int64 v54; // [rsp+250h] [rbp+70h] BYREF
  __int64 v55; // [rsp+258h] [rbp+78h] BYREF
  void *v56; // [rsp+260h] [rbp+80h] BYREF
  PVOID v57[3]; // [rsp+268h] [rbp+88h] BYREF
  PVOID Object; // [rsp+2A0h] [rbp+C0h] BYREF
  int v59; // [rsp+2A8h] [rbp+C8h] BYREF

  if ( dword_14029EE20 )
  {
    if ( (qword_14029EE30 & 4) != 0 && (qword_14029EE38 & 4) == qword_14029EE38 )
    {
      Object = 0LL;
      if ( (int)CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object) >= 0 )
      {
        v5 = Object;
        if ( (unsigned int)dword_14029EE20 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 4LL, v4) )
        {
          v6 = *((_DWORD *)a2 + 72);
          v7 = L"FallbackInteraction";
          if ( (v6 & 2) == 0 )
            v7 = &word_14025FAA8;
          v8 = (v6 & 1) == 0;
          v9 = *((unsigned int *)a2 + 58);
          v29 = v7;
          v10 = L"Implicit";
          if ( v8 )
            v10 = &word_14025FAA8;
          v30 = v10;
          v31 = (__int64)a2 + 272;
          v32 = *((_QWORD *)a2 + 33);
          v33 = *((_QWORD *)a2 + 32);
          LODWORD(Object) = *((_DWORD *)a2 + 63);
          v59 = *((_DWORD *)a2 + 62);
          v34 = *((_QWORD *)a2 + 30);
          v11 = (void *)InputTraceLogging::CompositionInputQueueTypeToString(v9);
          v12 = *((unsigned int *)a2 + 44);
          v35 = v11;
          v36 = (__int64)a2 + 216;
          v37 = *((_QWORD *)a2 + 26);
          v38 = *((_QWORD *)a2 + 25);
          v20 = *((_DWORD *)a2 + 49);
          v21 = *((_DWORD *)a2 + 48);
          v39 = *((_QWORD *)a2 + 23);
          v13 = (void *)InputTraceLogging::CompositionInputQueueTypeToString(v12);
          v14 = *((unsigned int *)a2 + 30);
          v40 = v13;
          v41 = (__int64)a2 + 160;
          v42 = *((_QWORD *)a2 + 19);
          v43 = *((_QWORD *)a2 + 18);
          v22 = *((_DWORD *)a2 + 35);
          v23 = *((_DWORD *)a2 + 34);
          v44 = *((_QWORD *)a2 + 16);
          v15 = (void *)InputTraceLogging::CompositionInputQueueTypeToString(v14);
          v16 = *((unsigned int *)a2 + 16);
          v45 = v15;
          v46 = (__int64)a2 + 104;
          v47 = *((_QWORD *)a2 + 12);
          v48 = *((_QWORD *)a2 + 11);
          v24 = *((_DWORD *)a2 + 21);
          v25 = *((_DWORD *)a2 + 20);
          v49 = *((_QWORD *)a2 + 9);
          v50 = InputTraceLogging::CompositionInputQueueTypeToString(v16);
          v51 = (__int64)a2 + 48;
          v52 = *((_QWORD *)a2 + 5);
          v53 = *((_QWORD *)a2 + 4);
          v26 = *((_DWORD *)a2 + 7);
          v27 = *((_DWORD *)a2 + 6);
          v17 = *((unsigned int *)a2 + 2);
          v54 = *((_QWORD *)a2 + 2);
          v55 = InputTraceLogging::CompositionInputQueueTypeToString(v17);
          v28 = *((_DWORD *)a2 + 1);
          v56 = a1;
          v57[0] = v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
            (__int64)&dword_14029EE20,
            (__int64)&unk_140282FCF,
            v18,
            v19,
            (__int64)v57,
            (__int64)&v56,
            (__int64)&v28,
            (void **)&v55,
            (__int64)&v54,
            (__int64)&v27,
            (__int64)&v26,
            (__int64)&v53,
            (__int64)&v52,
            &v51,
            (void **)&v50,
            (__int64)&v49,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v48,
            (__int64)&v47,
            &v46,
            &v45,
            (__int64)&v44,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v43,
            (__int64)&v42,
            &v41,
            &v40,
            (__int64)&v39,
            (__int64)&v21,
            (__int64)&v20,
            (__int64)&v38,
            (__int64)&v37,
            &v36,
            &v35,
            (__int64)&v34,
            (__int64)&v59,
            (__int64)&Object,
            (__int64)&v33,
            (__int64)&v32,
            &v31,
            &v30,
            &v29);
        }
        ObfDereferenceObject(v5);
      }
    }
  }
}
