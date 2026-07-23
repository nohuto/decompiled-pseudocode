/*
 * XREFs of MiMapViewOfSectionCommon @ 0x140993EA0
 * Callers:
 *     NtMapViewOfSection @ 0x140993880 (NtMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x1409EDD40 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MiMapViewOfSectionCommon(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 a6,
        int a7,
        __int64 a8,
        char a9,
        __int64 *a10)
{
  int v11; // r15d
  ULONG_PTR v12; // r12
  int ProtectionMask; // eax
  volatile void *v15; // r9
  __int64 ULong64FromUser; // rax
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r15
  char UCharFromUser; // al
  __int64 v23; // rax
  PVOID *v24; // rdi
  __int64 result; // rax
  _KPROCESS *v26; // rcx
  PVOID *v27; // r15
  int v28; // esi
  __int64 v29; // rax
  unsigned __int64 v30; // rcx

  v11 = a3;
  v12 = a2;
  *(_OWORD *)a10 = 0LL;
  *((_OWORD *)a10 + 1) = 0LL;
  *((_OWORD *)a10 + 2) = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0xBFFFFFFF);
  *((_DWORD *)a10 + 6) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  *((_DWORD *)a10 + 6) = ProtectionMask & 7;
  a10[2] = 0LL;
  if ( a9 )
  {
    ULong64FromUser = RtlReadULong64FromUser(v15);
    RtlWriteULong64ToUser(a4, ULong64FromUser);
    v17 = a5;
    v18 = RtlReadULong64FromUser(a5);
    RtlWriteULong64ToUser(a5, v18);
  }
  else
  {
    v17 = a5;
  }
  if ( a9 )
    v19 = RtlReadULong64FromUser(a4);
  else
    v19 = *a4;
  *a10 = v19;
  if ( a9 )
    v20 = RtlReadULong64FromUser(v17);
  else
    v20 = *v17;
  a10[1] = v20;
  if ( a6 )
  {
    if ( a9 )
    {
      v21 = a6;
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 8 < a6 || a6 + 8 > 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      do
      {
        UCharFromUser = RtlReadUCharFromUser((volatile void *)v21);
        RtlWriteUCharToUser((_BYTE *)v21, UCharFromUser);
        v21 = (v21 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v21 != ((a6 + 7) & 0xFFFFFFFFFFFFF000uLL) + 4096 );
      v12 = a2;
      v11 = a3;
    }
    if ( a9 )
      v23 = RtlReadULong64FromUser((volatile void *)a6);
    else
      v23 = *(_QWORD *)a6;
    a10[2] = v23;
  }
  v24 = (PVOID *)(a10 + 5);
  if ( v11 )
  {
    *v24 = (PVOID)BugCheckParameter1;
    v27 = (PVOID *)(a10 + 4);
    a10[4] = v12;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               8,
               (__int64)PsProcessType,
               a9,
               0x77566D4Du,
               a10 + 5,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    v26 = (_KPROCESS *)*v24;
    if ( (*((_BYTE *)*v24 + 368) & 1) != 0 && KeGetCurrentThread()->ApcState.Process != v26 )
    {
      ObfDereferenceObjectWithTag(v26, 0x77566D4Du);
      return 3221225506LL;
    }
    v27 = (PVOID *)(a10 + 4);
    v28 = ObpReferenceObjectByHandleWithTag(
            v12,
            *((_DWORD *)MmMakeSectionAccess + *((unsigned int *)a10 + 6)),
            (__int64)MmSectionObjectType,
            a9,
            0x77566D4Du,
            a10 + 4,
            0LL,
            0LL);
    if ( v28 < 0 )
    {
      ObfDereferenceObjectWithTag(*v24, 0x77566D4Du);
      return (unsigned int)v28;
    }
  }
  v29 = *a10;
  if ( (unsigned __int64)*a10 <= 0x7FFFFFFEFFFFLL )
  {
    v30 = a10[1];
    if ( v30 <= 0x7FFFFFFF0000LL - v29 && v29 + v30 <= 0xFFFFFFFFFFFFFFFFuLL >> a8 )
      return 0LL;
  }
  if ( !a3 )
  {
    ObfDereferenceObjectWithTag(*v27, 0x77566D4Du);
    ObfDereferenceObjectWithTag(*v24, 0x77566D4Du);
  }
  return 3221225485LL;
}
