/*
 * XREFs of ?ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH0H@Z @ 0x1800FB184
 * Callers:
 *     ?SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180074250 (-SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_M.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800FCD58 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x18000560C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Cursor::ChangeDwmCursorShape(
        char a1,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        bool a7,
        int a8)
{
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  const unsigned __int16 *v16; // rax
  int v17; // [rsp+60h] [rbp-20h] BYREF
  BOOL v18; // [rsp+64h] [rbp-1Ch] BYREF
  int v19; // [rsp+68h] [rbp-18h] BYREF
  int v20; // [rsp+6Ch] [rbp-14h] BYREF
  int v21; // [rsp+70h] [rbp-10h] BYREF
  int v22; // [rsp+74h] [rbp-Ch] BYREF
  const unsigned __int16 *v23; // [rsp+78h] [rbp-8h] BYREF

  v12 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v12 > 4u && tlgKeywordOn((__int64)v12, 8LL) )
  {
    v18 = a7;
    v19 = a6;
    v20 = a5;
    v17 = a8;
    v21 = a4;
    v22 = a3;
    if ( a2 )
    {
      v16 = (const unsigned __int16 *)"True";
      if ( !a1 )
        v16 = (const unsigned __int16 *)"False";
    }
    else
    {
      v16 = &word_180200D48;
    }
    v23 = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (__int64)&unk_180217EA8,
      v13,
      v14,
      &v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
}
