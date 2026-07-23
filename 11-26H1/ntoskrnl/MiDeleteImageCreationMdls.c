/*
 * XREFs of MiDeleteImageCreationMdls @ 0x140A63794
 * Callers:
 *     MiCreateImageMapFinish @ 0x140A624DC (MiCreateImageMapFinish.c)
 *     MiCreateImageMapFreeResources @ 0x140A631D8 (MiCreateImageMapFreeResources.c)
 *     MiCreateImageMapHeader @ 0x140A63364 (MiCreateImageMapHeader.c)
 *     MiCreateMdl @ 0x140A63630 (MiCreateMdl.c)
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MiReturnPfnReferenceCount @ 0x1404A7FE0 (MiReturnPfnReferenceCount.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageCreationMdls(PMDL Mdl, int a2)
{
  PMDL v3; // rbx
  CSHORT MdlFlags; // ax
  struct _MDL *Next; // rbp
  struct _MDL *v6; // rsi
  unsigned __int64 i; // rdi

  if ( Mdl )
  {
    v3 = Mdl;
    do
    {
      MdlFlags = v3->MdlFlags;
      Next = v3->Next;
      if ( (MdlFlags & 4) != 0 )
      {
        ExFreePoolWithTag(v3->StartVa, 0);
      }
      else if ( (MdlFlags & 2) != 0 )
      {
        if ( (MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v3->MappedSystemVa, v3);
        if ( a2 )
        {
          v6 = v3 + 1;
          for ( i = (unsigned __int64)v3->ByteCount >> 12; i; --i )
          {
            if ( v6->Next != (struct _MDL *)-1LL )
              MiReturnPfnReferenceCount(48 * (__int64)v6->Next - 0x220000000000LL);
            v6 = (struct _MDL *)((char *)v6 + 8);
          }
        }
      }
      IoFreeMdl(v3);
      v3 = Next;
    }
    while ( Next );
  }
}
