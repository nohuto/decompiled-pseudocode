/*
 * XREFs of ??_ECEnumerableObjectCollection@@MEAAPEAXI@Z @ 0x180159290
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAndReleaseAll@?$CSimplePointerArray@UIUnknown@@V?$CTContainer_PolicyRelease@UIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x180159328 (-RemoveAndReleaseAll@-$CSimplePointerArray@UIUnknown@@V-$CTContainer_PolicyRelease@UIUnknown@@@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CEnumerableObjectCollection *__fastcall CEnumerableObjectCollection::`vector deleting destructor'(
        CEnumerableObjectCollection *this,
        char a2)
{
  char *v4; // rdi

  *(_QWORD *)this = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
  *((_QWORD *)this + 1) = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
  *((_QWORD *)this + 2) = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
  v4 = (char *)this + 40;
  CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *>>::RemoveAndReleaseAll((char *)this + 40);
  if ( *(_QWORD *)v4 )
  {
    CoTaskMemFree(*(LPVOID *)v4);
    *(_QWORD *)v4 = 0LL;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
