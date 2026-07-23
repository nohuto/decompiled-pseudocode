/*
 * XREFs of HalpHvEpCpuid @ 0x1404F98E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_DWORD *__fastcall HalpHvEpCpuid(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *result; // rax

  if ( (a1 & 0x100000000LL) != 0 )
  {
    _RAX = (unsigned int)a2;
    __asm { cpuid }
    *a3 = _RAX;
    *a4 = _RBX;
    *a5 = _RCX;
    result = a6;
    *a6 = _RDX;
  }
  else
  {
    result = (_DWORD *)qword_140FBB448;
    if ( !qword_140FBB448
      || (LODWORD(a1) = a1 & 0x7FFFFFFF, result = (_DWORD *)guard_dispatch_icall_no_overrides(a1, a2), (int)result < 0) )
    {
      *a3 = 0;
      *a4 = 0;
      *a5 = 0;
      *a6 = 0;
    }
  }
  return result;
}
