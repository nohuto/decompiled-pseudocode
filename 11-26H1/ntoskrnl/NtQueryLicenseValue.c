/*
 * XREFs of NtQueryLicenseValue @ 0x140A6A340
 * Callers:
 *     DifNtQueryLicenseValueWrapper @ 0x140684490 (DifNtQueryLicenseValueWrapper.c)
 *     ExpGetNtProductTypeFromLicenseValue @ 0x140836A7C (ExpGetNtProductTypeFromLicenseValue.c)
 *     MiMemoryLicense @ 0x140CFB138 (MiMemoryLicense.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 *     ntoskrnl_27 @ 0x140A6A6F0 (ntoskrnl_27.c)
 *     SLQueryLicenseValueInternal @ 0x140A6A758 (SLQueryLicenseValueInternal.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryLicenseValue(unsigned int *a1, unsigned int *a2, char *a3, unsigned int a4, unsigned int *a5)
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
  int v19; // ebx
  unsigned int *v20; // rbx
  int v21; // eax
  struct _LIST_ENTRY *Blink; // rcx
  int v23; // eax
  int v25; // [rsp+44h] [rbp-74h] BYREF
  void *v26; // [rsp+50h] [rbp-68h]
  void *v27; // [rsp+58h] [rbp-60h]
  void *Src[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v29; // [rsp+70h] [rbp-48h]
  size_t Size; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int *v31; // [rsp+C8h] [rbp+10h]
  char *v32; // [rsp+D0h] [rbp+18h]
  unsigned int v33; // [rsp+D8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v5 = a4;
  *(_OWORD *)Src = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v10 = 0LL;
  v27 = 0LL;
  LODWORD(Size) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a1 && a5 && (a3 || !a4) )
  {
    if ( a4 > 0x800000 )
    {
      v19 = -1073741801;
    }
    else if ( PreviousMode )
    {
      DWORD1(v29) = 0;
      LODWORD(v29) = RtlReadULongFromUser(a1);
      ULong64FromUser = RtlReadULong64FromUser(a1 + 2);
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
        if ( a2 )
        {
          ULongFromUser = RtlReadULongFromUser(a2);
          RtlWriteULongToUser(a2, ULongFromUser);
          v25 = RtlReadULongFromUser(a2);
        }
        if ( !a3 || !(_DWORD)v5 )
          goto LABEL_21;
        v15 = (unsigned __int64)a3;
        v16 = &a3[v5];
        if ( (unsigned __int64)&a3[v5] > 0x7FFFFFFF0000LL || v16 <= a3 )
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
          v20 = a5;
          v21 = RtlReadULongFromUser(a5);
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
        if ( *(_QWORD *)&ExpPlatformBinaryLock.ThreadTimerDelay )
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
        if ( a2 )
          RtlWriteULongToUser(a2, v25);
        RtlWriteULongToUser(a5, Size);
        if ( v19 >= 0 && a3 )
        {
          if ( (unsigned int)v5 < (unsigned int)Size )
            v19 = -1073741789;
          else
            RtlCopyToUser(a3, v10, (unsigned int)Size);
        }
      }
    }
    else
    {
      v19 = ntoskrnl_27((int)a1, (int)a2, (int)a3, a4, (__int64)a5);
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
  return (unsigned int)v19;
}
