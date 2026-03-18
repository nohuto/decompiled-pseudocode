/*
 * XREFs of ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1400F9D10
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1400F926C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@@-$_tl.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::SetPointerShape(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12[4]; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+54h] [rbp-24h] BYREF
  int v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  bool v16; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
    {
      v6 = IS_USERCRIT_OWNED_AT_ALL(a1, a2);
      v9 = IS_USERCRIT_OWNED_EXCLUSIVE(v8, v7);
      if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
      {
        v16 = v9;
        v12[0] = v6;
        v13 = a3;
        v14 = v4;
        v15 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          (__int64)&dword_1403AA9C0,
          byte_1403784DC,
          v10,
          v11,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)v12,
          (__int64)&v16);
      }
    }
  }
}
