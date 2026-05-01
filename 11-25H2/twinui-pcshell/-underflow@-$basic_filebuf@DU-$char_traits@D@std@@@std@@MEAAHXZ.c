/*
 * XREFs of ?underflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x180213EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::filebuf::underflow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  unsigned int v4; // ebx

  if ( std::streambuf::gptr(a1) )
  {
    v2 = std::streambuf::egptr(a1);
    if ( std::streambuf::gptr(a1) < v2 )
      return *(unsigned __int8 *)std::streambuf::gptr(a1);
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  result = 0xFFFFFFFFLL;
  if ( v4 != -1 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v4);
    return v4;
  }
  return result;
}
