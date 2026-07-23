/*
 * XREFs of PspSessionObjectCreate @ 0x140B2F734
 * Callers:
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeInsertSchedulingGroup @ 0x14043D6E0 (KeInsertSchedulingGroup.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     KeGetSchedulingGroupSize @ 0x1404E4608 (KeGetSchedulingGroupSize.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PspSessionObjectCreate()
{
  ULONG v0; // ebx
  ULONG v1; // ebx
  ACL *Pool2; // rax
  char *v3; // rdi
  int Acl; // ebx
  char *v5; // rcx
  unsigned __int64 CycleTime; // rbx
  NTSTATUS v7; // eax
  int v8; // esi
  PRKEVENT v9; // rdi
  struct _KEVENT *v10; // rcx
  __int64 result; // rax
  struct _KSCHEDULING_GROUP *v12; // rax
  void *Src; // [rsp+28h] [rbp-E0h]
  PRKEVENT Event; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[40]; // [rsp+60h] [rbp-A8h] BYREF
  char *v16; // [rsp+88h] [rbp-80h]
  _DWORD v17[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v18; // [rsp+98h] [rbp-70h]
  UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-68h]
  int v20; // [rsp+A8h] [rbp-60h]
  int v21; // [rsp+ACh] [rbp-5Ch]
  _BYTE *v22; // [rsp+B0h] [rbp-58h]
  __int64 v23; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  wchar_t pszDest[128]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v15, 0, sizeof(v15));
  v17[1] = 0;
  v21 = 0;
  v15[8] = 1;
  DestinationString = 0LL;
  Event = 0LL;
  v16 = 0LL;
  v0 = RtlLengthSid(SeAliasAdminsSid);
  v1 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) + 32 + v0;
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
  v3 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Acl = RtlCreateAcl(Pool2, v1, 2u);
  v5 = v3;
  if ( Acl < 0 || (Acl = RtlpAddKnownAce(v3, 2u, 0, 983043, (unsigned __int8 *)SeAliasAdminsSid, 0), v5 = v3, Acl < 0) )
  {
LABEL_15:
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)Acl;
  }
  Acl = RtlpAddKnownAce(v3, 2u, 0, 983043, *(unsigned __int8 **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
  if ( Acl < 0 )
  {
LABEL_14:
    v5 = v3;
    goto LABEL_15;
  }
  if ( *(__int16 *)&v15[10] < 0 )
  {
    Acl = -1073741703;
    goto LABEL_14;
  }
  v16 = v3;
  *(_WORD *)&v15[10] = *(_WORD *)&v15[10] & 0xFFF3 | 4;
  CycleTime = KeGetCurrentThread()->ApcState.Process[1].CycleTime;
  v7 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\KernelObjects\\Session%d", *(unsigned int *)(CycleTime + 8));
  if ( v7 < 0 )
  {
    Acl = v7;
    goto LABEL_14;
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  p_DestinationString = &DestinationString;
  v17[0] = 48;
  v22 = &v15[8];
  v18 = 0LL;
  v20 = 512;
  v23 = 0LL;
  v8 = ObCreateObjectEx(0, MmSessionObjectType, (__int64)v17, 0, (__int64)Src, 40, 0, 0, &Event, 0LL);
  ExFreePoolWithTag(v3, 0);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = Event;
  v10 = Event;
  *(_QWORD *)&Event[1].Header.Lock = CycleTime;
  KeInitializeEvent(v10, NotificationEvent, 0);
  v9[1].Header.WaitListHead.Flink = 0LL;
  if ( PsCpuFairShareEnabled && *(_DWORD *)(CycleTime + 8) )
  {
    KeGetSchedulingGroupSize();
    v12 = (struct _KSCHEDULING_GROUP *)ExAllocatePool2(0x48uLL);
    v9[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
    if ( v12 )
    {
      Event = (PRKEVENT)5;
      KeInsertSchedulingGroup(v12, (_KSCHEDULING_GROUP_POLICY)5LL, 0LL);
      goto LABEL_9;
    }
    ObfDereferenceObjectWithTag(v9, 0x73536D4Du);
    return 3221225626LL;
  }
LABEL_9:
  result = ObInsertObjectEx((char *)v9, 0LL, 1, 0, 0, 0LL, v15);
  v8 = result;
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(CycleTime + 4) |= 4u;
    _InterlockedIncrement((volatile signed __int32 *)(CycleTime + 12));
    *(_QWORD *)(CycleTime + 40) = *(_QWORD *)v15;
    *(_QWORD *)(CycleTime + 32) = v9;
    *(_DWORD *)(CycleTime + 128) = 2;
    *(_DWORD *)(CycleTime + 132) = 1;
    KeInitializeEvent((PRKEVENT)(CycleTime + 136), SynchronizationEvent, 1u);
    return (unsigned int)v8;
  }
  return result;
}
