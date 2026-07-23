/*
 * XREFs of ObRegisterCallbacks @ 0x140A676A0
 * Callers:
 *     <none>
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14050DCC0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ObpLockObjectTypeExclusive @ 0x1408FFE00 (ObpLockObjectTypeExclusive.c)
 *     ObpInsertCallbackByAltitude @ 0x140A678A4 (ObpInsertCallbackByAltitude.c)
 *     ObpUnlockObjectType @ 0x140A67A10 (ObpUnlockObjectType.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ObRegisterCallbacks(POB_CALLBACK_REGISTRATION CallbackRegistration, PVOID *RegistrationHandle)
{
  unsigned int v2; // ebx
  NTSTATUS inserted; // esi
  int OperationRegistrationCount; // eax
  int v7; // ebp
  __int64 Pool2; // rax
  _WORD *v9; // rdi
  unsigned int Length; // edx
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  unsigned int i; // r15d
  OB_OPERATION_REGISTRATION *OperationRegistration; // rbp
  __int64 v18; // rsi
  __int64 PreOperation; // rcx
  __int16 v20; // ax
  __int64 PostOperation; // rcx
  unsigned __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rbp
  _QWORD *v26; // r14
  __int64 v27; // rcx
  _QWORD *v28; // rax

  v2 = 0;
  inserted = 0;
  if ( (CallbackRegistration->Version & 0xFF00) != 0x100 )
    return -1073741811;
  OperationRegistrationCount = CallbackRegistration->OperationRegistrationCount;
  if ( !(_WORD)OperationRegistrationCount )
    return -1073741811;
  v7 = (OperationRegistrationCount << 6) + CallbackRegistration->Altitude.Length + 32;
  Pool2 = ExAllocatePool2(0x100uLL);
  v9 = (_WORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_WORD *)Pool2 = 256;
  *(_QWORD *)(Pool2 + 8) = CallbackRegistration->RegistrationContext;
  Length = CallbackRegistration->Altitude.Length;
  *(_WORD *)(Pool2 + 18) = Length;
  *(_WORD *)(Pool2 + 16) = Length;
  v12 = (void *)(Pool2 + v7 - Length);
  *(_QWORD *)(Pool2 + 24) = v12;
  memmove(v12, CallbackRegistration->Altitude.Buffer, Length);
  for ( i = 0; i < CallbackRegistration->OperationRegistrationCount; ++i )
  {
    OperationRegistration = CallbackRegistration->OperationRegistration;
    v18 = i;
    if ( !OperationRegistration[v18].Operations
      || ((*OperationRegistration[v18].ObjectType)->TypeInfo.ObjectTypeFlags & 0x40) == 0 )
    {
LABEL_22:
      inserted = -1073741811;
      break;
    }
    PreOperation = (__int64)OperationRegistration[v18].PreOperation;
    if ( PreOperation )
    {
      if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PreOperation, 32) )
        goto LABEL_12;
    }
    else if ( !OperationRegistration[v18].PostOperation )
    {
      goto LABEL_22;
    }
    PostOperation = (__int64)OperationRegistration[v18].PostOperation;
    if ( PostOperation && !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PostOperation, 32) )
    {
LABEL_12:
      inserted = -1073741790;
      break;
    }
    v22 = (unsigned __int64)i << 6;
    v23 = (_QWORD *)((char *)v9 + v22 + 32);
    *(_QWORD *)((char *)v9 + v22 + 40) = v23;
    *v23 = v23;
    *(_QWORD *)((char *)v9 + v22 + 88) = 0LL;
    *(_DWORD *)((char *)v9 + v22 + 48) = OperationRegistration[v18].Operations;
    *(_QWORD *)((char *)v9 + v22 + 56) = v9;
    *(_QWORD *)((char *)v9 + v22 + 64) = *OperationRegistration[v18].ObjectType;
    *(_QWORD *)((char *)v9 + v22 + 72) = OperationRegistration[v18].PreOperation;
    *(_QWORD *)((char *)v9 + v22 + 80) = OperationRegistration[v18].PostOperation;
    inserted = ObpInsertCallbackByAltitude();
    if ( inserted < 0 )
      break;
    ++v9[1];
  }
  v20 = v9[1];
  if ( inserted < 0 )
  {
    if ( v20 )
    {
      do
      {
        v25 = (unsigned __int64)v2 << 6;
        v26 = (_QWORD *)((char *)v9 + v25 + 32);
        ObpLockObjectTypeExclusive(*(_QWORD *)((char *)v9 + v25 + 64), v13, v14, v15);
        v27 = *v26;
        if ( *(_QWORD **)(*v26 + 8LL) != v26 || (v28 = *(_QWORD **)((char *)v9 + v25 + 40), (_QWORD *)*v28 != v26) )
          __fastfail(3u);
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        ObpUnlockObjectType(v26[4]);
        ++v2;
      }
      while ( v2 < (unsigned __int16)v9[1] );
    }
    ExFreePoolWithTag(v9, 0x6C46624Fu);
  }
  else
  {
    if ( v20 )
    {
      do
      {
        v24 = v2++;
        *(_DWORD *)&v9[32 * v24 + 26] |= 1u;
      }
      while ( v2 < (unsigned __int16)v9[1] );
    }
    *RegistrationHandle = v9;
  }
  return inserted;
}
