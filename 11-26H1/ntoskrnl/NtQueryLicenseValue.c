/*
 * XREFs of NtQueryLicenseValue @ 0x140A76CE0
 * Callers:
 *     DifNtQueryLicenseValueWrapper @ 0x140688070 (DifNtQueryLicenseValueWrapper.c)
 *     ExpGetNtProductTypeFromLicenseValue @ 0x14083CCBC (ExpGetNtProductTypeFromLicenseValue.c)
 *     MiMemoryLicense @ 0x140D014B8 (MiMemoryLicense.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     ntoskrnl_27 @ 0x140A77090 (ntoskrnl_27.c)
 *     SLQueryLicenseValueInternal @ 0x140A770F8 (SLQueryLicenseValueInternal.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  __int64 v5; // r15
  void *v9; // r12
  void *v10; // rsi
  char PreviousMode; // cl
  __int64 ULong64FromUser; // rax
  void *Pool2; // rax
  int ULongFromUser; // eax
  unsigned __int64 v15; // rsi
  char *v16; // rax
  unsigned __int64 v17; // rbx
  char UCharFromUser; // al
  NTSTATUS v19; // ebx
  PULONG v20; // rbx
  int v21; // eax
  struct _LIST_ENTRY *Blink; // rcx
  NTSTATUS v23; // eax
  int v25; // [rsp+44h] [rbp-74h] BYREF
  void *v26; // [rsp+50h] [rbp-68h]
  void *v27; // [rsp+58h] [rbp-60h]
  void *Src[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v29; // [rsp+70h] [rbp-48h]
  size_t Size; // [rsp+C0h] [rbp+8h] BYREF
  PULONG v31; // [rsp+C8h] [rbp+10h]
  PVOID v32; // [rsp+D0h] [rbp+18h]
  ULONG v33; // [rsp+D8h] [rbp+20h]

  v33 = DataSize;
  v32 = Data;
  v31 = Type;
  v5 = DataSize;
  *(_OWORD *)Src = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v10 = 0LL;
  v27 = 0LL;
  LODWORD(Size) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ValueName && ResultDataSize && (Data || !DataSize) )
  {
    if ( DataSize > 0x800000 )
    {
      v19 = -1073741801;
    }
    else if ( PreviousMode )
    {
      DWORD1(v29) = 0;
      LODWORD(v29) = RtlReadULongFromUser((unsigned int *)&ValueName->Length);
      ULong64FromUser = RtlReadULong64FromUser(&ValueName->Buffer);
      *((_QWORD *)&v29 + 1) = ULong64FromUser;
      *(_OWORD *)Src = v29;
      if ( ULong64FromUser && (_WORD)v29 && (v29 & 1) == 0 )
      {
        if ( (ULong64FromUser & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        v9 = Pool2;
        v26 = Pool2;
        if ( !Pool2 )
          goto LABEL_20;
        RtlCopyFromUser(Pool2, Src[1], LOWORD(Src[0]));
        Src[1] = v9;
        if ( Type )
        {
          ULongFromUser = RtlReadULongFromUser(Type);
          RtlWriteULongToUser(Type, ULongFromUser);
          v25 = RtlReadULongFromUser(Type);
        }
        if ( !Data || !(_DWORD)v5 )
          goto LABEL_21;
        v15 = (unsigned __int64)Data;
        v16 = (char *)Data + v5;
        if ( (unsigned __int64)Data + v5 > 0x7FFFFFFF0000LL || v16 <= Data )
          ExRaiseAccessViolation();
        v17 = ((unsigned __int64)(v16 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          UCharFromUser = RtlReadUCharFromUser((volatile void *)v15);
          RtlWriteUCharToUser((_BYTE *)v15, UCharFromUser);
          v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v15 != v17 );
        v10 = (void *)ExAllocatePool2(0x100uLL);
        v27 = v10;
        if ( v10 )
        {
LABEL_21:
          v20 = ResultDataSize;
          v21 = RtlReadULongFromUser(ResultDataSize);
          RtlWriteULongToUser(v20, v21);
          LODWORD(Size) = RtlReadULongFromUser(v20);
          v19 = 0;
        }
        else
        {
LABEL_20:
          v19 = -1073741801;
        }
      }
      else
      {
        v19 = -1073741811;
      }
      if ( v19 >= 0 )
      {
        Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
        if ( ExpPlatformBinaryLock.SchedulerAssist )
          v23 = guard_dispatch_icall_no_overrides((__int64)Blink, (__int64)Src);
        else
          v23 = SLQueryLicenseValueInternal(
                  (_DWORD)Blink,
                  (unsigned int)Src,
                  (unsigned int)&v25,
                  (_DWORD)v10,
                  v5,
                  (__int64)&Size);
        v19 = v23;
        if ( Type )
          RtlWriteULongToUser(Type, v25);
        RtlWriteULongToUser(ResultDataSize, Size);
        if ( v19 >= 0 && Data )
        {
          if ( (unsigned int)v5 < (unsigned int)Size )
            v19 = -1073741789;
          else
            RtlCopyToUser(Data, v10, (unsigned int)Size);
        }
      }
    }
    else
    {
      v19 = ntoskrnl_27((int)ValueName, (int)Type, (int)Data, DataSize, (__int64)ResultDataSize);
    }
  }
  else
  {
    v19 = -1073741811;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v19;
}
