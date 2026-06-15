/*
 * XREFs of sub_14009E4F0 @ 0x14009E4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009E630 @ 0x14009E630 (sub_14009E630.c)
 */

__int64 __fastcall sub_14009E4F0(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  __int64 v6; // rdi
  unsigned int v7; // ecx
  int v8; // r8d
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( !a2 )
  {
    v2 = -2147467261;
LABEL_5:
    sub_140048108();
    return v2;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 - 368), 1, 1) )
  {
    v2 = -2005139437;
    goto LABEL_5;
  }
  sub_14009E630(a1 - 416, &v10, 0LL);
  v5 = *(_DWORD *)(a1 + 44);
  v6 = a1 - 328;
  if ( v5 )
  {
    v7 = *(unsigned __int16 *)(*(_QWORD *)v6 + 192LL)
       * (int)((double)(int)(*(_DWORD *)(*(_QWORD *)v6 + 188LL)
                           / (unsigned int)*(unsigned __int16 *)(*(_QWORD *)v6 + 192LL))
             * (double)(int)v10
             / 10000000.0
             + 0.5);
    v8 = v7 - v7 % v5;
  }
  else
  {
    v8 = v10;
  }
  *a2 = (int)((double)(int)(*(_DWORD *)(*(_QWORD *)v6 + 188LL)
                          / (unsigned int)*(unsigned __int16 *)(*(_QWORD *)v6 + 192LL))
            * (double)v8
            / 10000000.0
            + 0.5);
  return v2;
}
