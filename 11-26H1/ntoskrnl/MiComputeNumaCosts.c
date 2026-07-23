/*
 * XREFs of MiComputeNumaCosts @ 0x140CF744C
 * Callers:
 *     MmInitSystem @ 0x140C85D84 (MmInitSystem.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void MiComputeNumaCosts()
{
  ULONG_PTR v0; // rdi
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v2; // rbx
  unsigned int v3; // r9d
  unsigned int i; // r8d
  unsigned int v5; // r11d
  __int64 v6; // rax

  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v0 = 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
    Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v0, 0x616D754Eu);
    v2 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, KiNodeGraph, v0);
      v3 = (unsigned __int16)KeNumberNodes;
      for ( i = 0; i < v3; ++i )
      {
        v5 = 0;
        do
        {
          v6 = i * v3 + v5++;
          *(_DWORD *)(qword_140E2D810 + 4LL * (unsigned int)v6) = v2[v6];
        }
        while ( v5 < v3 );
      }
      ExFreePoolWithTag(v2, 0);
    }
  }
}
