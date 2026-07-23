/*
 * XREFs of AccelpBuildDescriptorComputeHistogram @ 0x1406E3454
 * Callers:
 *     AccelpComputeHistogram @ 0x1406E3800 (AccelpComputeHistogram.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelpBuildDescriptorComputeHistogram(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  _DWORD v10[2]; // [rsp+28h] [rbp-31h] BYREF
  __int64 v11; // [rsp+30h] [rbp-29h]
  __int64 *v12; // [rsp+38h] [rbp-21h]
  int v13; // [rsp+40h] [rbp-19h]
  __int64 v14; // [rsp+48h] [rbp-11h]
  __int64 v15; // [rsp+50h] [rbp-9h]
  __int64 v16; // [rsp+58h] [rbp-1h]
  __int64 v17; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  __int64 v19; // [rsp+70h] [rbp+17h]

  v10[1] = 0;
  memset_0(v10, 0, 0x7CuLL);
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  memset_0((void *)a1[6], 0, *(unsigned int *)(*(_QWORD *)(*a1 + 16) + 276LL));
  memset_0((void *)a1[7], 0, *(unsigned int *)(*(_QWORD *)(*a1 + 16) + 280LL));
  v11 = *a1;
  v13 = *((_DWORD *)a1 + 6);
  v14 = a1[6];
  v15 = a1[7];
  v16 = a5;
  a1[5] = 0LL;
  v10[0] = 515;
  v12 = a1;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  return AccelpInternalOperationHandler((__int64)v10, 0LL);
}
