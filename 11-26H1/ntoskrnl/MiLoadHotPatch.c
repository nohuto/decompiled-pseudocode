/*
 * XREFs of MiLoadHotPatch @ 0x1408770BC
 * Callers:
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 *     MiApplyRequiredDriverHotPatches @ 0x140B5A0B4 (MiApplyRequiredDriverHotPatches.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     VslApplyHotPatch @ 0x1405C5260 (VslApplyHotPatch.c)
 *     VslRegisterSecurePatch @ 0x1405C6324 (VslRegisterSecurePatch.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VslDetermineHotPatchType @ 0x140794C80 (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x140873D80 (MiAllocateHotPatchRecord.c)
 *     MiAllocateSecureImageActivePatch @ 0x140873E2C (MiAllocateSecureImageActivePatch.c)
 *     MiApplyHotPatchToDriver @ 0x14087450C (MiApplyHotPatchToDriver.c)
 *     MiHotPatchAllProcesses @ 0x1408764F0 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x140876C5C (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140876F28 (MiInsertSecureImageActivePatch.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 *     MiGetSectionStrongImageReference @ 0x140B4F550 (MiGetSectionStrongImageReference.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadHotPatch(const UNICODE_STRING *a1, int a2, int *a3, int *a4)
{
  char v5; // r14
  int *v6; // r15
  UNICODE_STRING *SecureImageActivePatch; // r13
  int v8; // eax
  __int32 v9; // r12d
  int SectionStrongImageReference; // edi
  int v11; // edx
  PVOID v12; // rsi
  unsigned int v13; // ebx
  int v14; // r14d
  PVOID v15; // rsi
  struct _KLOCK_ENTRIES *v16; // r9
  int inserted; // eax
  int v18; // r14d
  char v19; // al
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r15
  __int64 v22; // rdi
  int v23; // eax
  int v24; // r14d
  int v25; // r10d
  int v26; // edi
  int v27; // eax
  int v28; // r10d
  int v29; // r11d
  int v31; // [rsp+40h] [rbp-B8h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+48h] [rbp-B0h]
  int v33; // [rsp+50h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-98h] BYREF
  int v36; // [rsp+64h] [rbp-94h]
  struct _KTHREAD *Lock; // [rsp+68h] [rbp-90h]
  HANDLE Handle; // [rsp+70h] [rbp-88h] BYREF
  __m128i v39; // [rsp+78h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-70h]
  int v41; // [rsp+90h] [rbp-68h]
  unsigned int *v42; // [rsp+98h] [rbp-60h]
  PVOID P; // [rsp+A0h] [rbp-58h]
  PVOID v44; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-38h]
  int v47; // [rsp+C8h] [rbp-30h]
  int *v48; // [rsp+D0h] [rbp-28h]

  SourceString = a1;
  v33 = a2;
  v48 = a3;
  v46 = 0LL;
  v47 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v5 = a2;
  v42 = (unsigned int *)a4;
  v31 = 0;
  v6 = a3;
  v35 = 0;
  SecureImageActivePatch = 0LL;
  Lock = 0LL;
  v45 = 0LL;
  P = 0LL;
  Object = 0LL;
  v44 = 0LL;
  Handle = 0LL;
  v36 = 1;
  v8 = MiOpenHotPatchFile((_DWORD)a1, 1, 0, (unsigned int)&Handle, (__int64)&Object, 0LL, (__int64)&v39, (__int64)&v35);
  v9 = v39.m128i_i32[1];
  SectionStrongImageReference = v8;
  if ( v8 < 0 )
    goto LABEL_48;
  if ( (v5 & 8) != 0 )
  {
    if ( *v6 != v39.m128i_i32[0] || (v11 = *a4, *a4 != v39.m128i_i32[1]) )
    {
      v12 = Object;
      SectionStrongImageReference = -1073740748;
LABEL_50:
      v14 = (int)SourceString;
      goto LABEL_51;
    }
  }
  else
  {
    v11 = v39.m128i_i32[1];
    *v6 = v39.m128i_i32[0];
    *a4 = v9;
  }
  v13 = v35;
  if ( (v5 & 1) != 0 )
  {
    v14 = (int)SourceString;
    P = (PVOID)MiAllocateHotPatchRecord(*v6, v11, v41, (const void **)SourceString, v35);
    v15 = P;
    if ( !P )
    {
      v12 = Object;
      SectionStrongImageReference = -1073741670;
LABEL_51:
      if ( stru_140E366D8.FirstArgument
        && *(_DWORD *)stru_140E366D8.FirstArgument
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
      {
        MiLogHotPatchOperationStatus(v29, v28, v9, v14, SectionStrongImageReference, 1);
      }
      goto LABEL_55;
    }
    Lock = MmAcquireLoadLock();
    inserted = MiInsertHotPatchRecord((unsigned __int64 *)&xmmword_140E366C0, (__int64)v15, 0LL, v16);
    SectionStrongImageReference = inserted;
    if ( inserted < 0 )
      goto LABEL_48;
    if ( inserted != 255 )
    {
      P = 0LL;
      if ( (MiFlags & 0x10000) != 0 )
      {
        VslRegisterSecurePatch(&v39, (struct _MDL **)SourceString);
        v9 = v39.m128i_i32[1];
      }
    }
  }
  else
  {
    Lock = MmAcquireLoadLock();
  }
  v18 = 1073741879;
  if ( (MiFlags & 0x10000) == 0 )
  {
    v12 = Object;
    goto LABEL_44;
  }
  if ( (v33 & 4) == 0 )
  {
    SectionStrongImageReference = VslDetermineHotPatchType(*v6, *v42, &v31);
    if ( SectionStrongImageReference < 0 )
    {
LABEL_48:
      v12 = Object;
      goto LABEL_49;
    }
  }
  v19 = v31;
  v12 = Object;
  if ( (v31 & 1) != 0 )
  {
    SectionStrongImageReference = ObpReferenceObjectByHandleWithTag(
                                    (ULONG_PTR)Handle,
                                    0x70486D4Du,
                                    (__int64)&v44,
                                    0LL,
                                    0LL);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_49;
    v20 = MiSectionControlArea((__int64)v12);
    SectionStrongImageReference = MiValidateSectionCreate((_DWORD)v44, v20, -1, 0, (v31 & 2 | 0x80000001) >> 1, 12, 1);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_50;
    v21 = *(_QWORD *)(v20 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    SectionStrongImageReference = MiGetSectionStrongImageReference(v21);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_50;
    v22 = *(_QWORD *)(v21 + 64);
    v6 = v48;
    v19 = v31;
  }
  else
  {
    v22 = 0LL;
  }
  v36 = 0;
  if ( (v19 & 2) != 0 )
  {
    SecureImageActivePatch = MiAllocateSecureImageActivePatch(SourceString);
    if ( SecureImageActivePatch )
    {
      v23 = VslApplyHotPatch(v22, (__int64)v12, 0LL, 0LL, 0LL, 0LL, 0, (__int64)&v45);
      v24 = v47;
      SectionStrongImageReference = v23;
    }
    else
    {
      v24 = 0;
      v45 = 0LL;
      v46 = 0LL;
      SectionStrongImageReference = -1073741670;
    }
    if ( stru_140E366D8.FirstArgument
      && *(_DWORD *)stru_140E366D8.FirstArgument
      && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
    {
      MiLogHotPatchOperationStatus(v25, v39.m128i_i32[0], v9, (_DWORD)SourceString, SectionStrongImageReference, 2);
    }
    if ( SectionStrongImageReference < 0 )
      goto LABEL_55;
    if ( SectionStrongImageReference != 255 )
    {
      SecureImageActivePatch[1].Buffer = (wchar_t *)v45;
      *(_DWORD *)&SecureImageActivePatch[2].Length = HIDWORD(v45);
      *(_DWORD *)(&SecureImageActivePatch[2].MaximumLength + 1) = v46;
      LODWORD(SecureImageActivePatch[2].Buffer) = v24;
      MiInsertSecureImageActivePatch(SecureImageActivePatch);
      SecureImageActivePatch = 0LL;
    }
    v18 = SectionStrongImageReference;
  }
  v26 = v18;
  ObfDereferenceObjectWithTag(v12, 0x70486D4Du);
  v12 = 0LL;
  if ( (v33 & 2) == 0 )
  {
    v27 = MiApplyHotPatchToDriver(*v6, *v42, (__int64)SourceString, v13, (__int64)Handle);
    v18 = v27;
    if ( v27 == -1073741515 )
    {
      v18 = 1073741879;
    }
    else if ( v27 < 0 )
    {
      goto LABEL_44;
    }
    if ( v26 == 1073741879 )
      v26 = v18;
    v18 = v26;
  }
LABEL_44:
  MmReleaseLoadLock(Lock);
  Lock = 0LL;
  if ( (v33 & 6) == 0 )
    MiHotPatchAllProcesses(*v6, *v42, v13);
  SectionStrongImageReference = v18;
  if ( v36 )
  {
LABEL_49:
    if ( SectionStrongImageReference == 1073741879 )
    {
LABEL_55:
      if ( Lock )
        MmReleaseLoadLock(Lock);
      goto LABEL_57;
    }
    goto LABEL_50;
  }
LABEL_57:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x63536D4Du);
  if ( v44 )
    ObfDereferenceObjectWithTag(v44, 0x70486D4Du);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( SecureImageActivePatch )
    ExFreePoolWithTag(SecureImageActivePatch, 0);
  return (unsigned int)SectionStrongImageReference;
}
