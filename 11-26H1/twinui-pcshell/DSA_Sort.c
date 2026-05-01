/*
 * XREFs of DSA_Sort @ 0x180684490
 * Callers:
 *     ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x180675420 (-_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV-$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _DSA_MergeSort @ 0x180683F9C (_DSA_MergeSort.c)
 */

BOOL __stdcall DSA_Sort(HDSA pdsa, PFNDACOMPARE pfnCompare, LPARAM lParam)
{
  BOOL result; // eax
  _DWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+28h] [rbp-40h]
  int v6; // [rsp+30h] [rbp-38h]
  int v7; // [rsp+34h] [rbp-34h]
  PFNDACOMPARE v8; // [rsp+38h] [rbp-30h]
  LPARAM v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]

  result = 0;
  if ( pfnCompare )
  {
    v4[1] = 0;
    v7 = 0;
    v10 = 0LL;
    v4[0] = *(_DWORD *)pdsa;
    v5 = *((_QWORD *)pdsa + 1);
    v6 = *((_DWORD *)pdsa + 5);
    v8 = pfnCompare;
    v9 = lParam;
    return DSA_MergeSort((__int64)v4);
  }
  return result;
}
