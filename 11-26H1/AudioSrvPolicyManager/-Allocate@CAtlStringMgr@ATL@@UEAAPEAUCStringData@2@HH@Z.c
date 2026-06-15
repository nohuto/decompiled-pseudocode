/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x180026F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  struct ATL::CStringData *result; // rax
  signed int v5; // edx
  signed int v6; // ebx
  unsigned __int64 v7; // r8

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v5 = a2 + 1;
  v6 = (v5 + 7) & 0xFFFFFFF8;
  if ( v5 > v6 )
    return 0LL;
  if ( v6 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < a3 )
      return 0LL;
    v7 = v6 * (__int64)a3;
    if ( v7 > 0xFFFFFFFFFFFFFFE7uLL )
      return 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  result = (struct ATL::CStringData *)(***((__int64 (__fastcall ****)(_QWORD, __int64))this + 1))(
                                        *((_QWORD *)this + 1),
                                        v7 + 24);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = this;
  *((_DWORD *)result + 3) = v6 - 1;
  *((_DWORD *)result + 4) = 1;
  *((_DWORD *)result + 2) = 0;
  return result;
}
