/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14001EA8C
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14001EA30 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ProcessHidRawInput @ 0x14001F510 (ProcessHidRawInput.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z @ 0x14029A850 (-_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1401E21C0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(__int64 **this, __int64 a2)
{
  unsigned int v3; // r8d
  __int64 v4; // r9
  __int64 *v5; // rbx
  __int64 UserSessionState; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 6 && (qword_1403AA9D0 & 1) != 0 && (qword_1403AA9D8 & 1) == qword_1403AA9D8 )
  {
    v3 = (unsigned int)*this + 8;
    v4 = (*this)[5];
    v7 = **this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_1403734BD,
      v3,
      v4,
      (__int64)&v7);
  }
  v5 = *this;
  UserSessionState = W32GetUserSessionState(this, a2);
  Win32FreeToPagedLookasideList(*(_QWORD *)(UserSessionState + 19376), v5);
}
