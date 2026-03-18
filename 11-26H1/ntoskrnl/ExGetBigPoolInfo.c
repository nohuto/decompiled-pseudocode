/*
 * XREFs of ExGetBigPoolInfo @ 0x1403460C8
 * Callers:
 *     EtwpPoolRunDown @ 0x14082F9B8 (EtwpPoolRunDown.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExAllocateHeapPages @ 0x140346060 (ExAllocateHeapPages.c)
 *     ExFreeHeapPages @ 0x140346358 (ExFreeHeapPages.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall ExGetBigPoolInfo(int a1, unsigned int *a2, unsigned int a3, unsigned int *a4, char a5)
{
  char *HeapPages; // rbx
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  _QWORD *v9; // r12
  KIRQL v10; // al
  KIRQL v11; // si
  void *SListFaultAddress; // rdi
  __int64 v13; // rdi
  char *v14; // rsi
  char *v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int *v19; // rcx
  _QWORD *v20; // rcx
  __int64 v22; // rcx
  void *v24; // [rsp+A8h] [rbp+10h]
  char *v25; // [rsp+A8h] [rbp+10h]

  HeapPages = 0LL;
  v7 = 0;
  v24 = 0LL;
  v8 = 8;
  v9 = a2 + 2;
  if ( a3 )
  {
    if ( a5 )
      RtlWriteULongToUser(a2, 0LL);
    else
      *a2 = 0;
  }
  while ( 1 )
  {
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Flink + 1);
    v11 = v10;
    SListFaultAddress = stru_140EFEF90.SListFaultAddress;
    if ( !stru_140EFEF90.StackLimit )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Flink + 1, v10);
      if ( HeapPages )
        ExFreeHeapPages((ULONG_PTR)HeapPages);
      *a4 = 0;
      return 0LL;
    }
    if ( HeapPages && v24 >= stru_140EFEF90.SListFaultAddress )
      break;
    v24 = stru_140EFEF90.SListFaultAddress;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Flink + 1, v10);
    if ( HeapPages )
      ExFreeHeapPages((ULONG_PTR)HeapPages);
    HeapPages = (char *)ExAllocateHeapPages(v22, 32LL * (_QWORD)SListFaultAddress);
    if ( !HeapPages )
      return 3221225626LL;
  }
  v13 = 32 * (__int64)stru_140EFEF90.SListFaultAddress;
  memmove(HeapPages, stru_140EFEF90.StackLimit, 32 * (__int64)stru_140EFEF90.SListFaultAddress);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Flink + 1, v11);
  v14 = HeapPages;
  v15 = &HeapPages[v13];
  v25 = &HeapPages[v13];
  v16 = 0;
  while ( v14 < v15 )
  {
    if ( (*(_QWORD *)v14 & 1) == 0 )
    {
      if ( a3 )
        ++v16;
      v8 += 24;
      if ( v8 < 0x18 )
      {
        v7 = -1073741675;
        break;
      }
      if ( v8 <= a3 )
      {
        if ( a3 )
        {
          v17 = 0LL;
          if ( !a1 )
            v17 = *(_QWORD *)v14;
          if ( (*((_DWORD *)v14 + 3) & 0x10000) == 0 )
            v17 |= 1uLL;
          if ( a5 )
            RtlWriteULong64ToUser(v9, v17);
          else
            *v9 = v17;
          v18 = *((_DWORD *)v14 + 2);
          v19 = (unsigned int *)(v9 + 2);
          if ( a5 )
            RtlWriteULongToUser(v19, v18);
          else
            *v19 = v18;
          v20 = v9 + 1;
          if ( a5 )
            RtlWriteULong64ToUser(v20, *((_QWORD *)v14 + 2));
          else
            *v20 = *((_QWORD *)v14 + 2);
          v9 += 3;
        }
      }
      else
      {
        v7 = -1073741820;
      }
    }
    v14 += 32;
    v15 = v25;
  }
  if ( a5 )
    RtlWriteULongToUser(a2, v16);
  else
    *a2 = v16;
  ExFreeHeapPages((ULONG_PTR)HeapPages);
  *a4 = v8;
  return v7;
}
