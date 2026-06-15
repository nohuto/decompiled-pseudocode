/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x1800679D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  struct ATL::CStringData *result; // rax
  int v6; // r8d
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdx

  if ( a3 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v6 = a3 + 1;
  v7 = (v6 + 7) & 0xFFFFFFF8;
  if ( v6 > (int)v7 )
    return 0LL;
  v8 = a4 * (unsigned __int64)v7;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  if ( (unsigned int)v8 > 0xFFFFFFE7 )
    return 0LL;
  result = (struct ATL::CStringData *)(*(__int64 (__fastcall **)(_QWORD, struct ATL::CStringData *, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
                                        *((_QWORD *)this + 1),
                                        a2,
                                        (unsigned int)(v8 + 24));
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v7 - 1;
  return result;
}
