/*
 * XREFs of MiInitializeWalkBounds @ 0x1403267E0
 * Callers:
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 * Callees:
 *     MiSetExclusionWalkBounds @ 0x14048EB4C (MiSetExclusionWalkBounds.c)
 */

__int64 __fastcall MiInitializeWalkBounds(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rcx
  char *Thread; // rdx
  void *Blink; // rcx
  __int64 v9; // rcx
  struct _LIST_ENTRY *v10; // r10

  if ( (*(_DWORD *)a1 & 0x1000) != 0 )
  {
    a2[2] = 0xFFFFF70000000000uLL;
    a2[3] = -1LL;
    *a2 = 0LL;
    a2[1] = 0xFFFFF67FFFFFFFFFuLL;
    return 2LL;
  }
  else
  {
    result = 1LL;
    v4 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 184LL);
    if ( (*(_DWORD *)a1 & 0x400) != 0 )
    {
      if ( (v4 & 0xF) != 0 )
        Thread = (char *)qword_140E37C30;
      else
        Thread = (char *)(qword_140E37C30 + 0x8000000000LL);
      v9 = 0xFFFFFFFFFLL;
LABEL_13:
      *a2 = Thread;
      a2[1] = &Thread[v9];
    }
    else
    {
      if ( (v4 & 0xF) != 0 )
      {
        switch ( v4 & 0xF )
        {
          case 1:
            Thread = *(char **)&stru_140E2D930.UserAffinityPrimaryGroup;
            Blink = stru_140E2D930.QueueListEntry.Blink;
            goto LABEL_12;
          case 2:
            Thread = (char *)stru_140E2D930.WaitBlock[3].Thread;
            Blink = stru_140E2D930.WaitBlock[2].SparePtr;
            goto LABEL_12;
          case 3:
            v10 = (struct _LIST_ENTRY *)(qword_140E37C88 + qword_140E37C80);
            if ( stru_140E2D930.SuspendEvent.Header.WaitListHead.Flink >= (struct _LIST_ENTRY *)qword_140E37C80
              && (stru_140E2D930.SuspendEvent.Header.WaitListHead.Flink < v10 || !v10) )
            {
              return MiSetExclusionWalkBounds(
                       qword_140E37C80,
                       qword_140E37C88,
                       stru_140E2D930.SuspendEvent.Header.WaitListHead.Flink,
                       stru_140E2D930.SuspendEvent.Header.WaitListHead.Blink,
                       (__int64)a2);
            }
            *a2 = qword_140E37C80;
            a2[1] = (char *)v10 - 1;
            return result;
          case 4:
            Thread = (char *)stru_140E2D930.SavedApcState.Process;
            Blink = stru_140E2D930.SavedApcState.ApcListHead[0].Flink;
            goto LABEL_12;
          case 5:
            *a2 = qword_140E37BC0;
            a2[1] = qword_140E37BC8 + qword_140E37BC0 - 1;
            return result;
          case 6:
            Thread = *(char **)&stru_140E2D930.SystemCallNumber;
            Blink = stru_140E2D930.StateSaveArea;
LABEL_12:
            v9 = ((_QWORD)Blink << 21) - 1LL;
            goto LABEL_13;
          case 7:
            *a2 = qword_140E37B90;
            a2[1] = qword_140E37B98 - 1 + qword_140E37B90;
            a2[2] = qword_140E37C50;
            result = 2LL;
            a2[3] = qword_140E37C58 + qword_140E37C50 - 1;
            return result;
          case 9:
            *a2 = qword_140E37C60;
            a2[1] = qword_140E37C68 - 1 + qword_140E37C60;
            a2[2] = qword_140E37BF0;
            a2[3] = qword_140E37BF8 + qword_140E37BF0 - 1;
            return 2LL;
          default:
            return result;
        }
      }
      *a2 = 0LL;
      a2[1] = 0x7FFFFFFFFFFFLL;
      v5 = qword_140E2DE60;
      v6 = qword_140E2DE48;
      if ( !qword_140E2DE60 )
      {
        v5 = 276840448LL;
        qword_140E2DE70 = 0x10000000LL;
        qword_140E2DE60 = 276840448LL;
        qword_140E2DE68 = 276824064LL;
      }
      a2[2] = qword_140E2DE48;
      a2[3] = v6 + v5 - 1;
      return 2LL;
    }
  }
  return result;
}
