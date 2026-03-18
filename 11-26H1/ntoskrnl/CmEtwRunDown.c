/*
 * XREFs of CmEtwRunDown @ 0x140AFF0F8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A70518 (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     EtwTraceSiloDcEvent @ 0x1404BB2C4 (EtwTraceSiloDcEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     CmpLogHiveRundownEvent @ 0x1408553C4 (CmpLogHiveRundownEvent.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpConstructName @ 0x1408C53A0 (CmpConstructName.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v6; // r14
  unsigned int v7; // esi
  struct _KTHREAD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 PriorityFloorCounts; // rbx
  char v14; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // ebx
  __int64 *v21; // rsi
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int16 *v27; // rax
  void *v28; // r14
  int v29; // edx
  NTSTATUS v30; // ebx
  __int16 v33; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v34; // [rsp+38h] [rbp-C8h]
  int v35; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 *NextActiveHive; // [rsp+48h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v43; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-40h]
  __int128 v45; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v46; // [rsp+D8h] [rbp-28h]
  __int128 KeyValueInformation; // [rsp+E8h] [rbp-18h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  void **p_KernelShadowStackInitial; // [rsp+128h] [rbp+28h] BYREF
  __int64 v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  int v52; // [rsp+140h] [rbp+40h]
  int v53; // [rsp+144h] [rbp+44h]
  __int16 *v54; // [rsp+148h] [rbp+48h]
  __int64 v55; // [rsp+150h] [rbp+50h]

  v44 = 0LL;
  v35 = 0;
  v43 = 0LL;
  ResultLength = 0;
  v6 = a4;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v7 = a2;
  v33 = 0;
  ValueName = 0LL;
  v34 = a2;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v43);
  if ( !a5 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v50 = 24LL;
    p_KernelShadowStackInitial = (void **)&v45;
    v8 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
    v55 = 2LL;
    v54 = &v33;
    CmpLockHiveListShared(v10, v9, v11, v12);
    do
    {
      v8 = *(struct _KTHREAD **)&v8->Header.Lock;
      PriorityFloorCounts = 0LL;
      NextActiveHive = 0LL;
      if ( v8 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
        break;
      PriorityFloorCounts = (__int64)v8[-2].PriorityFloorCounts;
      NextActiveHive = v8[-2].PriorityFloorCounts;
    }
    while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v8->QuantumTarget) );
    CmpUnlockHiveList();
    v14 = a3;
    if ( PriorityFloorCounts )
    {
      do
      {
        CmpLockRegistryExclusive();
        if ( v6 )
          CmpLogHiveRundownEvent(PriorityFloorCounts, a1, v7);
        if ( v14 )
        {
          v18 = *(unsigned int *)(PriorityFloorCounts + 1656);
          v19 = *(_QWORD *)(PriorityFloorCounts + 1648);
          if ( (_DWORD)v18 )
          {
            v20 = v34;
            v21 = (__int64 *)(v19 + 16);
            v22 = (unsigned int)v18;
            v39 = v18;
            do
            {
              v23 = *v21;
              if ( *v21 )
              {
                do
                {
                  v27 = (unsigned __int16 *)CmpConstructName(v23 - 16, v16);
                  v28 = v27;
                  if ( v27 )
                  {
                    v29 = *v27;
                    v51 = *((_QWORD *)v27 + 1);
                    v52 = v29;
                    v53 = 0;
                    *(_QWORD *)&v46 = v23 - 16;
                    EtwTraceSiloDcEvent((__int64)&p_KernelShadowStackInitial, 3u, a1, v20, 0x919u, 0x501802u);
                    CmpFreeTransientPoolWithTag(v28, 0x624E4D43u);
                  }
                  v23 = *(_QWORD *)(v23 + 8);
                }
                while ( v23 );
                v22 = v39;
              }
              v21 += 3;
              v39 = --v22;
            }
            while ( v22 );
            PriorityFloorCounts = (__int64)NextActiveHive;
            v6 = a4;
            v14 = a3;
          }
          v7 = v34;
        }
        CmpUnlockRegistry(v17);
        NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)PriorityFloorCounts, v24, v25, v26);
        PriorityFloorCounts = (__int64)NextActiveHive;
      }
      while ( NextActiveHive );
    }
    CmpDetachFromRegistryProcess(&ApcState);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Select");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Current");
      v30 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v30 >= 0 )
      {
        v35 = HIDWORD(KeyValueInformation);
        p_KernelShadowStackInitial = (void **)&v35;
        v50 = 4LL;
        EtwTraceSiloDcEvent((__int64)&p_KernelShadowStackInitial, 1u, a1, v7, 0x923u, 0x501802u);
      }
    }
  }
  p_KernelShadowStackInitial = &KiSystemServiceTraceCallbackLock.KernelShadowStackInitial;
  v50 = 88LL;
  EtwTraceSiloDcEvent((__int64)&p_KernelShadowStackInitial, 1u, a1, v7, 0x922u, 0x501802u);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v43);
  return 0LL;
}
