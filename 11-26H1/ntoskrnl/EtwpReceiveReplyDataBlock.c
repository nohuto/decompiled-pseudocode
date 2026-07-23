/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x140B0F318
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpUnreferenceDataBlock @ 0x140914C04 (EtwpUnreferenceDataBlock.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  LARGE_INTEGER v5; // rax
  void *v7; // rcx
  NTSTATUS v8; // ebx
  PLIST_ENTRY v10; // rbp
  struct _LIST_ENTRY *Flink; // rcx
  PLIST_ENTRY v12; // rdi
  struct _LIST_ENTRY *v13; // rsi
  unsigned int Flink_high; // eax
  PLIST_ENTRY EntryArray; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  v5.QuadPart = EtwpOneMs * a1[1];
  v7 = (void *)*a1;
  Timeout = v5;
  EntryArray = 0LL;
  v8 = ObReferenceObjectByHandle(v7, 4u, EtwpRegistrationObjectType, 1, (PVOID *)&EntryArray, 0LL);
  if ( v8 >= 0 )
  {
    v10 = EntryArray;
    if ( (BYTE2(EntryArray[6].Flink) & 4) != 0 )
    {
      Flink = EntryArray[3].Flink;
      EntryArray = 0LL;
      KeRemoveQueueEx((PKQUEUE)Flink, 1, 0, &Timeout, &EntryArray, 1u);
      v12 = EntryArray;
      if ( EntryArray == (PLIST_ENTRY)258 || EntryArray == (PLIST_ENTRY)192 )
      {
        v8 = (int)EntryArray;
      }
      else
      {
        v13 = EntryArray[1].Flink;
        Flink_high = HIDWORD(v13->Flink);
        if ( Flink_high > a2 )
        {
          v8 = -1073741789;
        }
        else
        {
          memmove(a1, EntryArray[1].Flink, Flink_high);
          v8 = 0;
        }
        *a3 = HIDWORD(v13->Flink);
        EtwpUnreferenceDataBlock((volatile signed __int32 *)v13);
        ExFreePoolWithTag(v12, 0);
      }
    }
    else
    {
      v8 = -1073741816;
    }
    ObfDereferenceObject(v10);
  }
  return (unsigned int)v8;
}
