/*
 * XREFs of ?AddNewProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEADW4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1403BDE50
 * Callers:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1403BDB78 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddNewProcessEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  unsigned int i; // r10d
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int64 result; // rax

  for ( i = 0; i < 0x40; ++i )
  {
    v8 = 4720LL * i;
    if ( !*(_BYTE *)(v8 + a1 + 104) )
    {
      ++*(_DWORD *)(v8 + a1 + 44);
      *(_OWORD *)(v8 + a1 + 8) = *(_OWORD *)a3;
      v9 = *(_OWORD *)(a3 + 16);
      *a5 = i;
      *(_OWORD *)(v8 + a1 + 24) = v9;
      *a6 = 0;
      *(_BYTE *)(v8 + a1 + 40) = *(_BYTE *)(a3 + 32);
      result = 0LL;
      *(_QWORD *)(v8 + a1) = a2;
      *(_DWORD *)(v8 + a1 + 172) = a4;
      *(_BYTE *)(v8 + a1 + 104) = 1;
      *(_BYTE *)(a1 + 302128) = 0;
      return result;
    }
  }
  return 3221226021LL;
}
