/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x1408F55B0
 * Callers:
 *     DifNtQuerySecurityAttributesTokenWrapper @ 0x140685350 (DifNtQuerySecurityAttributesTokenWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     SepReferenceTokenByHandle @ 0x1402AC430 (SepReferenceTokenByHandle.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     SepCaptureUnicodeStringArray @ 0x1408F58A4 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySecurityAttributesToken(
        void *a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v7; // eax
  PERESOURCE *v8; // rdi
  char v9; // r13
  unsigned __int8 PreviousMode; // bl
  int v11; // r12d
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  char UCharFromUser; // al
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r13
  char v19; // al
  int SecurityAttributesToken; // esi
  struct _KLOCK_ENTRIES *v21; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  size_t v26; // [rsp+30h] [rbp-68h]
  PVOID v27; // [rsp+48h] [rbp-50h] BYREF
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v29[8]; // [rsp+58h] [rbp-40h] BYREF

  v7 = a3;
  v8 = 0LL;
  P = 0LL;
  v9 = 0;
  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = a5;
  if ( (_DWORD)a5 )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_34:
    SecurityAttributesToken = -1073741811;
    goto LABEL_23;
  }
  if ( a4 )
    goto LABEL_34;
LABEL_3:
  if ( !PreviousMode )
  {
    v16 = a6;
    goto LABEL_19;
  }
  if ( (_DWORD)a5 )
  {
    v12 = (unsigned __int64)a4;
    if ( ((unsigned __int8)a4 & 3) != 0 )
      goto LABEL_18;
    v13 = (unsigned __int64)a4 + (unsigned int)a5;
    if ( v13 <= (unsigned __int64)a4 || v13 > 0x7FFFFFFF0000LL )
LABEL_16:
      ExRaiseAccessViolation();
    v14 = ((v13 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      UCharFromUser = RtlReadUCharFromUser((volatile void *)v12);
      RtlWriteUCharToUser((_BYTE *)v12, UCharFromUser);
      v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v12 != v14 );
  }
  v16 = a6;
  v17 = a6;
  if ( (a6 & 3) != 0 )
LABEL_18:
    ExRaiseDatatypeMisalignment();
  if ( a6 + 4 > 0x7FFFFFFF0000LL || a6 + 4 <= a6 )
    goto LABEL_16;
  v18 = ((a6 + 3) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  do
  {
    v19 = RtlReadUCharFromUser((volatile void *)v17);
    RtlWriteUCharToUser((_BYTE *)v17, v19);
    v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  }
  while ( v17 != v18 );
  v9 = 0;
  v7 = a3;
LABEL_19:
  SecurityAttributesToken = SepCaptureUnicodeStringArray(a2, v7, PreviousMode, &P);
  if ( SecurityAttributesToken >= 0 )
  {
    SecurityAttributesToken = SepReferenceTokenByHandle(a1, 8u, PreviousMode, v21, &v27, &a5, v29);
    v8 = (PERESOURCE *)v27;
    if ( SecurityAttributesToken >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(v8[6], 1u);
      v9 = 1;
      LOBYTE(a5) = 1;
      LODWORD(v26) = v11;
      if ( PreviousMode )
        SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                    (__int64)v8,
                                    PreviousMode,
                                    (__int64)P,
                                    a3,
                                    0,
                                    a4,
                                    v26,
                                    v16);
      else
        SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                    (__int64)v8,
                                    0,
                                    (__int64)P,
                                    a3,
                                    0,
                                    a4,
                                    v26,
                                    v16);
    }
  }
LABEL_23:
  if ( PreviousMode == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v8[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24);
  }
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x74726853u);
  return (unsigned int)SecurityAttributesToken;
}
