/*
 * XREFs of ?QueryInterface@DWMCursorBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CC510
 * Callers:
 *     ?QueryInterface@DWMCursorBroker@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CC5D0 (-QueryInterface@DWMCursorBroker@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CC5E0 (-QueryInterface@DWMCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CC5F0 (-QueryInterface@DWMCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::QueryInterface(DWMCursorBroker *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 8;
LABEL_11:
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v8 )
  {
    (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 24;
    goto LABEL_11;
  }
  return 2147500034LL;
}
