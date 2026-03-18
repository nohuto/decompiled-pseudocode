/*
 * XREFs of ?SysMmTestQueryAdapterInfo@@YAJPEAUSYSMM_ADAPTER@@W4_SYSMM_TEST_QUERYADAPTERINFO_TYPE@@PEAX_K@Z @ 0x14009D730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SysMmTestQueryAdapterInfo(_DWORD *a1, int a2, int *a3, unsigned __int64 a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  if ( a2 || a4 < 4 )
    return 3221225485LL;
  *a3 = 65;
  v6 = (2 * (a1[22] & 1)) | 0x41;
  *a3 = v6;
  v7 = v6 | a1[5] & 4;
  *a3 = v7;
  v8 = v7 | (a1[24] != 0 ? 8 : 0);
  *a3 = v8;
  v9 = v8 | (4 * (a1[22] & 4));
  *a3 = v9;
  *a3 = v9 | (32 * (a1[23] & 1));
  return 0LL;
}
