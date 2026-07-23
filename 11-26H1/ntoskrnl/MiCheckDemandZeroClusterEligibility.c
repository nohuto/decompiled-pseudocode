/*
 * XREFs of MiCheckDemandZeroClusterEligibility @ 0x1404477D0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiCheckDemandZeroClusterEligibility(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r11d
  unsigned __int64 v5; // r10
  BOOL v6; // ebx
  __int64 *v7; // r9
  unsigned __int64 PteShadow; // rax
  __int16 v9; // cx
  bool v10; // zf

  v3 = a3;
  v5 = a1;
  v6 = a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL;
  v7 = (__int64 *)a1;
  if ( a1 <= a2 )
  {
    while ( 1 )
    {
      PteShadow = *v7;
      if ( v6 && (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v7, *v7);
      if ( v3 )
      {
        if ( (PteShadow & 1) != 0 )
          return (__int64)((__int64)v7 - v5) >> 3;
        v9 = PteShadow;
        if ( qword_140E2D8C0 && (PteShadow & 0x10) == 0 )
          v9 = PteShadow & qword_140E2D8C8;
        if ( (v9 & 0x400) != 0 || (v9 & 0x800) != 0 || (v9 & 8) != 0 )
          return (__int64)((__int64)v7 - v5) >> 3;
        v10 = ((PteShadow >> 5) & 0x1F) == v3;
      }
      else
      {
        v10 = PteShadow == 0;
      }
      if ( v10 && (unsigned __int64)++v7 <= a2 )
        continue;
      return (__int64)((__int64)v7 - v5) >> 3;
    }
  }
  return (__int64)((__int64)v7 - v5) >> 3;
}
