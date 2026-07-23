/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x1405C3044
 * Callers:
 *     HvlGetEncryptedData @ 0x1405C2D80 (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpGetPageList @ 0x1405C4AC0 (HvlpGetPageList.c)
 *     HvlpGetPageListIterator @ 0x1405C4B78 (HvlpGetPageListIterator.c)
 *     HvlpStartPageListIteration @ 0x1405C4CD0 (HvlpStartPageListIteration.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(
        __int64 a1,
        char *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        _DWORD *a5)
{
  __int64 result; // rax
  volatile unsigned int NextProcessor; // ebx
  __int64 PageListIterator; // rax
  struct _LIST_ENTRY *Blink; // r14
  volatile unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rbp
  struct _LIST_ENTRY *v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  struct _LIST_ENTRY *v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  HIDWORD(v19) = HIDWORD(a1);
  v18 = 0LL;
  LODWORD(v19) = 0;
  *a5 = 0;
  if ( (HvlpRootFlags & 4) == 0 && !VslVsmEnabled )
    return 3221226021LL;
  if ( !LOBYTE(VslpReservedTransferLock.QueueListEntry.Flink) )
  {
    HvlpStartPageListIteration(1LL, BYTE4(VslpReservedTransferLock.Queue) == 0 ? 2 : 0);
    VslpReservedTransferLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)-1LL;
    VslpReservedTransferLock.NextProcessor = 0;
    LOBYTE(VslpReservedTransferLock.QueueListEntry.Flink) = 1;
  }
  NextProcessor = VslpReservedTransferLock.NextProcessor;
  if ( VslpReservedTransferLock.NextProcessor )
  {
    Blink = VslpReservedTransferLock.QueueListEntry.Blink;
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, &v18, &v19) )
    {
      PageListIterator = HvlpGetPageListIterator(1LL);
      *(_QWORD *)(PageListIterator + 8) = 0LL;
      *(_WORD *)PageListIterator = 0;
      *(_WORD *)(PageListIterator + 3) = 0;
      *(_BYTE *)(PageListIterator + 2) = 0;
      LOBYTE(VslpReservedTransferLock.QueueListEntry.Flink) = 0;
      VslpReservedTransferLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)-1LL;
      VslpReservedTransferLock.NextProcessor = 0;
      return 3221226021LL;
    }
    Blink = v18;
    NextProcessor = v19;
  }
  v12 = a3 >> 12;
  v13 = NextProcessor;
  if ( v12 < NextProcessor )
    v13 = v12;
  if ( (_DWORD)v13 )
  {
    v19 = (unsigned int)v13;
    v14 = (_QWORD)Blink << 12;
    v15 = Blink;
    do
    {
      *(_QWORD *)(8 * ((*(_QWORD *)&VslpReservedTransferLock.ThreadFlags2 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v14 & 0xFFFFFFFFFF000LL ^ 0x8000000000000001uLL;
      v16 = __readcr4();
      if ( (v16 & 0x20080) != 0 )
      {
        __writecr4(v16 ^ 0x80);
        __writecr4(v16);
      }
      else
      {
        v17 = __readcr3();
        __writecr3(v17);
      }
      memmove(a2, *(const void **)&VslpReservedTransferLock.ThreadFlags2, 0x1000uLL);
      *a4 = v15;
      a2 += 4096;
      v14 += 4096LL;
      ++a4;
      v15 = (struct _LIST_ENTRY *)((char *)v15 + 1);
      --v19;
    }
    while ( v19 );
  }
  *a5 = (_DWORD)v13 << 12;
  VslpReservedTransferLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)((char *)Blink + v13);
  result = 0LL;
  VslpReservedTransferLock.NextProcessor = NextProcessor - v13;
  return result;
}
