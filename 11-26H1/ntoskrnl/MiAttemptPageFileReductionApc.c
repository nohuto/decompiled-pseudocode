/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x1407121C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiGetPageFileResizeCandidates @ 0x1404E083C (MiGetPageFileResizeCandidates.c)
 *     MiExcessCommitExists @ 0x1405002A0 (MiExcessCommitExists.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(PRKEVENT Event)
{
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v3; // rsi
  __int64 Flink_low; // rcx
  unsigned __int64 v5; // rax
  unsigned int PageFileResizeCandidates; // eax
  unsigned int v7; // r14d
  unsigned int v8; // edi
  char *v9; // r15
  __int64 v10; // rcx
  _QWORD v12[6]; // [rsp+28h] [rbp-E0h] BYREF
  UCHAR *v13; // [rsp+58h] [rbp-B0h]
  char Base[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v15; // [rsp+6Ch] [rbp-9Ch]

  v13 = 0LL;
  v15 = 0;
  memset(v12, 0, sizeof(v12));
  memset_0(Base, 0, 0x17CuLL);
  Blink = Event[1].Header.WaitListHead.Blink;
  v3 = *(_QWORD *)&Event[1].Header.Lock;
  if ( Blink )
  {
    v12[5] = Event[1].Header.WaitListHead.Blink;
    Flink_low = BYTE4(Blink[5].Flink);
    v12[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_5:
    v12[0] = *(_QWORD *)(v3 + 8 * Flink_low + 22304);
    v13 = &Event[2].Header.Type + 4 * Flink_low;
    MiTargetedPageFileReductionApc(v12);
    return KeSetEvent(Event, 0, 0);
  }
  Flink_low = LODWORD(Event[1].Header.WaitListHead.Flink);
  if ( (unsigned int)Flink_low < 0x10 )
  {
    *(_OWORD *)&v12[1] = 0x7FFFFFFFFFFFFFFFuLL;
    LODWORD(v12[3]) = HIDWORD(Event[1].Header.WaitListHead.Flink);
    *(_QWORD *)((char *)&v12[3] + 4) = 0LL;
    goto LABEL_5;
  }
  v5 = MiExcessCommitExists(*(_QWORD *)(v3 + 23104), *(_QWORD *)(v3 + 23448));
  v12[1] = v5;
  if ( v5 )
  {
    v12[2] = 0x8000LL;
    v12[3] = 0x100004000LL;
    LODWORD(v12[4]) = 1;
    PageFileResizeCandidates = MiGetPageFileResizeCandidates(v3, v5, 0, Base);
    v7 = PageFileResizeCandidates;
    if ( PageFileResizeCandidates <= 1 )
    {
      v8 = 0;
      if ( !PageFileResizeCandidates )
        return KeSetEvent(Event, 0, 0);
    }
    else
    {
      qsort(
        Base,
        PageFileResizeCandidates,
        0x18uLL,
        (int (__cdecl *)(const void *, const void *))MiPageFileCandidateSort);
      v8 = 0;
    }
    v9 = Base;
    do
    {
      v10 = *(unsigned int *)v9;
      v12[0] = *(_QWORD *)(v3 + 8 * v10 + 22304);
      v13 = &Event[2].Header.Type + 4 * v10;
      if ( !(unsigned int)MiTargetedPageFileReductionApc(v12) )
        break;
      ++v8;
      v9 += 24;
    }
    while ( v8 < v7 );
  }
  return KeSetEvent(Event, 0, 0);
}
