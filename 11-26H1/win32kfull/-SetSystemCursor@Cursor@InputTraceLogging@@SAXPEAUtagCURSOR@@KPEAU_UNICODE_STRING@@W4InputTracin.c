/*
 * XREFs of ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1401C8FC4
 * Callers:
 *     ?LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1401C8F38 (-LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444443334@Z @ 0x1400012A8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@-$_tlg.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555544455AEBU?$_tlgWrapSz@G@@@Z @ 0x1401C8D2C (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3.c)
 *     ?GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z @ 0x1401C93E4 (-GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z.c)
 *     ?SwapReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_SetSystemCursorReason@@@Z @ 0x1401C9400 (-SwapReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_SetSystemCursorReason@@@Z.c)
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1401CAFCC (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

char __fastcall InputTraceLogging::Cursor::SetSystemCursor(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  _UNKNOWN **v6; // rax
  unsigned int v7; // r10d
  __int64 v9; // rcx
  __int64 i; // rbx
  const wchar_t *v13; // rbx
  struct tagCURSOR *v14; // rcx
  struct tagCURSOR *CursorOrFrame; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  struct tagCURSOR *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct tagCURSOR *v22; // rax
  int v24; // [rsp+A8h] [rbp-19h] BYREF
  int v25; // [rsp+ACh] [rbp-15h] BYREF
  int v26; // [rsp+B0h] [rbp-11h] BYREF
  int v27; // [rsp+B4h] [rbp-Dh] BYREF
  int v28; // [rsp+B8h] [rbp-9h] BYREF
  int v29; // [rsp+BCh] [rbp-5h] BYREF
  int v30; // [rsp+C0h] [rbp-1h] BYREF
  struct tagCURSOR *v31; // [rsp+C8h] [rbp+7h] BYREF
  __int64 v32; // [rsp+D0h] [rbp+Fh] BYREF
  struct tagCURSOR *v33; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v34; // [rsp+E0h] [rbp+1Fh] BYREF
  const char *v35; // [rsp+E8h] [rbp+27h] BYREF
  const wchar_t *v36; // [rsp+F0h] [rbp+2Fh] BYREF
  __int64 v37; // [rsp+F8h] [rbp+37h] BYREF
  __int64 v38; // [rsp+100h] [rbp+3Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+4Fh] BYREF

  v6 = &retaddr;
  v7 = dword_1403AA9C0;
  v9 = qword_1403AA9D8;
  if ( (unsigned int)dword_1403AA9C0 > 5 && (qword_1403AA9D0 & 8) != 0 )
  {
    v6 = (_UNKNOWN **)(qword_1403AA9D8 & 8);
    if ( v6 == (_UNKNOWN **)qword_1403AA9D8 )
    {
      if ( a3 )
      {
        v13 = *(const wchar_t **)(a3 + 8);
        if ( ((unsigned __int64)v13 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          v18 = (unsigned __int16)v13;
          v13 = a5;
          RtlStringCchPrintfW(a5, 0x104uLL, L"ResourceID %i", v18);
        }
      }
      else
      {
        v13 = L"Empty";
      }
      v36 = v13;
      a6 = a2;
      v30 = *(_DWORD *)UPDWORDPointer(8232LL);
      v37 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 13);
      v38 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 12);
      v31 = (struct tagCURSOR *)*((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 11);
      v24 = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 43);
      v25 = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 42);
      v26 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 36) >> 1;
      v27 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 35);
      v28 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 20);
      v29 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 19);
      v32 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 6);
      if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 6) )
        CursorOrFrame = InputTraceLogging::GetCursorOrFrame(v14);
      else
        CursorOrFrame = 0LL;
      v33 = CursorOrFrame;
      v34 = InputTraceLogging::SwapReasonToString(a4);
      v35 = InputTraceLogging::CurIndexName(a2);
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                     (__int64)&dword_1403AA9C0,
                     byte_1403732F1,
                     v16,
                     v17,
                     (void **)&v35,
                     (void **)&v34,
                     (__int64)&v33,
                     (__int64)&v32,
                     (__int64)&v29,
                     (__int64)&v28,
                     (__int64)&v27,
                     (__int64)&v26,
                     (__int64)&v25,
                     (__int64)&v24,
                     (__int64)&v31,
                     (__int64)&v38,
                     (__int64)&v37,
                     (__int64)&v30,
                     (__int64)&a6,
                     &v36);
      v9 = qword_1403AA9D8;
      v7 = dword_1403AA9C0;
    }
  }
  if ( v7 )
  {
    if ( (qword_1403AA9D0 & 8) != 0 )
    {
      v6 = (_UNKNOWN **)(v9 & 8);
      if ( v6 == (_UNKNOWN **)v9 )
      {
        if ( a1 )
        {
          for ( i = *(_QWORD *)(a1 + 40); i; i = *(_QWORD *)(i + 40) )
          {
            if ( v7 > 5 )
            {
              LOBYTE(v6) = tlgKeywordOn((__int64)&dword_1403AA9C0, 8LL);
              if ( (_BYTE)v6 )
              {
                a6 = *(_DWORD *)UPDWORDPointer(8232LL);
                v35 = (const char *)*((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 13);
                v34 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 12);
                v33 = (struct tagCURSOR *)*((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 11);
                v29 = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 43);
                v28 = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 42);
                v27 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 36) >> 1;
                v26 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 35);
                v25 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 20);
                v24 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 19);
                v32 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 6);
                if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 6) )
                  v22 = InputTraceLogging::GetCursorOrFrame(v19);
                else
                  v22 = 0LL;
                v31 = v22;
                LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                               (__int64)&dword_1403AA9C0,
                               (__int64)&unk_140373256,
                               v20,
                               v21,
                               (__int64)&v31,
                               (__int64)&v32,
                               (__int64)&v24,
                               (__int64)&v25,
                               (__int64)&v26,
                               (__int64)&v27,
                               (__int64)&v28,
                               (__int64)&v29,
                               (__int64)&v33,
                               (__int64)&v34,
                               (__int64)&v35,
                               (__int64)&a6);
                v7 = dword_1403AA9C0;
              }
            }
          }
        }
      }
    }
  }
  return (char)v6;
}
