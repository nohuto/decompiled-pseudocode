/*
 * XREFs of CmEtwRunDown @ 0x140B07438
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     EtwTraceSiloDcEvent @ 0x1404B4AA4 (EtwTraceSiloDcEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     CmpLogHiveRundownEvent @ 0x14085B75C (CmpLogHiveRundownEvent.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v6; // di
  char v7; // si
  struct _EX_RUNDOWN_REF *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 *v14; // rsi
  __int64 v15; // r15
  __int64 i; // rdi
  unsigned __int16 *v17; // rax
  void *v18; // r14
  int v19; // edx
  NTSTATUS v21; // ebx
  __int16 v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 *NextActiveHive; // [rsp+48h] [rbp-B8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING ValueName; // [rsp+90h] [rbp-70h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int128 v34; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v35; // [rsp+C8h] [rbp-38h]
  __int128 KeyValueInformation; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  void **p_KernelShadowStackInitial; // [rsp+118h] [rbp+18h] BYREF
  __int64 v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int v41; // [rsp+130h] [rbp+30h]
  int v42; // [rsp+134h] [rbp+34h]
  __int16 *v43; // [rsp+138h] [rbp+38h]
  __int64 v44; // [rsp+140h] [rbp+40h]

  v33 = 0LL;
  v25 = 0;
  v32 = 0LL;
  ResultLength = 0;
  v6 = a4;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v7 = a3;
  v24 = 0;
  ValueName = 0LL;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v32);
  if ( !a5 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v39 = 24LL;
    p_KernelShadowStackInitial = (void **)&v34;
    v9 = 0LL;
    v44 = 2LL;
    v43 = &v24;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v9);
      v10 = (__int64)NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v6 )
        CmpLogHiveRundownEvent(v10, a1, a2);
      if ( v7 )
      {
        v13 = *(_DWORD *)(v10 + 1656);
        if ( v13 )
        {
          v14 = (__int64 *)(*(_QWORD *)(v10 + 1648) + 16LL);
          v15 = v13;
          do
          {
            for ( i = *v14; i; i = *(_QWORD *)(i + 8) )
            {
              v17 = (unsigned __int16 *)CmpConstructName(i - 16, v11);
              v18 = v17;
              if ( v17 )
              {
                v19 = *v17;
                v40 = *((_QWORD *)v17 + 1);
                v41 = v19;
                v42 = 0;
                *(_QWORD *)&v35 = i - 16;
                EtwTraceSiloDcEvent((__int64)&p_KernelShadowStackInitial, 3u, a1, a2, 0x919u, 0x501802u);
                CmpFreeTransientPoolWithTag(v18, 0x624E4D43u);
              }
            }
            v14 += 3;
            --v15;
          }
          while ( v15 );
          v10 = (__int64)NextActiveHive;
          v6 = a4;
        }
        v7 = a3;
      }
      CmpUnlockRegistry(v12);
      v9 = (struct _EX_RUNDOWN_REF *)v10;
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
      v21 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v21 >= 0 )
      {
        v25 = HIDWORD(KeyValueInformation);
        p_KernelShadowStackInitial = (void **)&v25;
        v39 = 4LL;
        EtwTraceSiloDcEvent((__int64)&p_KernelShadowStackInitial, 1u, a1, a2, 0x923u, 0x501802u);
      }
    }
  }
  p_KernelShadowStackInitial = &KiSystemServiceTraceCallbackLock.KernelShadowStackInitial;
  v39 = 88LL;
  EtwTraceSiloDcEvent((__int64)&p_KernelShadowStackInitial, 1u, a1, a2, 0x922u, 0x501802u);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v32);
  return 0LL;
}
