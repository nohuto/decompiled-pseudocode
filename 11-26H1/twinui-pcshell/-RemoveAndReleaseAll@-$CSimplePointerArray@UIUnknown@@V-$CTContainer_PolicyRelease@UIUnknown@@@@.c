/*
 * XREFs of ?RemoveAndReleaseAll@?$CSimplePointerArray@UIUnknown@@V?$CTContainer_PolicyRelease@UIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x180159328
 * Callers:
 *     ??_ECEnumerableObjectCollection@@MEAAPEAXI@Z @ 0x180159290 (--_ECEnumerableObjectCollection@@MEAAPEAXI@Z.c)
 *     ?Clear@CEnumerableObjectCollection@@UEAAJXZ @ 0x1802DE9F0 (-Clear@CEnumerableObjectCollection@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *>>::RemoveAndReleaseAll(
        __int64 a1)
{
  unsigned __int64 i; // rdi
  __int64 v3; // rcx

  for ( i = 0LL; i < *(_QWORD *)(a1 + 8); ++i )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *(_QWORD *)a1 )
  {
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
