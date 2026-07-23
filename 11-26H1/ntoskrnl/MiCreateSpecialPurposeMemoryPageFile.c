/*
 * XREFs of MiCreateSpecialPurposeMemoryPageFile @ 0x14088488C
 * Callers:
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 * Callees:
 *     MiCreatePagefile @ 0x1408714A0 (MiCreatePagefile.c)
 *     MiDeletePagefile @ 0x140871A84 (MiDeletePagefile.c)
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 *     MiCreatePagefileMemoryExtents @ 0x140884604 (MiCreatePagefileMemoryExtents.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateSpecialPurposeMemoryPageFile(__int64 a1, unsigned int a2, int a3, UNICODE_STRING *a4)
{
  int PagefileMemoryExtents; // ebx
  char *Pagefile; // rax
  __int64 v7; // rdx
  struct _KLOCK_ENTRIES *v8; // r9
  char *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9

  if ( (((unsigned __int16)a3 | (unsigned __int16)a2) & 0x1FF) != 0 )
  {
    PagefileMemoryExtents = -1073741811;
LABEL_11:
    if ( a4 )
      ExFreePoolWithTag(a4->Buffer, 0);
    return (unsigned int)PagefileMemoryExtents;
  }
  if ( a2 != a3 )
  {
    PagefileMemoryExtents = -1073741637;
    goto LABEL_11;
  }
  Pagefile = MiCreatePagefile(a1, 0LL, 0LL, a2, a3, a4, 0, 4);
  v9 = Pagefile;
  if ( Pagefile )
  {
    PagefileMemoryExtents = MiCreatePagefileMemoryExtents((__int64)Pagefile, v7, a2, v8);
    if ( PagefileMemoryExtents < 0
      || (PagefileMemoryExtents = MiInsertPageFileInList((unsigned int *)v9, v10, v11, v12), PagefileMemoryExtents < 0) )
    {
      MiDeletePagefile(v9, 1);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)PagefileMemoryExtents;
}
