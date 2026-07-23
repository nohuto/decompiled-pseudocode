/*
 * XREFs of MiCheckFaultClusterEligibility @ 0x140458F70
 * Callers:
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

unsigned __int64 __fastcall MiCheckFaultClusterEligibility(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rcx
  int v4; // r11d
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdi
  BOOL v7; // ebx
  __int64 *v8; // r9
  unsigned __int64 PteShadow; // rax
  __int16 v10; // cx
  bool v11; // zf

  v3 = a1 >> 9;
  v4 = a3;
  v5 = (v3 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5 + (a2 << 7) - 8;
  v7 = v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL;
  v8 = (__int64 *)((v3 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v5 <= v6 )
  {
    while ( 1 )
    {
      PteShadow = *v8;
      if ( v7 && (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v8, *v8);
      if ( v4 )
      {
        if ( (PteShadow & 1) != 0 )
          return (unsigned __int64)((__int64)((__int64)v8 - v5) >> 3) >> 4;
        v10 = PteShadow;
        if ( qword_140E2D8C0 && (PteShadow & 0x10) == 0 )
          v10 = PteShadow & qword_140E2D8C8;
        if ( (v10 & 0x400) != 0 || (v10 & 0x800) != 0 || (v10 & 8) != 0 )
          return (unsigned __int64)((__int64)((__int64)v8 - v5) >> 3) >> 4;
        v11 = ((PteShadow >> 5) & 0x1F) == v4;
      }
      else
      {
        v11 = PteShadow == 0;
      }
      if ( v11 && (unsigned __int64)++v8 <= v6 )
        continue;
      return (unsigned __int64)((__int64)((__int64)v8 - v5) >> 3) >> 4;
    }
  }
  return (unsigned __int64)((__int64)((__int64)v8 - v5) >> 3) >> 4;
}
