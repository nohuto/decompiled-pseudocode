/*
 * XREFs of MiInitializeMirrorPacket @ 0x14077A9F0
 * Callers:
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     CcNotifyWriteBehind @ 0x1405B3550 (CcNotifyWriteBehind.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInitializeMirrorPacket(_QWORD *a1, __int64 a2)
{
  int v3; // esi
  int v4; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // edx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax

  v3 = 1;
  v4 = *(_DWORD *)(a2 + 32);
  if ( (v4 & 0x404) != 0 && (v4 & 1) != 0 )
    return 3221225485LL;
  v6 = v4 & 0xFFFFFBFA;
  if ( (v4 & 8) == 0 )
    v6 = *(_DWORD *)(a2 + 32);
  if ( (v6 & 0x400) != 0 && (v6 & 4) != 0
    || (v6 & 0xC0) != 0 && ((v6 & 0xFFFFFC2E) != 0 || (v6 & 0x11) != 0x11 || (v6 & 0x40) != 0 && (v6 & 0x80u) != 0)
    || (v6 & 0xFFFFFC2E) != 0 && (v6 & 0x100) != 0
    || (v6 & 0x42D) == 0x20 )
  {
    return 3221225485LL;
  }
  if ( (v6 & 0x80A) == 0 )
    CcNotifyWriteBehind();
  memset_0(a1, 0, 0x48uLL);
  v7 = a1[8] & 0xFFFFFFFE;
  *((_DWORD *)a1 + 2) = v6;
  *((_DWORD *)a1 + 16) = v7;
  *a1 = a2;
  *((_DWORD *)a1 + 3) = 8;
  *((_WORD *)a1 + 10) = 4369;
  a1[3] = KeGetCurrentThread();
  a1[5] = (unsigned __int64)(a1 + 4) & -(__int64)((v6 & 0x200) != 0);
  *((_DWORD *)a1 + 4) = 0;
  if ( (v6 & 1) != 0 )
  {
    *((_DWORD *)a1 + 4) = 3;
LABEL_23:
    v3 = 0;
    goto LABEL_24;
  }
  if ( (v6 & 0x400) != 0 )
    goto LABEL_21;
  if ( (v6 & 4) != 0 )
  {
    *((_DWORD *)a1 + 3) = 7;
LABEL_22:
    *((_DWORD *)a1 + 4) = 2;
    goto LABEL_23;
  }
  if ( (v6 & 8) != 0 )
  {
LABEL_21:
    *((_DWORD *)a1 + 3) = 0;
    goto LABEL_22;
  }
LABEL_24:
  *((_DWORD *)a1 + 16) = (4 * v3) | v7 & 0xFFFFFFFB;
  if ( (stru_140E366D8.WaitRegister.Flags & 8) != 0 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, 0xFF0uLL, 2051566925, CurrentProcessorColor | 0x80000000);
    a1[6] = PoolMm;
    if ( !PoolMm )
      return 3221225626LL;
    a1[7] = 255LL;
  }
  return 0LL;
}
