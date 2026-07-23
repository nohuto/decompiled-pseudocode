/*
 * XREFs of DpxEndpointWrappedCall @ 0x140C66010
 * Callers:
 *     <none>
 * Callees:
 *     DpxAcquireSimpleRundown @ 0x1405E5EA0 (DpxAcquireSimpleRundown.c)
 *     DpxReleaseSimpleRundown @ 0x1405E5EF0 (DpxReleaseSimpleRundown.c)
 */

__int64 __fastcall DpxEndpointWrappedCall(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  bool v6; // cc
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp-8h] [rbp-10h]
  __int64 v12; // [rsp+0h] [rbp-8h]
  unsigned __int64 vars0; // [rsp+8h] [rbp+0h]
  __int64 vars8; // [rsp+10h] [rbp+8h]
  __int64 v15; // [rsp+38h] [rbp+30h]

  v5 = *(_DWORD *)(a1 + 24) + 1;
  v6 = v5 <= 4;
  v7 = v5 - 4;
  if ( !v6 )
  {
    v8 = v7;
    if ( (v7 & 1) != 0 )
    {
      v12 = 0LL;
      v8 = v7 + 1;
    }
    v9 = (unsigned int)(8 * v8 + 72);
    do
    {
      v11 = *(__int64 *)((char *)&v12 + v9);
      --v7;
    }
    while ( v7 );
  }
  vars0 = (a1 & 0xFFFFFFFFFFFFF000uLL)
        - ((unsigned __int64)*(unsigned int *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << 13);
  DpxAcquireSimpleRundown(*(_QWORD *)vars0);
  vars8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(a1
                                                                                          + 8LL
                                                                                          * *(unsigned int *)(vars0 + 24)))(
            v15,
            a2,
            a3,
            a4,
            v11,
            v12);
  DpxReleaseSimpleRundown(*(_QWORD *)vars0);
  return vars8;
}
