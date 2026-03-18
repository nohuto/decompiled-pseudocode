/*
 * XREFs of NtCreateMutant @ 0x140A9B880
 * Callers:
 *     DifNtCreateMutantWrapper @ 0x140671F20 (DifNtCreateMutantWrapper.c)
 * Callees:
 *     KeInitializeMutantEx @ 0x1404778E4 (KeInitializeMutantEx.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateMutant(_QWORD *a1, unsigned int a2, __int64 a3, char a4)
{
  char PreviousMode; // si
  __int64 v9; // rdx
  int inserted; // ebx
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 ULong64FromUser; // rax
  __int64 v14; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v15; // [rsp+58h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  inserted = ObCreateObjectEx(PreviousMode, ExMutantObjectType, a3, PreviousMode, v14, 56, 0, 0, &v15, 0LL);
  if ( inserted >= 0 )
  {
    LOBYTE(v9) = a4;
    KeInitializeMutantEx(v15, v9, *(_DWORD *)&WheapConfigTableLock.SchedulerApcFill5[80] != 0, v11);
    inserted = ObInsertObjectEx((char *)v15, 0LL, a2, 0, 0, 0LL, &v16);
    LODWORD(v15) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, v16);
      else
        *a1 = v16;
    }
  }
  return (unsigned int)inserted;
}
