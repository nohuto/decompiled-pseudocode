/*
 * XREFs of NtAdjustGroupsToken @ 0x1409E0F30
 * Callers:
 *     DifNtAdjustGroupsTokenWrapper @ 0x14066E250 (DifNtAdjustGroupsTokenWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepAdjustGroups @ 0x1409E12C0 (SepAdjustGroups.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1409E21E8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 */

NTSTATUS __stdcall NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  PTOKEN_GROUPS v6; // rsi
  unsigned int ULongFromUser; // r15d
  __int64 v9; // rbx
  void *v10; // r13
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  __int64 v13; // rdx
  int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v16; // rsi
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  NTSTATUS v20; // r12d
  NTSTATUS v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  signed __int32 v25[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-90h]
  __int64 p_Object; // [rsp+40h] [rbp-88h]
  _BYTE v28[4]; // [rsp+60h] [rbp-68h] BYREF
  ULONG v29; // [rsp+64h] [rbp-64h] BYREF
  __int64 v30; // [rsp+68h] [rbp-60h] BYREF
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF
  __int64 v32; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v33; // [rsp+80h] [rbp-48h]
  NTSTATUS v34; // [rsp+84h] [rbp-44h]

  v6 = NewState;
  ULongFromUser = 0;
  v33 = 0;
  v9 = 0LL;
  v32 = 0LL;
  v29 = 0;
  LODWORD(v30) = 0;
  v28[0] = 0;
  v10 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28[1] = PreviousMode;
  if ( !ResetToDefault )
  {
    if ( PreviousMode )
      ULongFromUser = RtlReadULongFromUser(&NewState->GroupCount);
    else
      ULongFromUser = NewState->GroupCount;
    v33 = ULongFromUser;
    p_Object = (__int64)&Object;
    v26 = (__int64)&v32;
    LOBYTE(NewState) = PreviousMode;
    result = SeCaptureSidAndAttributesArray(v6->Groups, ULongFromUser, NewState, 0LL, 0);
    if ( result < 0 )
      return result;
    v9 = v32;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(
          TokenHandle,
          PreviousState != 0LL ? 72 : 64,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &Object,
          0LL);
  if ( v14 < 0 )
  {
    if ( v9 )
    {
      LOBYTE(v13) = PreviousMode;
      SeReleaseLuidAndAttributesArray(v9, v13);
    }
    return v14;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = (PERESOURCE *)Object;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
    _InterlockedOr(v25, 0);
    LOBYTE(v17) = ResetToDefault;
    v20 = SepAdjustGroups(
            (int)v16,
            0,
            v17,
            ULongFromUser,
            v9,
            (__int64)PreviousState,
            0LL,
            (__int64)&v29,
            (__int64)&v30,
            (__int64)v28,
            PreviousMode);
    if ( PreviousState )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(ReturnLength, v29);
      else
        *ReturnLength = v29;
    }
    if ( v20 < 0 )
    {
      _InterlockedOr(v25, 0);
      ExReleaseResourceLite(v16[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v16);
      if ( v9 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v9, v23);
      }
      return v20;
    }
    else
    {
      if ( !PreviousState )
      {
LABEL_13:
        LOBYTE(v19) = ResetToDefault;
        LOBYTE(v18) = 1;
        v21 = SepAdjustGroups(
                (int)v16,
                v18,
                v19,
                ULongFromUser,
                v9,
                (__int64)PreviousState,
                v10,
                (__int64)&v29,
                (__int64)&v30,
                (__int64)v28,
                PreviousMode);
        v34 = v21;
        if ( PreviousState )
        {
          if ( PreviousMode )
            RtlWriteULongToUser(PreviousState, v30);
          else
            PreviousState->GroupCount = v30;
        }
        if ( v28[0] )
          v16[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
        _InterlockedOr(v25, 0);
        ExReleaseResourceLite(v16[6]);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v16);
        if ( v9 )
        {
          LOBYTE(v22) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v9, v22);
        }
        return v21;
      }
      if ( v29 <= BufferLength )
      {
        v10 = (void *)(((unsigned __int64)&PreviousState->Groups[0].Sid + (unsigned int)(16 * v30) + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_13;
      }
      _InterlockedOr(v25, 0);
      ExReleaseResourceLite(v16[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v16);
      if ( v9 )
      {
        LOBYTE(v24) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v9, v24);
      }
      return -1073741789;
    }
  }
}
