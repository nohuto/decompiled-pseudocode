/*
 * XREFs of MiFilterCrashDumpPte @ 0x1406FB0B0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiIsPageSecured @ 0x140534D58 (MiIsPageSecured.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiFilterCrashDumpPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v3; // rsi
  __int64 v7; // r15
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  unsigned __int64 v10; // rbx
  _KPROCESS *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 v18; // rbx
  __int64 v19; // rbp
  int v20; // eax

  v3 = *(__int64 **)(a1 + 184);
  v7 = *v3;
  if ( a3 == 3 && (*(_DWORD *)a1 & 0x11000) != 0 )
  {
    LeafVa = MiGetLeafVa(a2);
    SystemRegionType = MiGetSystemRegionType(LeafVa);
    if ( SystemRegionType == 7 || (*(_DWORD *)(v7 + 40) & 4) != 0 && SystemRegionType == 3 )
      return 1LL;
  }
  v10 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v11 = MiPteHasShadow();
    if ( v11 )
    {
      KernelWaitTime = v11[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v14 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v14 & 0x20) != 0 )
          v12 |= 0x20uLL;
        v10 = v12 | 0x42;
        if ( (v14 & 0x42) == 0 )
          v10 = v12;
      }
    }
  }
  if ( !a3 )
  {
    if ( (v3[1] & 1) != 0 )
      return 0LL;
    if ( (v10 & 1) == 0 )
    {
      if ( (v10 & 0xC00) != 0x800 )
        return 0LL;
      if ( qword_140E2D8C0 && (v10 & 0x10) == 0 )
        v10 &= qword_140E2D8C8;
    }
    v18 = (v10 >> 12) & 0xFFFFFFFFFFLL;
    if ( v18 > qword_140E2D920 )
      return 0LL;
    if ( ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 0LL;
    v19 = 48 * v18 - 0x220000000000LL;
    if ( (unsigned int)MiIsPageSecured(v19)
      || (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 8
      && (*(_QWORD *)(v19 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v19 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
      && ((*(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
       || (*(_BYTE *)(v19 + 34) & 7) != 6
       || (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL) )
    {
      return 0LL;
    }
    v15 = v18;
LABEL_43:
    v20 = guard_dispatch_icall_no_overrides(v7, v15);
    if ( v20 < 0 && *((int *)v3 + 3) >= 0 )
      *((_DWORD *)v3 + 3) = v20;
    return 0LL;
  }
  if ( (v10 & 1) == 0 )
    return 0LL;
  v15 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  if ( v15 > qword_140E2D920 || ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    return 1LL;
  if ( (v10 & 0x80u) == 0LL )
    goto LABEL_43;
  if ( (v3[1] & 1) == 0 )
  {
    MiGetLeafVa(a2);
    MiGetLeafVa(a2 + 8);
    v15 = (__int64)(*(_QWORD *)(a1 + 96) << 25) >> 16;
    if ( v16 >= v15 )
      v15 = v16;
    goto LABEL_43;
  }
  return 0LL;
}
