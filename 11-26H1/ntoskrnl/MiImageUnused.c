/*
 * XREFs of MiImageUnused @ 0x1404B7FC0
 * Callers:
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiWriteControlAreaFlags2 @ 0x1404AFA40 (MiWriteControlAreaFlags2.c)
 */

void __fastcall MiImageUnused(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  KIRQL v6; // si
  unsigned int v7; // r8d
  __int64 v8; // rdx

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v5 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)a3 = -1LL;
  if ( *(_QWORD *)(v5 + 32) )
  {
    if ( a2 )
      v6 = 17;
    else
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    if ( *(_DWORD *)(a1 + 88) != -1 )
    {
      v7 = *(_DWORD *)(a1 + 92);
      v8 = *(unsigned int *)(a1 + 88);
      *(_QWORD *)a3 = v8;
      if ( v8 == 0xFFFFFFFFLL )
        *(_QWORD *)a3 = -1LL;
      *(_DWORD *)(a3 + 8) = (unsigned __int16)v7;
      *(_DWORD *)(a3 + 16) = (v7 >> 20) & 3;
      if ( (*(_DWORD *)(a1 + 56) & 0x8000) != 0 && (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      {
        *(_DWORD *)(a1 + 56) &= ~0x8000u;
        *(_DWORD *)(a1 + 92) = v7;
        *(_BYTE *)(a3 + 13) = BYTE2(v7) & 1;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 92);
    }
    MiWriteControlAreaFlags2(a1, 0, 0x400000, 1);
    if ( v6 != 17 )
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
  }
}
