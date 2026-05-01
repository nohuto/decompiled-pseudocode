/*
 * XREFs of ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x180089608
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18002C54C (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x1800895B0 (-OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x1800896DC (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003F124 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??1?$_UninitializedAllocation@V?$allocator@U?$_DlistNode@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@@utl@@QEAA@XZ @ 0x1800675D0 (--1-$_UninitializedAllocation@V-$allocator@U-$_DlistNode@UExternalResourceRequestMessage@Externa.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F48C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::QueueMessage(HANDLE *a1, int a2)
{
  HANDLE *v3; // rdi
  HANDLE *v5; // rax
  HANDLE **v6; // rcx
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  HANDLE *v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1 + 164;
  v5 = (HANDLE *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 4) = a2;
    v6 = (HANDLE **)v3[1];
    v5[1] = v6;
    *v5 = v3;
    v11 = 0LL;
    *v6 = v5;
    v3[1] = v5;
    v3[2] = (char *)v3[2] + 1;
  }
  utl::_UninitializedAllocation<utl::allocator<utl::_DlistNode<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>>::~_UninitializedAllocation<utl::allocator<utl::_DlistNode<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>>((void **)&v11);
  result = SetEvent(a1[163]);
  if ( (unsigned int)dword_1800E1278 > 4 )
  {
    result = tlgKeywordOn((__int64)&dword_1800E1278, 1LL);
    if ( result )
    {
      v11 = a1;
      v12 = a2;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v8,
               byte_1800D3403,
               v9,
               v10,
               (__int64)&v12,
               (__int64)&v11);
    }
  }
  return result;
}
