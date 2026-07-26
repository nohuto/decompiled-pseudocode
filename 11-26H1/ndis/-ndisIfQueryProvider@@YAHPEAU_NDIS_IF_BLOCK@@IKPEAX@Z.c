/*
 * XREFs of ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1401548D0
 * Callers:
 *     ndisIfUpdateExternalInterface @ 0x1400CE2B0 (ndisIfUpdateExternalInterface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisIfQueryProvider(struct _NDIS_IF_BLOCK *a1, __int64 a2, unsigned int a3, char *a4)
{
  struct _NDIS_IF_PROVIDER_BLOCK *ProviderHandle; // rax
  void *ProviderIfContext; // rcx
  size_t v7; // rdi
  __int64 (__fastcall *v8)(void *, __int64, unsigned int *); // rax
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  ProviderHandle = a1->ProviderHandle;
  ProviderIfContext = a1->ProviderIfContext;
  v7 = a3;
  v8 = (__int64 (__fastcall *)(void *, __int64, unsigned int *))*((_QWORD *)ProviderHandle + 7);
  v11 = a3;
  v9 = v8(ProviderIfContext, a2, &v11);
  if ( v9 )
  {
    memset(a4, 0, v7);
  }
  else if ( v11 < (unsigned int)v7 )
  {
    memset(&a4[v11], 0, (unsigned int)v7 - v11);
  }
  return v9;
}
