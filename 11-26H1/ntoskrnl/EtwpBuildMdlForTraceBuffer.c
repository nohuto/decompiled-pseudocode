/*
 * XREFs of EtwpBuildMdlForTraceBuffer @ 0x1408342C0
 * Callers:
 *     EtwpPreserveLogger @ 0x1408346EC (EtwpPreserveLogger.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 */

__int64 __fastcall EtwpBuildMdlForTraceBuffer(__int64 a1, char *a2, struct _MDL **a3)
{
  unsigned int v3; // edi
  char *v4; // r15
  unsigned int v7; // ebx
  struct _MDL *Mdl; // rax
  struct _MDL *v9; // rsi
  __int64 v10; // rdi
  struct _MDL *v11; // r14
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v3 = *(_DWORD *)a2;
  v4 = a2;
  v7 = 0;
  Mdl = IoAllocateMdl(a2, *(_DWORD *)a2, 0, 0, 0LL);
  v9 = Mdl;
  if ( Mdl )
  {
    if ( (*(_DWORD *)(a1 + 816) & 0x20000000) != 0 )
    {
      v10 = v3 >> 12;
      v11 = Mdl + 1;
      if ( (_DWORD)v10 )
      {
        do
        {
          PhysicalAddress = MmGetPhysicalAddress(v4);
          v4 += 4096;
          v11->Next = (struct _MDL *)((unsigned __int64)PhysicalAddress.QuadPart >> 12);
          v11 = (struct _MDL *)((char *)v11 + 8);
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      MmBuildMdlForNonPagedPool(Mdl);
    }
    *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
