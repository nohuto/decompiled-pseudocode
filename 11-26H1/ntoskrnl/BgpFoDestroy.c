/*
 * XREFs of BgpFoDestroy @ 0x140C57B24
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140C569EC (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140C56AAC (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     FopFreeFontData @ 0x140C57BE8 (FopFreeFontData.c)
 */

void __fastcall BgpFoDestroy(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *v7; // rax
  __int64 v8; // rcx

  if ( BYTE4(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Flink) )
  {
    Blink = gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink;
    while ( Blink != (struct _LIST_ENTRY *)&gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink )
    {
      if ( !a1 || Blink[1].Flink == a1 )
      {
        p_Blink = &Blink[2].Blink;
        while ( 1 )
        {
          v4 = *p_Blink;
          if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink )
            break;
          if ( (struct _LIST_ENTRY **)v4->Blink != p_Blink )
            goto LABEL_16;
          Flink = v4->Flink;
          if ( v4->Flink->Blink != v4 )
            goto LABEL_16;
          *p_Blink = Flink;
          Flink->Blink = (struct _LIST_ENTRY *)p_Blink;
          FopFreeFontData();
        }
        v6 = Blink->Flink;
        if ( Blink->Flink->Blink != Blink || (v7 = Blink->Blink, v7->Flink != Blink) )
LABEL_16:
          __fastfail(3u);
        v7->Flink = v6;
        v8 = (__int64)Blink;
        v6->Blink = v7;
        Blink = Blink->Flink;
        BgpFwFreeMemory(v8);
      }
      else
      {
        Blink = Blink->Flink;
      }
    }
  }
}
