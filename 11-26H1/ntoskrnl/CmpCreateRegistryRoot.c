/*
 * XREFs of CmpCreateRegistryRoot @ 0x140CF0AAC
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     ObInsertObject @ 0x140906AE0 (ObInsertObject.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     EnlistKeyBodyWithKCB @ 0x140A4C9C0 (EnlistKeyBodyWithKCB.c)
 *     CmpTryToLockKcbExclusive @ 0x140A6C7B0 (CmpTryToLockKcbExclusive.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B50A7C (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpCreateRootNode @ 0x140CF0C94 (CmpCreateRootNode.c)
 */

__int64 __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  int inserted; // edi
  void *v3; // rbx
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  _QWORD *v8; // rdi
  ULONG_PTR v9; // rbx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v12[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh]
  unsigned __int64 *Spare35; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  void *v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  PVOID v19; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp+7Fh] BYREF

  Object = 0LL;
  v12[1] = 0;
  v16 = 0;
  BugCheckParameter2 = 0LL;
  LODWORD(v19) = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  inserted = CmpCreateRootNode(a1, a2, &v19);
  if ( inserted >= 0 )
  {
    v3 = (void *)CmpHiveRootSecurityDescriptor();
    v12[0] = 48;
    v13 = 0LL;
    Spare35 = PspSiloMonitorLock.Spare35;
    v15 = 576;
    v17 = v3;
    v18 = 0LL;
    inserted = ObCreateObject(0, CmKeyObjectType, (__int64)v12, 0, 0, 112, 0, 0, &Object);
    ExFreePoolWithTag(v3, 0);
    if ( inserted >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"REGISTRY");
      v4 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
      inserted = CmpCreateKeyControlBlock(
                   CmpMasterHive,
                   (int)v19,
                   0LL,
                   0LL,
                   0,
                   &DestinationString.Length,
                   v4,
                   0,
                   &BugCheckParameter2);
      if ( inserted >= 0 )
      {
        v8 = Object;
        v9 = BugCheckParameter2;
        *(_DWORD *)Object = 1803104306;
        v8[1] = v9;
        v8[2] = 0LL;
        v8[3] = KeGetCurrentThread()[1].CycleTime;
        *((_DWORD *)v8 + 12) = 0;
        v8[10] = v8 + 9;
        v8[9] = v8 + 9;
        v8[7] = 0LL;
        v8[8] = 0LL;
        CmpTryToLockKcbExclusive(v9, v5, v6, v7);
        EnlistKeyBodyWithKCB((signed __int64)v8, 2);
        CmpUnlockKcb(v9);
        inserted = ObInsertObject(v8, 0LL, 0, 0, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          v19 = 0LL;
          inserted = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v19, 0LL);
          PspSiloMonitorLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v19;
          if ( inserted >= 0 )
            return 0;
          else
            ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return (unsigned int)inserted;
}
