/*
 * XREFs of HvlAddSecurePagesCallbackRoutine @ 0x1405C2774
 * Callers:
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x1405C2720 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x1405C29A0 (HvlAddSecureSkPagesCallbackRoutine.c)
 * Callees:
 *     IoIsPartialDumpRetry @ 0x140503934 (IoIsPartialDumpRetry.c)
 *     HvlpAddCrashdumpAreaPages @ 0x1405C2FD4 (HvlpAddCrashdumpAreaPages.c)
 *     HvlpEndSecurePageListIteration @ 0x1405C49F8 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C4CF4 (HvlpStartSecurePageListIteration.c)
 *     VslGetSecurePageList @ 0x1405C583C (VslGetSecurePageList.c)
 */

char __fastcall HvlAddSecurePagesCallbackRoutine(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  _LIST_ENTRY *p_QueueListEntry; // rax
  __int64 v8; // rdx
  char v9; // bp
  _QWORD *v10; // r9
  char v11; // dl
  int v12; // ebx
  int v13; // ebx
  int v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v15 = a2;
  v16 = 0LL;
  v4 = a1 | 4;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_DWORD *)(a4 + 8) = 0;
  LOBYTE(p_QueueListEntry) = IoIsPartialDumpRetry();
  v9 = (char)p_QueueListEntry;
  if ( *v10 )
  {
    if ( BYTE3(VslpReservedTransferLock.QueueListEntry.Flink) == v4 )
      goto LABEL_6;
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    *(_QWORD *)a4 = 0LL;
  }
  VslpReservedTransferLock.QueueListEntry = 0LL;
  *(_OWORD *)&VslpReservedTransferLock.NextProcessor = 0LL;
  *(_OWORD *)&VslpReservedTransferLock.UserAffinity = 0LL;
  LODWORD(p_QueueListEntry) = HvlpStartSecurePageListIteration(1LL, v4, 0LL, 0LL, 0, &v16);
  if ( (int)p_QueueListEntry < 0 )
    return (char)p_QueueListEntry;
  *(_QWORD *)&VslpReservedTransferLock.UserAffinityPrimaryGroup = v16;
  p_QueueListEntry = &VslpReservedTransferLock.QueueListEntry;
  BYTE3(VslpReservedTransferLock.QueueListEntry.Flink) = v4;
  LOBYTE(VslpReservedTransferLock.QueueListEntry.Flink) = 1;
  *(_QWORD *)a4 = &VslpReservedTransferLock.QueueListEntry;
LABEL_6:
  if ( LOBYTE(VslpReservedTransferLock.QueueListEntry.Flink) )
  {
    if ( BYTE1(VslpReservedTransferLock.QueueListEntry.Flink)
      || (LOBYTE(v8) = 1, LOBYTE(p_QueueListEntry) = HvlpAddCrashdumpAreaPages(a4, v8), !(_BYTE)p_QueueListEntry) )
    {
      if ( BYTE2(VslpReservedTransferLock.QueueListEntry.Flink)
        || (LOBYTE(p_QueueListEntry) = HvlpAddCrashdumpAreaPages(a4, 0LL), !(_BYTE)p_QueueListEntry) )
      {
        if ( !v9 || a1 == 2 || a1 == 8 || (a1 == 1 || a1 == 16) && *(_DWORD *)(a4 + 12) == 395 )
        {
          do
          {
            while ( !LODWORD(VslpReservedTransferLock.UserAffinity) )
            {
              LOBYTE(v15) = 0;
              if ( (int)VslGetSecurePageList(0LL, 0LL, 0LL, &v15) < 0 )
                goto LABEL_27;
              LODWORD(VslpReservedTransferLock.UserAffinity) = *(unsigned __int16 *)(*(_QWORD *)&VslpReservedTransferLock.UserAffinityPrimaryGroup
                                                                                   + 8LL);
              VslpReservedTransferLock.Process = (_KPROCESS *)(*(_QWORD *)&VslpReservedTransferLock.UserAffinityPrimaryGroup
                                                             + 16LL);
            }
            *(_QWORD *)(a4 + 24) = (*(_QWORD *)VslpReservedTransferLock.Process >> 40) + 1LL;
            LOBYTE(p_QueueListEntry) = -1;
            *(_QWORD *)(a4 + 16) = *(_QWORD *)VslpReservedTransferLock.Process & 0xFFFFFFFFFFLL;
            VslpReservedTransferLock.Process = (_KPROCESS *)((char *)VslpReservedTransferLock.Process + 8);
            --LODWORD(VslpReservedTransferLock.UserAffinity);
          }
          while ( !*(_QWORD *)(a4 + 24) );
          *(_DWORD *)(a4 + 8) = -2147483646;
          v12 = a1 - 1;
          if ( v12 && ((v13 = v12 - 1) == 0 || v13 == 6) )
            *(_DWORD *)(a4 + 8) = -2147483614;
          else
            *(_DWORD *)(a4 + 8) = -2147483630;
        }
        else
        {
LABEL_27:
          LOBYTE(p_QueueListEntry) = HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
          LOBYTE(VslpReservedTransferLock.QueueListEntry.Flink) = 0;
        }
      }
      else
      {
        BYTE2(VslpReservedTransferLock.QueueListEntry.Flink) = 1;
      }
    }
    else
    {
      BYTE1(VslpReservedTransferLock.QueueListEntry.Flink) = v11;
    }
  }
  return (char)p_QueueListEntry;
}
