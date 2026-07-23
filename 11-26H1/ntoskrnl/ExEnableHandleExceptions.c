/*
 * XREFs of ExEnableHandleExceptions @ 0x140AFC710
 * Callers:
 *     PspApplyMitigationOptions @ 0x140B4F59C (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x14031722C (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x14047D358 (ExpLockHandleTableExclusive.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rcx
  char v8; // cl
  bool v9; // bl
  int v11; // eax

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread, a3, a4);
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    v11 = *(_DWORD *)(v7 + 8);
    if ( (v11 & 8) != 0 )
    {
      v9 = a2 != 0;
      goto LABEL_5;
    }
    if ( a2 )
      *(_DWORD *)(v7 + 8) = v11 | 8;
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 44);
    if ( (v8 & 2) != 0 )
    {
      v9 = a2 != 0;
      goto LABEL_5;
    }
    *(_BYTE *)(a1 + 44) = v8 & 0xFD | (a2 != 0 ? 2 : 0);
  }
  v9 = 1;
LABEL_5:
  ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
  return v9;
}
