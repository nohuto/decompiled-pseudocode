/*
 * XREFs of ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18006C438
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800AF15C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Reallocate(__int64 *a1, int a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(*a1 - 12) >= a2
    || a2 <= 0
    || (v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(*a1 - 24) + 16LL))(
               *(_QWORD *)(*a1 - 24),
               *a1 - 24,
               (unsigned int)a2,
               2LL)) == 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  }
  result = v3 + 24;
  *a1 = result;
  return result;
}
