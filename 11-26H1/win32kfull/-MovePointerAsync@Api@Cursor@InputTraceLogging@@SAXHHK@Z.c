/*
 * XREFs of ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x14002AA18
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x14002A69C (-MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x140247828 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::MovePointerAsync(int a1, int a2, int a3)
{
  bool v6; // bl
  bool v7; // al
  int v8; // r8d
  int v9; // r9d
  bool v10[4]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+54h] [rbp-14h] BYREF
  int v12; // [rsp+58h] [rbp-10h] BYREF
  int v13; // [rsp+5Ch] [rbp-Ch] BYREF
  bool v14; // [rsp+88h] [rbp+20h] BYREF

  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
    {
      v6 = IS_USERCRIT_OWNED_AT_ALL();
      v7 = IS_USERCRIT_OWNED_EXCLUSIVE();
      if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
      {
        v14 = v7;
        v10[0] = v6;
        v11 = a3;
        v12 = a2;
        v13 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          (unsigned int)&dword_1403AA9C0,
          (unsigned int)&unk_14037853F,
          v8,
          v9,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)v10,
          (__int64)&v14);
      }
    }
  }
}
