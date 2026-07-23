/*
 * XREFs of EtwLogPfnInfoRundown @ 0x14083559C
 * Callers:
 *     EtwpEnumerateWorkingSet @ 0x14077A7EC (EtwpEnumerateWorkingSet.c)
 *     MmLogSystemShareablePfnInfo @ 0x14087D834 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwLogPfnInfoRundown(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rax
  _QWORD v11[5]; // [rsp+30h] [rbp-68h] BYREF
  int v12; // [rsp+58h] [rbp-40h]
  int v13; // [rsp+5Ch] [rbp-3Ch]

  if ( a1 )
    result = *(unsigned int *)(a1 + 464);
  else
    result = 0xFFFFFFFFLL;
  *a4 = result;
  v7 = a4 + 1;
  v8 = a4[1];
  v9 = a4 + 2;
  v11[0] = a4;
  v11[1] = 8LL;
  v11[2] = a4 + 1;
  for ( v11[3] = 8LL; v8; v8 -= *v7 )
  {
    v10 = v8;
    v11[4] = v9;
    if ( v8 > 0x7FC )
      v10 = 2044LL;
    v13 = 0;
    *v7 = v10;
    v12 = 32 * v10;
    EtwpLogKernelEvent((__int64)v11, a2, a3, 3u, 0x284u, 0x501802u);
    result = 32 * *v7;
    v9 = (_QWORD *)((char *)v9 + result);
  }
  return result;
}
