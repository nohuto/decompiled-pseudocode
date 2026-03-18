/*
 * XREFs of ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1401CA5CC
 * Callers:
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z @ 0x1401CA558 (-SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z.c)
 * Callees:
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1401CAE90 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 *     ?CursorImageReasonToString@InputTraceLogging@@CAPEBDW4CursorImageReason@Cursor@1@@Z @ 0x1401CB040 (-CursorImageReasonToString@InputTraceLogging@@CAPEBDW4CursorImageReason@Cursor@1@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U3@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@55555444555545@Z @ 0x1401CB0C0 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1401CB0C0.c)
 */

_UNKNOWN **__fastcall InputTraceLogging::Cursor::SetCursorImage(
        __int64 a1,
        struct tagCURSOR *a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6)
{
  _UNKNOWN **result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // [rsp+C8h] [rbp-80h] BYREF
  int v17; // [rsp+CCh] [rbp-7Ch] BYREF
  int v18; // [rsp+D0h] [rbp-78h] BYREF
  int v19; // [rsp+D4h] [rbp-74h] BYREF
  int v20; // [rsp+D8h] [rbp-70h] BYREF
  int v21; // [rsp+DCh] [rbp-6Ch] BYREF
  int v22; // [rsp+E0h] [rbp-68h] BYREF
  int v23; // [rsp+E4h] [rbp-64h] BYREF
  int v24; // [rsp+E8h] [rbp-60h] BYREF
  int v25; // [rsp+ECh] [rbp-5Ch] BYREF
  int v26; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+100h] [rbp-48h] BYREF
  __int64 v29; // [rsp+108h] [rbp-40h] BYREF
  __int64 v30; // [rsp+110h] [rbp-38h] BYREF
  __int64 v31; // [rsp+118h] [rbp-30h] BYREF
  __int64 v32; // [rsp+120h] [rbp-28h] BYREF
  __int64 v33; // [rsp+128h] [rbp-20h] BYREF
  const char *v34; // [rsp+130h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+140h] [rbp-8h] BYREF

  result = &retaddr;
  if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 8) != 0 )
  {
    result = (_UNKNOWN **)(qword_1403AA9D8 & 8);
    if ( result == (_UNKNOWN **)qword_1403AA9D8 )
    {
      v16 = *(_DWORD *)UPDWORDPointer(8232LL);
      v12 = *(_QWORD *)(W32GetUserSessionState(v11, v16) + 19208);
      v17 = a6;
      v18 = a5;
      v27 = v12;
      v19 = a3;
      v13 = *(_DWORD *)UPDWORDPointer(8232LL);
      v28 = *(_QWORD *)(a1 + 104);
      v29 = *(_QWORD *)(a1 + 96);
      v30 = *(_QWORD *)(a1 + 88);
      v21 = *(__int16 *)(a1 + 86);
      v22 = *(__int16 *)(a1 + 84);
      v23 = *(_DWORD *)(a1 + 144) >> 1;
      v24 = *(_DWORD *)(a1 + 140);
      v25 = *(_DWORD *)(a1 + 80);
      v26 = *(_DWORD *)(a1 + 76);
      v31 = *(_QWORD *)(a1 + 48);
      v20 = v13;
      v32 = a1 & -(__int64)(v31 != 0);
      v33 = InputTraceLogging::CursorImageReasonToString(a4);
      v34 = InputTraceLogging::CursorToString(a2);
      return (_UNKNOWN **)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                            (unsigned int)&dword_1403AA9C0,
                            (unsigned int)&unk_1403733A3,
                            v14,
                            v15,
                            (__int64)&v34,
                            (__int64)&v33,
                            (__int64)&v32,
                            (__int64)&v31,
                            (__int64)&v26,
                            (__int64)&v25,
                            (__int64)&v24,
                            (__int64)&v23,
                            (__int64)&v22,
                            (__int64)&v21,
                            (__int64)&v30,
                            (__int64)&v29,
                            (__int64)&v28,
                            (__int64)&v20,
                            (__int64)&v19,
                            (__int64)&v18,
                            (__int64)&v17,
                            (__int64)&v27,
                            (__int64)&v16);
    }
  }
  return result;
}
