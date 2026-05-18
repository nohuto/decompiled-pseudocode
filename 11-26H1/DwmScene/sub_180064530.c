/*
 * XREFs of sub_180064530 @ 0x180064530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180059718 @ 0x180059718 (sub_180059718.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall sub_180064530(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  _DWORD **v5; // rdi
  _DWORD **i; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = *(_DWORD ***)(a2 + 8);
  for ( i = *(_DWORD ***)a2; i != v5; i += 2 )
  {
    result = (_UNKNOWN **)*i;
    if ( *((_BYTE *)*i + 72) )
    {
      (*(void (__fastcall **)(__int64, _DWORD **, __int64, __int64))(*(_QWORD *)a1 + 120LL))(a1, i, a3, a4);
      result = (_UNKNOWN **)sub_180059718(*i, a3, a4);
    }
  }
  return result;
}
