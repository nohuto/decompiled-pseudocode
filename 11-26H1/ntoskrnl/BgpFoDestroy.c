/*
 * XREFs of BgpFoDestroy @ 0x140C51B24
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140C509EC (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140C50AAC (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     FopFreeFontData @ 0x140C51BE8 (FopFreeFontData.c)
 */

void __fastcall BgpFoDestroy(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *v2; // rbx
  void **p_InitialStack; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rcx

  if ( LOBYTE(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink) )
  {
    v2 = *(struct _KTHREAD **)&gLoadedDiffHivesLock.Timer.Header.Lock;
    while ( v2 != (struct _KTHREAD *)&gLoadedDiffHivesLock.Timer )
    {
      if ( !a1 || v2->Header.WaitListHead.Blink == a1 )
      {
        p_InitialStack = &v2->InitialStack;
        while ( 1 )
        {
          v4 = *p_InitialStack;
          if ( *p_InitialStack == p_InitialStack )
            break;
          if ( (void **)v4[1] != p_InitialStack )
            goto LABEL_16;
          v5 = (_QWORD *)*v4;
          if ( *(_QWORD **)(*v4 + 8LL) != v4 )
            goto LABEL_16;
          *p_InitialStack = v5;
          v5[1] = p_InitialStack;
          FopFreeFontData();
        }
        v6 = *(struct _LIST_ENTRY **)&v2->Header.Lock;
        if ( *(struct _KTHREAD **)(*(_QWORD *)&v2->Header.Lock + 8LL) != v2
          || (Flink = v2->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != v2) )
        {
LABEL_16:
          __fastfail(3u);
        }
        Flink->Flink = v6;
        v8 = (__int64)v2;
        v6->Blink = Flink;
        v2 = *(struct _KTHREAD **)&v2->Header.Lock;
        BgpFwFreeMemory(v8);
      }
      else
      {
        v2 = *(struct _KTHREAD **)&v2->Header.Lock;
      }
    }
  }
}
