/*
 * XREFs of ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x140074670
 * Callers:
 *     ndisPnpRefresh @ 0x14016B150 (ndisPnpRefresh.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14001C9E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1400658D0 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x14015DE10 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x14015EB10 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 */

void __fastcall ndisIfCreateOrUpdateInterface(const struct _GUID *a1, __int64 a2, unsigned int a3)
{
  unsigned int ifIndex; // ebx
  int v5; // eax
  KIRQL v6; // bp
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // rax
  struct _NDIS_IF_BLOCK *v8; // rsi
  KIRQL v9; // bl
  KIRQL v10; // di
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  struct KRegKey v12; // [rsp+50h] [rbp+18h] BYREF

  ifIndex = 0;
  Handle = 0LL;
  v5 = ndisIfOpenInterfacePersistedStorage(a1, (struct KRegKey *)&Handle, a3);
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741772 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
    v8 = InterfaceByInterfaceGuid;
    if ( InterfaceByInterfaceGuid )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid->RefCountTracker, 0xFu);
      ++v8->Ref;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v6);
    if ( Handle )
    {
      if ( v8 )
      {
        ndisIfUpdateIfBlockFromPersistedState(v8, (struct KRegKey *)&Handle);
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
        IFBLOCK_DECREMENT_REF(v8, 0xFu);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v9);
      }
      else
      {
        v12.m_ptr = 0LL;
        ndisLoadNetworkInterfaceFromPersistedState(a1, (struct KRegKey *)&Handle, &v12);
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v12.m_ptr);
      }
    }
    else if ( v8 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
      if ( v8->Source == NdisIfBlockSourcePersistedNetSetup )
        ifIndex = v8->ifIndex;
      IFBLOCK_DECREMENT_REF(v8, 0xFu);
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v10);
      if ( ifIndex )
        ndisIfDeregisterInterfaceEx(ifIndex, 1);
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
  }
  else if ( Handle )
  {
    ZwClose(Handle);
  }
}
