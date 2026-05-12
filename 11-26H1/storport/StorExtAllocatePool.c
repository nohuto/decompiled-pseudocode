/*
 * XREFs of StorExtAllocatePool @ 0x14007AB20
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

void *__fastcall StorExtAllocatePool(ULONG Length, ULONG Tag, __int64 a3, struct _MDL **a4)
{
  void *result; // rax
  void *v8; // rbx
  struct _MDL *Mdl; // rax

  result = (void *)RaidAllocatePool(64LL, Length, Tag, 0LL);
  v8 = result;
  if ( result )
  {
    if ( a4 )
    {
      Mdl = IoAllocateMdl(result, Length, 0, 0, 0LL);
      *a4 = Mdl;
      if ( Mdl )
      {
        MmBuildMdlForNonPagedPool(Mdl);
      }
      else
      {
        ExFreePoolWithTag(v8, Tag);
        return 0LL;
      }
    }
    return v8;
  }
  return result;
}
