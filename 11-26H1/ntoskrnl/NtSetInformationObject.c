/*
 * XREFs of NtSetInformationObject @ 0x1409BA9F0
 * Callers:
 *     DifNtSetInformationObjectWrapper @ 0x14068FD00 (DifNtSetInformationObjectWrapper.c)
 * Callees:
 *     PsGetSessionObjectById @ 0x140216024 (PsGetSessionObjectById.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsGetCurrentProcessSessionId @ 0x1404261F0 (PsGetCurrentProcessSessionId.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ObpEnableObjectRefTrace @ 0x1407C7B14 (ObpEnableObjectRefTrace.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObSetHandleAttributes @ 0x1409BAAF0 (ObSetHandleAttributes.c)
 *     ObpLockDirectoryExclusive @ 0x1409DF1C8 (ObpLockDirectoryExclusive.c)
 *     ObpUnlockDirectory @ 0x1409DF250 (ObpUnlockDirectory.c)
 */

NTSTATUS __cdecl NtSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  NTSTATUS v6; // edi
  __int32 v7; // edx
  char v8; // bl
  __int64 v9; // r8
  __int32 v11; // edx
  __int32 v12; // edx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  PVOID v17; // rcx
  KPROCESSOR_MODE v18; // bl
  void *SessionObjectById; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  PVOID v22; // rbx
  KPROCESSOR_MODE v23; // bl
  __int64 v24; // r8
  __int64 v25; // r9
  __int16 UShortFromUser; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-28h] BYREF
  __int128 v29; // [rsp+48h] [rbp-20h] BYREF
  __int64 v30; // [rsp+58h] [rbp-10h]

  UShortFromUser = 0;
  v6 = -1073741821;
  v7 = ObjectInformationClass - 4;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          Object = 0LL;
          v6 = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, &Object, 0LL);
          if ( v6 >= 0 )
          {
            v6 = ObpEnableObjectRefTrace((__int64)Object, v14, v15, v16);
            v17 = Object;
LABEL_29:
            ObfDereferenceObject(v17);
          }
        }
        return v6;
      }
      v18 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v18) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, v18, &Object, &HandleInformation);
        if ( v6 < 0 )
          return v6;
        PsGetCurrentProcessSessionId();
        SessionObjectById = PsGetSessionObjectById();
        v22 = Object;
        if ( !SessionObjectById )
        {
          v6 = -1073740715;
LABEL_28:
          v17 = v22;
          goto LABEL_29;
        }
        v29 = 0LL;
        v30 = 0LL;
        ObpLockDirectoryExclusive(&v29, Object, v20, v21);
        if ( *((_QWORD *)v22 + 41) )
        {
          v6 = -1073741790;
          ObfDereferenceObject(SessionObjectById);
        }
        else
        {
          *((_QWORD *)v22 + 41) = SessionObjectById;
        }
LABEL_27:
        ObpUnlockDirectory(&v29);
        goto LABEL_28;
      }
    }
    else
    {
      v23 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v23) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, v23, &Object, &HandleInformation);
        if ( v6 < 0 )
          return v6;
        v29 = 0LL;
        v30 = 0LL;
        v22 = Object;
        ObpLockDirectoryExclusive(&v29, Object, v24, v25);
        *((_DWORD *)v22 + 85) = PsGetCurrentProcessSessionId();
        goto LABEL_27;
      }
    }
    return -1073741727;
  }
  if ( ObjectInformationLength == 2 )
  {
    v8 = KeGetCurrentThread()->PreviousMode;
    if ( v8 )
    {
      ProbeForRead(ObjectInformation, 2uLL, 1u);
      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)ObjectInformation);
    }
    else
    {
      RtlCopyVolatileMemory(&UShortFromUser, ObjectInformation, 2uLL);
    }
    LOBYTE(v9) = v8;
    return ObSetHandleAttributes(Handle, &UShortFromUser, v9);
  }
  return -1073741820;
}
