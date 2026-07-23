/*
 * XREFs of IopDumpCallRemovePagesCallbacks @ 0x1405CB638
 * Callers:
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     IoSetBugCheckProgressFlag @ 0x1405350D0 (IoSetBugCheckProgressFlag.c)
 *     IopLogCallbackError @ 0x1405CC374 (IopLogCallbackError.c)
 *     IopRemovePageDumpRange @ 0x1405CC57C (IopRemovePageDumpRange.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405E9B24 (KeValidateBugCheckCallbackRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IopDumpCallRemovePagesCallbacks(int a1)
{
  _UNKNOWN **v1; // rax
  struct _LIST_ENTRY *Blink; // rdi
  int v4; // esi
  int v5; // eax
  __int128 v7; // [rsp+40h] [rbp-58h] BYREF
  __int128 v8; // [rsp+50h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v10; // [rsp+A8h] [rbp+10h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+B0h] [rbp+18h] BYREF
  struct _LIST_ENTRY *v12; // [rsp+B8h] [rbp+20h]

  v1 = &retaddr;
  v7 = 0LL;
  v8 = 0LL;
  Blink = KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink;
  p_Blink = &KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink;
  while ( Blink != (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink )
  {
    v12 = Blink;
    LOBYTE(v1) = KeValidateBugCheckCallbackRecord(Blink, 6LL, &p_Blink);
    if ( (_BYTE)v1 )
    {
      *(_QWORD *)&v7 = 0LL;
      HIDWORD(v7) = a1;
      v4 = 0;
      do
      {
        v8 = 0uLL;
        DWORD2(v7) = 0;
        v10 = 0;
        guard_dispatch_icall_no_overrides(6LL, Blink);
        if ( v4 >= 0 )
        {
          if ( *((_QWORD *)&v8 + 1) )
          {
            v5 = IopRemovePageDumpRange(&v7, &v10);
            v4 = v5;
            if ( v5 < 0 )
              IopLogCallbackError(17170433LL, (unsigned int)v5, Blink);
          }
        }
      }
      while ( v10 );
      if ( v4 < 0 )
      {
        BYTE5(Blink[2].Blink) = 4;
        LOBYTE(v1) = 4;
      }
      else
      {
        LOBYTE(v1) = 3;
      }
      BYTE4(Blink[2].Blink) = (_BYTE)v1;
    }
    else if ( !p_Blink )
    {
      return (char)v1;
    }
    Blink = Blink->Flink;
  }
  return (char)v1;
}
