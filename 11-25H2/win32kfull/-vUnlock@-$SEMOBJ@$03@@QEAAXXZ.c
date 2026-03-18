/*
 * XREFs of ?vUnlock@?$SEMOBJ@$03@@QEAAXXZ @ 0x14008D980
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x14008D568 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SEMOBJ<4>::vUnlock(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rbx
  struct _GRETHREAD *v3; // rax

  v1 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Pointer", *a1);
    v3 = GreGetCurrentThreadCrossSessionCheck();
    if ( v3 )
    {
      if ( (*((_BYTE *)v3 + 12))-- == 1 )
        *(_QWORD *)v3 &= ~0x10uLL;
      if ( !*(_QWORD *)v3 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
    *a1 = 0LL;
  }
}
