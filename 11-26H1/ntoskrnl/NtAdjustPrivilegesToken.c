/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1409E1580
 * Callers:
 *     DifNtAdjustPrivilegesTokenWrapper @ 0x14066E400 (DifNtAdjustPrivilegesTokenWrapper.c)
 *     RtlpSysVolTakeOwnership @ 0x14080BCAC (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepAdjustPrivileges @ 0x1409E1914 (SepAdjustPrivileges.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1409E2108 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1409E21E8 (SeReleaseLuidAndAttributesArray.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  int ULongFromUser; // r15d
  __int64 v11; // rdi
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  PTOKEN_PRIVILEGES v14; // rsi
  __int64 v15; // rdx
  int v16; // r14d
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v18; // r14
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  NTSTATUS v22; // r12d
  int v23; // r15d
  LUID_AND_ATTRIBUTES *Privileges; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  signed __int32 v27[8]; // [rsp+0h] [rbp-A8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-88h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+30h] [rbp-78h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  __int64 v32; // [rsp+50h] [rbp-58h] BYREF
  ULONG v33; // [rsp+58h] [rbp-50h] BYREF
  int v34; // [rsp+5Ch] [rbp-4Ch]
  NTSTATUS v35; // [rsp+60h] [rbp-48h]
  PVOID v36; // [rsp+68h] [rbp-40h] BYREF
  __int64 v37; // [rsp+70h] [rbp-38h] BYREF
  char v38; // [rsp+B8h] [rbp+10h] BYREF

  ULongFromUser = 0;
  v34 = 0;
  v11 = 0LL;
  v37 = 0LL;
  HIDWORD(v32) = 0;
  v33 = 0;
  v38 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v32) = PreviousMode;
  if ( !DisableAllPrivileges )
  {
    if ( PreviousMode )
      ULongFromUser = RtlReadULongFromUser(&NewState->PrivilegeCount);
    else
      ULongFromUser = NewState->PrivilegeCount;
    v34 = ULongFromUser;
    result = SeCaptureLuidAndAttributesArray(
               NewState->Privileges,
               (int)Object,
               (int)HandleInformation,
               v30,
               (__int64)&v37,
               (__int64)&v36);
    v35 = result;
    if ( result < 0 )
      return result;
    v11 = v37;
  }
  v36 = 0LL;
  v14 = PreviousState;
  v16 = ObReferenceObjectByHandle(
          TokenHandle,
          PreviousState != 0LL ? 40 : 32,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &v36,
          0LL);
  if ( v16 < 0 )
  {
    if ( v11 )
    {
      LOBYTE(v15) = PreviousMode;
      SeReleaseLuidAndAttributesArray(v11, v15);
    }
    return v16;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v18 = (PERESOURCE *)v36;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v36 + 6), 1u);
    _InterlockedOr(v27, 0);
    LOBYTE(v31) = PreviousMode;
    LOBYTE(v19) = DisableAllPrivileges;
    SepAdjustPrivileges(
      (_DWORD)v18,
      0,
      v19,
      ULongFromUser,
      v11,
      (__int64)v14,
      (__int64)&v32 + 4,
      (__int64)&v33,
      (__int64)&v38,
      v31,
      v32);
    if ( !v14 )
      goto LABEL_10;
    if ( PreviousMode )
      RtlWriteULongToUser(ReturnLength, SHIDWORD(v32));
    else
      *ReturnLength = HIDWORD(v32);
    if ( HIDWORD(v32) > BufferLength )
    {
      _InterlockedOr(v27, 0);
      ExReleaseResourceLite(v18[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v18);
      if ( v11 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v11, v26);
      }
      return -1073741789;
    }
    else
    {
LABEL_10:
      LOBYTE(v31) = PreviousMode;
      LOBYTE(v21) = DisableAllPrivileges;
      LOBYTE(v20) = 1;
      v22 = SepAdjustPrivileges(
              (_DWORD)v18,
              v20,
              v21,
              ULongFromUser,
              v11,
              (__int64)v14,
              (__int64)&v32 + 4,
              (__int64)&v33,
              (__int64)&v38,
              v31);
      v35 = v22;
      if ( v14 )
      {
        v23 = v33;
        if ( PreviousMode )
          RtlWriteULongToUser(v14, v33);
        else
          v14->PrivilegeCount = v33;
        if ( !v23 )
        {
          Privileges = v14->Privileges;
          if ( PreviousMode )
            RtlSetUserMemory(Privileges, 0, 0xCuLL);
          else
            RtlSetVolatileMemory(Privileges, 0, 0xCuLL);
        }
      }
      if ( v38 )
        v18[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
      _InterlockedOr(v27, 0);
      ExReleaseResourceLite(v18[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v18);
      if ( v11 )
      {
        LOBYTE(v25) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v11, v25);
      }
      return v22;
    }
  }
}
