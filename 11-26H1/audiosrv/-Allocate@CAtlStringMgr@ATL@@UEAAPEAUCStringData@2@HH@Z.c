/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x1800472F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  signed int v4; // edx
  signed int v5; // ebx
  struct ATL::CStringData *result; // rax
  unsigned __int64 v7; // r8

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = a2 + 1;
  v5 = (v4 + 7) & 0xFFFFFFF8;
  if ( v4 > v5 )
    return 0LL;
  if ( v5 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < a3 )
      return 0LL;
    v7 = v5 * (__int64)a3;
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
  *((_DWORD *)result + 3) = v5 - 1;
  *((_DWORD *)result + 4) = 1;
  *((_DWORD *)result + 2) = 0;
  return result;
}
