/*
 * XREFs of NtAdjustGroupsToken @ 0x140A46440
 * Callers:
 *     DifNtAdjustGroupsTokenWrapper @ 0x14066A670 (DifNtAdjustGroupsTokenWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140A43238 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     SepAdjustGroups @ 0x140A467D0 (SepAdjustGroups.c)
 */

NTSTATUS __stdcall NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  unsigned int ULongFromUser; // r15d
  PVOID v9; // rbx
  void *v10; // r13
  char PreviousMode; // di
  NTSTATUS result; // eax
  int v13; // esi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v15; // rsi
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  NTSTATUS v19; // r12d
  NTSTATUS v20; // r15d
  signed __int32 v21[8]; // [rsp+0h] [rbp-C8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-A0h]
  void *v23; // [rsp+30h] [rbp-98h]
  _BYTE v24[4]; // [rsp+60h] [rbp-68h] BYREF
  ULONG v25; // [rsp+64h] [rbp-64h] BYREF
  __int64 v26; // [rsp+68h] [rbp-60h] BYREF
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF
  PVOID v28; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+80h] [rbp-48h]
  NTSTATUS v30; // [rsp+84h] [rbp-44h]

  ULongFromUser = 0;
  v29 = 0;
  v9 = 0LL;
  v28 = 0LL;
  v25 = 0;
  LODWORD(v26) = 0;
  v24[0] = 0;
  v10 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v24[1] = PreviousMode;
  if ( !ResetToDefault )
  {
    if ( PreviousMode )
      ULongFromUser = RtlReadULongFromUser(&NewState->GroupCount);
    else
      ULongFromUser = NewState->GroupCount;
    v29 = ULongFromUser;
    result = SeCaptureSidAndAttributesArray(
               (char *)NewState->Groups,
               ULongFromUser,
               PreviousMode,
               0LL,
               0,
               (__int64)HandleInformation,
               (size_t)v23,
               &v28,
               (unsigned int *)&Object);
    if ( result < 0 )
      return result;
    v9 = v28;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(
          TokenHandle,
          PreviousState != 0LL ? 72 : 64,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &Object,
          0LL);
  if ( v13 < 0 )
  {
    if ( v9 )
      SeReleaseLuidAndAttributesArray(v9, PreviousMode);
    return v13;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (PERESOURCE *)Object;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
    _InterlockedOr(v21, 0);
    LOBYTE(v16) = ResetToDefault;
    v19 = SepAdjustGroups(
            (int)v15,
            0,
            v16,
            ULongFromUser,
            (__int64)v9,
            (__int64)PreviousState,
            0LL,
            (__int64)&v25,
            (__int64)&v26,
            (__int64)v24,
            PreviousMode);
    if ( PreviousState )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(ReturnLength, v25);
      else
        *ReturnLength = v25;
    }
    if ( v19 < 0 )
    {
      _InterlockedOr(v21, 0);
      ExReleaseResourceLite(v15[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v15);
      if ( v9 )
        SeReleaseLuidAndAttributesArray(v9, PreviousMode);
      return v19;
    }
    else
    {
      if ( !PreviousState )
      {
LABEL_13:
        LOBYTE(v18) = ResetToDefault;
        LOBYTE(v17) = 1;
        v20 = SepAdjustGroups(
                (int)v15,
                v17,
                v18,
                ULongFromUser,
                (__int64)v9,
                (__int64)PreviousState,
                v10,
                (__int64)&v25,
                (__int64)&v26,
                (__int64)v24,
                PreviousMode);
        v30 = v20;
        if ( PreviousState )
        {
          if ( PreviousMode )
            RtlWriteULongToUser(PreviousState, v26);
          else
            PreviousState->GroupCount = v26;
        }
        if ( v24[0] )
          v15[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
        _InterlockedOr(v21, 0);
        ExReleaseResourceLite(v15[6]);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v15);
        if ( v9 )
          SeReleaseLuidAndAttributesArray(v9, PreviousMode);
        return v20;
      }
      if ( v25 <= BufferLength )
      {
        v10 = (void *)(((unsigned __int64)&PreviousState->Groups[0].Sid + (unsigned int)(16 * v26) + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_13;
      }
      _InterlockedOr(v21, 0);
      ExReleaseResourceLite(v15[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v15);
      if ( v9 )
        SeReleaseLuidAndAttributesArray(v9, PreviousMode);
      return -1073741789;
    }
  }
}
