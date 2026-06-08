/*
 * XREFs of AmdPctGetPlatformCtrInfo @ 0x140023B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AmdPctGetPlatformCtrInfo(unsigned int a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rcx

  if ( a1 > 2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = 0;
    v5 = 6LL * (int)a1;
    *a2 = L"RAPL";
    *a3 = (&AmdPctPlatformCounterCfg)[v5];
    *a4 = *((_DWORD *)&AmdPctPlatformCounterCfg + 2 * v5 + 10);
  }
  return v4;
}
