/*
 * XREFs of EmonFreeCounter @ 0x140597DD8
 * Callers:
 *     EmonDisableMonitoring @ 0x140597A00 (EmonDisableMonitoring.c)
 *     EmonInitializeProfiling @ 0x140BF33D0 (EmonInitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonFreeCounter(unsigned int a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // edx
  int v6; // edx
  __int64 v7; // rcx

  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  result = KiProcessorBlock[v2];
  v4 = *(_QWORD *)(result + 88);
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 99;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 += 72LL;
        else
          v4 = 0LL;
      }
      else
      {
        v4 += 48LL;
      }
    }
    else
    {
      v4 += 24LL;
    }
  }
  if ( a1 <= *(_DWORD *)(v4 + 8) )
  {
    result = *(_QWORD *)(v4 + 16);
    v7 = 6LL * a1;
    if ( *(_DWORD *)(result + 8 * v7 + 28) != 3 )
    {
      *(_DWORD *)(result + 8 * v7 + 24) = 3;
      *(_DWORD *)(result + 8 * v7 + 36) = 0;
    }
  }
  return result;
}
