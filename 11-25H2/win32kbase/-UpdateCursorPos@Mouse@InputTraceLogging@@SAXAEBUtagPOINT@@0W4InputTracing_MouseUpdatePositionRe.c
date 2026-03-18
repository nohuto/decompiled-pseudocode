/*
 * XREFs of ?UpdateCursorPos@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@0W4InputTracing_MouseUpdatePositionReason@@KJ@Z @ 0x1400657B0
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1400653C0 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@33@Z @ 0x1400660BC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 */

void __fastcall InputTraceLogging::Mouse::UpdateCursorPos(int *a1, int *a2, int a3, int a4, int a5)
{
  const char *v5; // rax
  int v6; // [rsp+60h] [rbp-20h] BYREF
  int v7; // [rsp+64h] [rbp-1Ch] BYREF
  int v8; // [rsp+68h] [rbp-18h] BYREF
  int v9; // [rsp+6Ch] [rbp-14h] BYREF
  int v10; // [rsp+70h] [rbp-10h] BYREF
  int v11; // [rsp+74h] [rbp-Ch] BYREF
  const char *v12; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && (qword_14029EE30 & 0x40) != 0 && (qword_14029EE38 & 0x40) == qword_14029EE38 )
  {
    v6 = a5;
    v7 = a4;
    if ( a3 )
    {
      if ( --a3 )
      {
        if ( a3 == 1 )
          v5 = "ActiveCursorTracking";
        else
          v5 = "UNKNOWN";
      }
      else
      {
        v5 = "SetCursorPos";
      }
    }
    else
    {
      v5 = "MouseInput";
    }
    v12 = v5;
    v8 = a2[1];
    v9 = *a2;
    v10 = a1[1];
    v11 = *a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_1402804A8,
      a3,
      a4,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v12,
      (__int64)&v7,
      (__int64)&v6);
  }
}
