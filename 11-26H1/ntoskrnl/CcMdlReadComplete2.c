/*
 * XREFs of CcMdlReadComplete2 @ 0x140AC6B48
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x1404C96D0 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x140AC6AE0 (CcMdlReadComplete.c)
 * Callees:
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 */

void __fastcall CcMdlReadComplete2(__int64 a1, struct _MDL *a2)
{
  struct _MDL *v2; // rdi
  struct _MDL *Next; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      Next = v2->Next;
      MmUnlockPages(v2);
      IoFreeMdl(v2);
      v2 = Next;
    }
    while ( Next );
  }
}
