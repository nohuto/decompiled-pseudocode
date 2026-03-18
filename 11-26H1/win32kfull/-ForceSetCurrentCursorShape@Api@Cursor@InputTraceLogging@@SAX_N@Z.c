/*
 * XREFs of ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x14025F9C8
 * Callers:
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14025F994 (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33@Z @ 0x1400027FC (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::ForceSetCurrentCursorShape(__int64 a1, __int64 a2)
{
  char v2; // bl
  bool v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // [rsp+58h] [rbp+10h] BYREF
  bool v9; // [rsp+60h] [rbp+18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = a1;
  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
    {
      v3 = IS_USERCRIT_OWNED_AT_ALL(a1, a2);
      IS_USERCRIT_OWNED_EXCLUSIVE(v5, v4);
      if ( (unsigned int)dword_1403AA9C0 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 8LL) )
        {
          v8 = v7;
          v9 = v3;
          v10 = v2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
            (__int64)&dword_1403AA9C0,
            (__int64)&unk_140378394,
            v6,
            v7,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v8);
        }
      }
    }
  }
}
