/*
 * XREFs of MiInitializeMdlPfn @ 0x14033DCE0
 * Callers:
 *     MiInitializeMdlSinglePage @ 0x14033DBB8 (MiInitializeMdlSinglePage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1404E279C (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiInitializeMdlPfnSecureState @ 0x14033DDC8 (MiInitializeMdlPfnSecureState.c)
 *     MiInitializeAwePfn @ 0x14050A044 (MiInitializeAwePfn.c)
 */

__int64 __fastcall MiInitializeMdlPfn(__int64 a1, int a2)
{
  int v4; // ecx
  __int64 result; // rax

  if ( (a2 & 0x100) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 7) != 5 )
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x50000;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFF0000 | 2;
    if ( a2 < 0 )
    {
      MiInitializeAwePfn();
    }
    else
    {
      MiSetPfnContainingFrame(a1, 0x3FFFFFFFFELL);
      MiInitializeMdlPfnSecureState(a1, (unsigned int)a2);
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x60000;
    }
  }
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  v4 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = 0;
  result = *(unsigned int *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = v4 & 0xF8000000 ^ (result ^ v4 & 0xF8000000) & 0xE7FFFFFF;
  return result;
}
