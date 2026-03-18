/*
 * XREFs of EtwpSetProviderTraitsUm @ 0x14093D410
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     EtwpEventWriteRegistrationStatus @ 0x140825610 (EtwpEventWriteRegistrationStatus.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     EtwpSetProviderTraitsCommon @ 0x14093D5E4 (EtwpSetProviderTraitsCommon.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, int a3)
{
  PVOID v6; // rsi
  NTSTATUS v7; // ebx
  __int16 v8; // ax
  __int64 Pool2; // rax
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( !*(_QWORD *)(a1 + 8) || !*(_WORD *)(a1 + 16) )
      goto LABEL_17;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(*(HANDLE *)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    v6 = Object;
    if ( v7 < 0 )
      goto LABEL_11;
    v8 = *((_WORD *)Object + 49);
    if ( (v8 & 8) == 0 && (v8 & 2) != 0 )
    {
      if ( *((_QWORD *)Object + 14) )
      {
        v7 = -1073741823;
      }
      else
      {
        ProbeForRead(*(volatile void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16), 1u);
        Pool2 = ExAllocatePool2(0x100uLL);
        v10 = Pool2;
        if ( Pool2 )
        {
          RtlCopyFromUser((void *)(Pool2 + 28), *(void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16));
          v7 = EtwpSetProviderTraitsCommon(
                 a1,
                 a2,
                 a3,
                 (int)v6,
                 v10,
                 *(unsigned __int16 *)(a1 + 16),
                 &unk_140F03540,
                 (__int64)&EtwpSecurityLock.SchedulerApc.NormalContext);
        }
        else
        {
          v7 = -1073741670;
        }
      }
    }
    else
    {
LABEL_17:
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = -1073741637;
  }
LABEL_11:
  if ( v6 )
  {
    if ( v7 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    {
      LODWORD(v15) = v7;
      EtwpEventWriteRegistrationStatus(v13, v12, v14, (__int64)v6, v15);
    }
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v7;
}
