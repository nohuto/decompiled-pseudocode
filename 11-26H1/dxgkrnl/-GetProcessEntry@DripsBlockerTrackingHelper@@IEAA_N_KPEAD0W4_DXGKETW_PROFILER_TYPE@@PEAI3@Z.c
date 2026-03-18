/*
 * XREFs of ?GetProcessEntry@DripsBlockerTrackingHelper@@IEAA_N_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1403BDCBC
 * Callers:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1403BDB78 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 * Callees:
 *     <none>
 */

char __fastcall DripsBlockerTrackingHelper::GetProcessEntry(
        __int64 a1,
        __int64 a2,
        const void *a3,
        SIZE_T a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int i; // ebx
  __int64 v12; // rdi
  __int64 j; // rdx
  char result; // al

  for ( i = 0; i < 0x40; ++i )
  {
    v12 = 4720LL * i;
    if ( *(_BYTE *)(v12 + a1 + 104)
      && *(_QWORD *)(v12 + a1) == a2
      && RtlCompareMemory((const void *)(v12 + a1 + 8), a3, a4) == a4 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v12 + a1 + 44); j = (unsigned int)(j + 1) )
      {
        if ( *(_DWORD *)(v12 + 72 * j + a1 + 172) == a5 )
        {
          result = 1;
          *a6 = i;
          *a7 = j;
          return result;
        }
      }
    }
  }
  return 0;
}
