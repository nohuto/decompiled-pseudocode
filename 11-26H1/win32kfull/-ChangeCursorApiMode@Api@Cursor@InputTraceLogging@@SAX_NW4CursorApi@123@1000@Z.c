/*
 * XREFs of ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x1400F7B38
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?TraceCurrentState@CursorApiRouter@@QEBAXXZ @ 0x1400F7ABC (-TraceCurrentState@CursorApiRouter@@QEBAXXZ.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x14025A67C (--$Write@U-$_tlgWrapSz@D@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ?CursorApiToString@Api@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@123@@Z @ 0x14026000C (-CursorApiToString@Api@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@123@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::ChangeCursorApiMode(
        char a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  const char *v6; // rax
  unsigned int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+50h] [rbp-30h] BYREF
  int v11; // [rsp+54h] [rbp-2Ch] BYREF
  int v12; // [rsp+58h] [rbp-28h] BYREF
  const char *v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
  {
    v10 = a6;
    v11 = a5;
    v12 = a4;
    v6 = "ShapeChange";
    if ( !a1 )
      v6 = "Move";
    v13 = v6;
    v14 = InputTraceLogging::Cursor::Api::CursorApiToString(a3);
    v15 = InputTraceLogging::Cursor::Api::CursorApiToString(v7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_140378473,
      v8,
      v9,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10);
  }
}
