/*
 * XREFs of KeAddSystemServiceTable @ 0x140B49C60
 * Callers:
 *     <none>
 * Callees:
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140B49DCC (PsRegisterSyscallProviderServiceTableMetadata.c)
 */

char __fastcall KeAddSystemServiceTable(
        struct _SINGLE_LIST_ENTRY *a1,
        __int64 a2,
        volatile int a3,
        struct _LIST_ENTRY *a4,
        int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r9d
  struct _SINGLE_LIST_ENTRY *Next; // r11
  int v8; // edx
  __int64 Next_low; // rax
  volatile unsigned int v10; // ebx
  unsigned int v11; // r9d
  int *Object; // r11
  int v13; // edx
  __int64 v14; // rax

  if ( a5 == 1 )
  {
    v10 = 0;
    if ( !(_QWORD)xmmword_1412018E0 && !stru_140FC11F0.Spare18 )
    {
      stru_140FC11F0.Spare18 = (unsigned __int64)a1;
      stru_140FC11F0.ThreadFlags2 = a3;
      stru_140FC11F0.QueueListEntry.Flink = a4;
      PsRegisterSyscallProviderServiceTableMetadata(1LL);
      v11 = (unsigned int)&stru_140FC11F0.Spare18 + LODWORD(stru_140FC11F0.Spare18) + KiTableInformation;
      if ( stru_140FC11F0.ThreadFlags2 )
      {
        Object = (int *)stru_140FC11F0.WaitBlock[3].Object;
        do
        {
          v13 = *Object;
          v14 = *Object++;
          v11 = ++v10 * ((v13 + *(_DWORD *)((v14 >> 4) + stru_140FC11F0.Spare18)) ^ v11);
        }
        while ( v10 < stru_140FC11F0.ThreadFlags2 );
      }
      KiTableInformation += 2 * v11;
      return 1;
    }
  }
  else if ( a5 == 2 )
  {
    v5 = 0;
    if ( !stru_140FC11F0.IoSelfBoostsEntry.Next )
    {
      stru_140FC11F0.IoSelfBoostsEntry.Next = a1;
      *(_DWORD *)&stru_140FC11F0.PriorityFloorCounts[8] = a3;
      *(_QWORD *)&stru_140FC11F0.PriorityFloorCounts[16] = a4;
      v6 = (unsigned int)&stru_140FC11F0.IoSelfBoostsEntry
         + LODWORD(stru_140FC11F0.IoSelfBoostsEntry.Next)
         + KiTableInformation;
      if ( *(_DWORD *)&stru_140FC11F0.PriorityFloorCounts[8] )
      {
        Next = stru_140FC11F0.IoSelfBoostsEntry.Next;
        do
        {
          v8 = (int)Next->Next;
          Next_low = SLODWORD(Next->Next);
          Next = (struct _SINGLE_LIST_ENTRY *)((char *)Next + 4);
          v6 = ++v5 * ((v8 + *(_DWORD *)((char *)&stru_140FC11F0.IoSelfBoostsEntry.Next->Next + (Next_low >> 4))) ^ v6);
        }
        while ( v5 < *(_DWORD *)&stru_140FC11F0.PriorityFloorCounts[8] );
      }
      KiTableInformation += 2 * v6;
      return 1;
    }
  }
  return 0;
}
