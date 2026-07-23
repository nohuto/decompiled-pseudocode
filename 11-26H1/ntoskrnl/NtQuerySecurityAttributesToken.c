/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x140925540
 * Callers:
 *     DifNtQuerySecurityAttributesTokenWrapper @ 0x140688F30 (DifNtQuerySecurityAttributesTokenWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SepReferenceTokenByHandle @ 0x1403ABB50 (SepReferenceTokenByHandle.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SepCaptureUnicodeStringArray @ 0x140925834 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  ULONG v7; // eax
  PERESOURCE *v8; // rdi
  char v9; // r13
  unsigned __int8 PreviousMode; // bl
  ULONG v11; // r12d
  unsigned __int64 v12; // rsi
  char *v13; // rcx
  unsigned __int64 v14; // r14
  char UCharFromUser; // al
  PULONG v16; // r14
  PULONG v17; // rsi
  unsigned __int64 v18; // r13
  char v19; // al
  NTSTATUS SecurityAttributesToken; // esi
  struct _KLOCK_ENTRIES *v21; // r9
  struct _KTHREAD *CurrentThread; // rax
  size_t v24; // [rsp+30h] [rbp-68h]
  PVOID v25; // [rsp+48h] [rbp-50h] BYREF
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  __int64 v27[8]; // [rsp+58h] [rbp-40h] BYREF

  v7 = NumberOfAttributes;
  v8 = 0LL;
  P = 0LL;
  v9 = 0;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = Length;
  if ( Length )
  {
    if ( Buffer )
      goto LABEL_3;
LABEL_34:
    SecurityAttributesToken = -1073741811;
    goto LABEL_23;
  }
  if ( Buffer )
    goto LABEL_34;
LABEL_3:
  if ( !PreviousMode )
  {
    v16 = ReturnLength;
    goto LABEL_19;
  }
  if ( Length )
  {
    v12 = (unsigned __int64)Buffer;
    if ( ((unsigned __int8)Buffer & 3) != 0 )
      goto LABEL_18;
    v13 = (char *)Buffer + Length;
    if ( v13 <= Buffer || (unsigned __int64)v13 > 0x7FFFFFFF0000LL )
LABEL_16:
      ExRaiseAccessViolation();
    v14 = ((unsigned __int64)(v13 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      UCharFromUser = RtlReadUCharFromUser((volatile void *)v12);
      RtlWriteUCharToUser((_BYTE *)v12, UCharFromUser);
      v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v12 != v14 );
  }
  v16 = ReturnLength;
  v17 = ReturnLength;
  if ( ((unsigned __int8)ReturnLength & 3) != 0 )
LABEL_18:
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(ReturnLength + 1) > 0x7FFFFFFF0000LL || ReturnLength + 1 <= ReturnLength )
    goto LABEL_16;
  v18 = (((unsigned __int64)ReturnLength + 3) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  do
  {
    v19 = RtlReadUCharFromUser(v17);
    RtlWriteUCharToUser(v17, v19);
    v17 = (PULONG)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFF000uLL) + 4096);
  }
  while ( v17 != (PULONG)v18 );
  v9 = 0;
  v7 = NumberOfAttributes;
LABEL_19:
  SecurityAttributesToken = SepCaptureUnicodeStringArray(Attributes, v7, PreviousMode, &P);
  if ( SecurityAttributesToken >= 0 )
  {
    SecurityAttributesToken = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v21, &v25, &Length, v27);
    v8 = (PERESOURCE *)v25;
    if ( SecurityAttributesToken >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(v8[6], 1u);
      v9 = 1;
      LOBYTE(Length) = 1;
      LODWORD(v24) = v11;
      if ( PreviousMode )
        SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                    (__int64)v8,
                                    PreviousMode,
                                    (__int64)P,
                                    NumberOfAttributes,
                                    0,
                                    Buffer,
                                    v24,
                                    (__int64)v16);
      else
        SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                    (__int64)v8,
                                    0,
                                    (__int64)P,
                                    NumberOfAttributes,
                                    0,
                                    Buffer,
                                    v24,
                                    (__int64)v16);
    }
  }
LABEL_23:
  if ( PreviousMode == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v8[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x74726853u);
  return SecurityAttributesToken;
}
