/*
 * XREFs of ?Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x140058EB4
 * Callers:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x140058A80 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400A4600 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U2@U2@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U?$_tlgWrapSz@G@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@34433AEBU?$_tlgWrapperByRef@$0BA@@@5344336534433653443365344336AEBU?$_tlgWrapSz@G@@7@Z @ 0x140196E88 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U2@U2@U1@U1@U-.c)
 *     ?CompositionInputQueueTypeToString@InputTraceLogging@@CAPEBDW4CompositionInputQueueType@@@Z @ 0x14019C17C (-CompositionInputQueueTypeToString@InputTraceLogging@@CAPEBDW4CompositionInputQueueType@@@Z.c)
 */

void __fastcall InputTraceLogging::InputSink::Create(void *a1, const struct COMPOSITION_INPUT_SINK_V2 *a2)
{
  PVOID v4; // rdi
  int v5; // ecx
  const wchar_t *v6; // rax
  bool v7; // zf
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  int v19; // [rsp+160h] [rbp-80h] BYREF
  int v20; // [rsp+164h] [rbp-7Ch] BYREF
  int v21; // [rsp+168h] [rbp-78h] BYREF
  int v22; // [rsp+16Ch] [rbp-74h] BYREF
  int v23; // [rsp+170h] [rbp-70h] BYREF
  int v24; // [rsp+174h] [rbp-6Ch] BYREF
  int v25; // [rsp+178h] [rbp-68h] BYREF
  int v26; // [rsp+17Ch] [rbp-64h] BYREF
  int v27; // [rsp+180h] [rbp-60h] BYREF
  const wchar_t *v28; // [rsp+188h] [rbp-58h] BYREF
  const wchar_t *v29; // [rsp+190h] [rbp-50h] BYREF
  char *v30; // [rsp+198h] [rbp-48h] BYREF
  __int64 v31; // [rsp+1A0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+1A8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+1B0h] [rbp-30h] BYREF
  __int64 v34; // [rsp+1B8h] [rbp-28h] BYREF
  char *v35; // [rsp+1C0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+1C8h] [rbp-18h] BYREF
  __int64 v37; // [rsp+1D0h] [rbp-10h] BYREF
  __int64 v38; // [rsp+1D8h] [rbp-8h] BYREF
  __int64 v39; // [rsp+1E0h] [rbp+0h] BYREF
  char *v40; // [rsp+1E8h] [rbp+8h] BYREF
  __int64 v41; // [rsp+1F0h] [rbp+10h] BYREF
  __int64 v42; // [rsp+1F8h] [rbp+18h] BYREF
  __int64 v43; // [rsp+200h] [rbp+20h] BYREF
  __int64 v44; // [rsp+208h] [rbp+28h] BYREF
  char *v45; // [rsp+210h] [rbp+30h] BYREF
  __int64 v46; // [rsp+218h] [rbp+38h] BYREF
  __int64 v47; // [rsp+220h] [rbp+40h] BYREF
  __int64 v48; // [rsp+228h] [rbp+48h] BYREF
  __int64 v49; // [rsp+230h] [rbp+50h] BYREF
  char *v50; // [rsp+238h] [rbp+58h] BYREF
  __int64 v51; // [rsp+240h] [rbp+60h] BYREF
  __int64 v52; // [rsp+248h] [rbp+68h] BYREF
  __int64 v53; // [rsp+250h] [rbp+70h] BYREF
  __int64 v54; // [rsp+258h] [rbp+78h] BYREF
  void *v55; // [rsp+260h] [rbp+80h] BYREF
  PVOID v56[3]; // [rsp+268h] [rbp+88h] BYREF
  PVOID Object; // [rsp+2A0h] [rbp+C0h] BYREF
  int v58; // [rsp+2A8h] [rbp+C8h] BYREF

  if ( dword_1402A9E40 )
  {
    if ( (qword_1402A9E50 & 4) != 0 && (qword_1402A9E58 & 4) == qword_1402A9E58 )
    {
      Object = 0LL;
      if ( CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object) >= 0 )
      {
        v4 = Object;
        if ( (unsigned int)dword_1402A9E40 > 5 && (qword_1402A9E50 & 4) != 0 && (qword_1402A9E58 & 4) == qword_1402A9E58 )
        {
          v5 = *((_DWORD *)a2 + 72);
          v6 = L"FallbackInteraction";
          if ( (v5 & 2) == 0 )
            v6 = &word_14026AF94;
          v7 = (v5 & 1) == 0;
          v8 = *((unsigned int *)a2 + 58);
          v28 = v6;
          v9 = L"Implicit";
          if ( v7 )
            v9 = &word_14026AF94;
          v29 = v9;
          v30 = (char *)a2 + 272;
          v31 = *((_QWORD *)a2 + 33);
          v32 = *((_QWORD *)a2 + 32);
          LODWORD(Object) = *((_DWORD *)a2 + 63);
          v58 = *((_DWORD *)a2 + 62);
          v33 = *((_QWORD *)a2 + 30);
          v10 = InputTraceLogging::CompositionInputQueueTypeToString(v8);
          v11 = *((unsigned int *)a2 + 44);
          v34 = v10;
          v35 = (char *)a2 + 216;
          v36 = *((_QWORD *)a2 + 26);
          v37 = *((_QWORD *)a2 + 25);
          v19 = *((_DWORD *)a2 + 49);
          v20 = *((_DWORD *)a2 + 48);
          v38 = *((_QWORD *)a2 + 23);
          v12 = InputTraceLogging::CompositionInputQueueTypeToString(v11);
          v13 = *((unsigned int *)a2 + 30);
          v39 = v12;
          v40 = (char *)a2 + 160;
          v41 = *((_QWORD *)a2 + 19);
          v42 = *((_QWORD *)a2 + 18);
          v21 = *((_DWORD *)a2 + 35);
          v22 = *((_DWORD *)a2 + 34);
          v43 = *((_QWORD *)a2 + 16);
          v14 = InputTraceLogging::CompositionInputQueueTypeToString(v13);
          v15 = *((unsigned int *)a2 + 16);
          v44 = v14;
          v45 = (char *)a2 + 104;
          v46 = *((_QWORD *)a2 + 12);
          v47 = *((_QWORD *)a2 + 11);
          v23 = *((_DWORD *)a2 + 21);
          v24 = *((_DWORD *)a2 + 20);
          v48 = *((_QWORD *)a2 + 9);
          v49 = InputTraceLogging::CompositionInputQueueTypeToString(v15);
          v50 = (char *)a2 + 48;
          v51 = *((_QWORD *)a2 + 5);
          v52 = *((_QWORD *)a2 + 4);
          v25 = *((_DWORD *)a2 + 7);
          v26 = *((_DWORD *)a2 + 6);
          v16 = *((unsigned int *)a2 + 2);
          v53 = *((_QWORD *)a2 + 2);
          v54 = InputTraceLogging::CompositionInputQueueTypeToString(v16);
          v27 = *((_DWORD *)a2 + 1);
          v55 = a1;
          v56[0] = v4;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
            (unsigned int)&dword_1402A9E40,
            (unsigned int)&unk_14028D6A4,
            v17,
            v18,
            (__int64)v56,
            (__int64)&v55,
            (__int64)&v27,
            (__int64)&v54,
            (__int64)&v53,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v52,
            (__int64)&v51,
            (__int64)&v50,
            (__int64)&v49,
            (__int64)&v48,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v47,
            (__int64)&v46,
            (__int64)&v45,
            (__int64)&v44,
            (__int64)&v43,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v42,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v58,
            (__int64)&Object,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v28);
        }
        ObfDereferenceObject(v4);
      }
    }
  }
}
