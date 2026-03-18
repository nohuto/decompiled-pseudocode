/*
 * XREFs of NtRemoveIoCompletionEx @ 0x140A5DAF0
 * Callers:
 *     DifNtRemoveIoCompletionExWrapper @ 0x140688990 (DifNtRemoveIoCompletionExWrapper.c)
 * Callees:
 *     IoRemoveIoCompletion @ 0x1402207D0 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 NtRemoveIoCompletionEx(
        void *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        LARGE_INTEGER *a5,
        BOOLEAN a6,
        ...)
{
  unsigned int *v6; // r14
  __int64 v7; // r13
  int v9; // edi
  LARGE_INTEGER *v10; // r15
  KPROCESSOR_MODE PreviousMode; // si
  PLIST_ENTRY *v12; // r14
  int v13; // ebx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx
  char UCharFromUser; // al
  int ULongFromUser; // eax
  __int64 Pool2; // rax
  int v21; // ecx
  int v22; // [rsp+44h] [rbp-104h] BYREF
  PVOID Object; // [rsp+48h] [rbp-100h] BYREF
  int *v24; // [rsp+58h] [rbp-F0h]
  __int64 ULong64FromUser; // [rsp+60h] [rbp-E8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-E0h]
  __int64 *v27; // [rsp+70h] [rbp-D8h]
  _BYTE P[128]; // [rsp+80h] [rbp-C8h] BYREF

  v6 = a4;
  v24 = (int *)a4;
  v7 = a3;
  Handle = a1;
  memset_0(P, 0, sizeof(P));
  v9 = 0;
  ULong64FromUser = 0LL;
  v22 = 0;
  if ( (unsigned int)(v7 - 1) > 0x7FFFFFE )
    return 3221225485LL;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v15 = 32 * v7;
    if ( 32 * v7 )
    {
      v16 = a2;
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = a2 + v15;
      if ( a2 + v15 <= a2 || v17 > 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      Object = (PVOID)(((v17 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096);
      do
      {
        UCharFromUser = RtlReadUCharFromUser((volatile void *)v16);
        RtlWriteUCharToUser((_BYTE *)v16, UCharFromUser);
        v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( (PVOID)v16 != Object );
      v6 = (unsigned int *)v24;
    }
    ULongFromUser = RtlReadULongFromUser(v6);
    RtlWriteULongToUser(v6, ULongFromUser);
    if ( a5 )
    {
      v10 = (LARGE_INTEGER *)&ULong64FromUser;
      v27 = &ULong64FromUser;
      ULong64FromUser = RtlReadULong64FromUser(a5);
    }
  }
  else if ( a5 )
  {
    v10 = a5;
  }
  if ( (unsigned int)v7 > 0x10 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v12 = (PLIST_ENTRY *)P;
    if ( Pool2 )
      v12 = (PLIST_ENTRY *)Pool2;
    v21 = 16;
    if ( Pool2 )
      v21 = v7;
    LODWORD(v7) = v21;
  }
  else
  {
    v12 = (PLIST_ENTRY *)P;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v13 = IoRemoveIoCompletion((struct _KQUEUE *)Object, a2, v12, v7, (ULONG *)&v22, PreviousMode, v10, a6);
    ObfDereferenceObject(Object);
    v9 = v22;
  }
  if ( v12 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(v12, 0);
  if ( v13 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(v24, v9);
    else
      *v24 = v9;
  }
  return (unsigned int)v13;
}
