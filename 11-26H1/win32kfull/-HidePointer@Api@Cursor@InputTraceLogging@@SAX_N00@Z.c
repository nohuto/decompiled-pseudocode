/*
 * XREFs of ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x1400FA018
 * Callers:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x14024E278 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::HidePointer(__int64 a1, __int64 a2, char a3)
{
  char v4; // si
  char v5; // bp
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // al
  int v10; // r8d
  int v11; // r9d
  bool v12; // [rsp+50h] [rbp-18h] BYREF
  char v13; // [rsp+51h] [rbp-17h] BYREF
  char v14; // [rsp+52h] [rbp-16h] BYREF
  _BYTE v15[13]; // [rsp+53h] [rbp-15h] BYREF
  bool v16; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  v5 = a1;
  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
    {
      v6 = IS_USERCRIT_OWNED_AT_ALL(a1, a2);
      v9 = IS_USERCRIT_OWNED_EXCLUSIVE(v8, v7);
      if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
      {
        v16 = v9;
        v12 = v6;
        v13 = a3;
        v14 = v4;
        v15[0] = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          (unsigned int)&dword_1403AA9C0,
          (unsigned int)&unk_1403783F2,
          v10,
          v11,
          (__int64)v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v16);
      }
    }
  }
}
