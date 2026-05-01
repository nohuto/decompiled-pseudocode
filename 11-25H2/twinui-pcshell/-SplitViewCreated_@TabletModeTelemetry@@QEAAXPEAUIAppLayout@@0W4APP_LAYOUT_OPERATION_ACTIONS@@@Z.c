/*
 * XREFs of ?SplitViewCreated_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@0W4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1804F987C
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1804F4474 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800B1680 (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TabletModeTelemetry::SplitViewCreated_(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a1;
  LODWORD(v6) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 80LL))(a3, 1LL);
  if ( (_DWORD)v6 == 2 )
  {
    LODWORD(v6) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
    if ( (_DWORD)v6 == 1 )
    {
      v7 = a4 & 0x10;
      v6 = WindowManagementLogging::Provider();
      if ( *(_DWORD *)v6 > 5u )
      {
        LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x200000000000LL);
        if ( (_BYTE)v6 )
        {
          LOBYTE(v11) = v7 != 0;
          LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                         v8,
                         byte_1807DFA22,
                         0LL,
                         v9,
                         (__int64)&v11);
        }
      }
    }
  }
  return (char)v6;
}
