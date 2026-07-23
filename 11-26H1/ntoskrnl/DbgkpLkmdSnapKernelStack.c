/*
 * XREFs of DbgkpLkmdSnapKernelStack @ 0x1405B66C0
 * Callers:
 *     DbgkpLkmdSnapThreadInContext @ 0x14078E5DC (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x14040FEF8 (KeEnumerateKernelStackSegments.c)
 *     DbgkpLkmdSnapDataEx @ 0x1405B65AC (DbgkpLkmdSnapDataEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DbgkpLkmdSnapKernelStack(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 v9; // rdi
  _BYTE *v10; // rbx
  _BYTE v13[152]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+F8h] [rbp-8h]
  __int64 v15; // [rsp+100h] [rbp+0h]
  _BYTE v16[48]; // [rsp+530h] [rbp+430h] BYREF
  __int64 v17; // [rsp+560h] [rbp+460h]
  __int64 v18; // [rsp+568h] [rbp+468h]

  v5 = (__int64 *)(a3 + 88);
  if ( a5 )
  {
    v9 = *(_QWORD *)(a5 + 152);
  }
  else
  {
    v9 = *v5;
    if ( a4 )
    {
      memset_0(v13, 0, 0x4D0uLL);
      v14 = v9;
      v15 = v9;
    }
  }
  KeEnumerateKernelStackSegments(a2);
  if ( a4 )
  {
    v10 = v13;
    if ( a5 )
      v10 = (_BYTE *)a5;
    memset_0(v16, 0, 0x40uLL);
    v18 = *((_QWORD *)v10 + 31);
    v17 = *((_QWORD *)v10 + 20);
    DbgkpLkmdSnapDataEx(a1, (__int64)v16);
    *v5 = v9 - 64;
    *(_BYTE *)(a3 + 388) = -1;
  }
  return 0LL;
}
