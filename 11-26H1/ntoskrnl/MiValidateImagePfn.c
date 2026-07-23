/*
 * XREFs of MiValidateImagePfn @ 0x140B0676C
 * Callers:
 *     MiValidateInPageEntries @ 0x14038E1C0 (MiValidateInPageEntries.c)
 *     MiValidateImagePage @ 0x140B06710 (MiValidateImagePage.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     MiControlAreaHasHostRelocationsApplied @ 0x1404CE974 (MiControlAreaHasHostRelocationsApplied.c)
 *     MiReleaseFaultPte @ 0x14052849C (MiReleaseFaultPte.c)
 *     MiReserveFaultPte @ 0x1406FC440 (MiReserveFaultPte.c)
 *     KeCopyPageNoOverride @ 0x140735430 (KeCopyPageNoOverride.c)
 *     MiRevertRelocatedImagePfn @ 0x1409A0624 (MiRevertRelocatedImagePfn.c)
 *     SeValidateImageData @ 0x140AC0288 (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x140B4F550 (MiGetSectionStrongImageReference.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiValidateImagePfn(
        __int64 BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 v10; // r13
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // r14
  int v15; // r9d
  void *v16; // rdi
  char v17; // r8
  int v18; // r12d
  char v19; // r10
  int v20; // eax
  int v21; // eax
  __int64 v22; // r15
  int ProtectionPfnCompatible; // eax
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // r12d
  int v27; // ebx
  char v28; // dl
  int v29; // [rsp+30h] [rbp-58h]
  char v30; // [rsp+90h] [rbp+8h]
  unsigned int v31; // [rsp+A8h] [rbp+20h]
  char v32; // [rsp+B0h] [rbp+28h]

  v31 = a4;
  v10 = 48 * a7 - 0x220000000000LL;
  v11 = *(_QWORD *)(BugCheckParameter2 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v12 = *(_QWORD *)(v11 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(BugCheckParameter2 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v11 + 64) )
  {
    result = MiGetSectionStrongImageReference(*(_QWORD *)(BugCheckParameter2 + 96) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (int)result < 0 )
      return result;
  }
  v14 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, a3, a4);
  if ( v14 )
  {
    v32 = 0;
    v15 = 1;
  }
  else
  {
    if ( ((MiFlags & 0x8000) == 0 || (*(_DWORD *)(BugCheckParameter2 + 92) & 0xC0000) == 0) && !a9 )
      return 3221225626LL;
    v14 = MiReserveFaultPte();
    if ( !v14 )
      return 3221225626LL;
    v15 = 1;
    v32 = 1;
  }
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v30 = 0;
  v19 = 3;
  if ( (MiFlags & 0x8000) == 0 || (*(_DWORD *)(BugCheckParameter2 + 92) & 0xC0000) == 0 )
  {
    if ( !a9 )
    {
LABEL_21:
      v18 = v15;
      goto LABEL_22;
    }
    LOBYTE(v21) = MiControlAreaHasHostRelocationsApplied(BugCheckParameter2);
    if ( !v21 )
      goto LABEL_22;
    v17 = v15;
LABEL_20:
    v30 = v17;
    goto LABEL_21;
  }
  if ( a9 )
  {
    LOBYTE(v20) = MiControlAreaHasHostRelocationsApplied(BugCheckParameter2);
    if ( v20 )
    {
      v17 = v19;
      goto LABEL_20;
    }
  }
LABEL_22:
  v22 = (__int64)(v14 << 25) >> 16;
  v29 = v17 & 2;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v15 + (v19 & (unsigned __int8)-(v29 != 0)), v10);
  *(_QWORD *)v14 = MiMakeValidPte(v14, a7, ProtectionPfnCompatible | 0x20000000u);
  if ( !v18 )
  {
LABEL_25:
    v26 = v29;
LABEL_26:
    v27 = SeValidateImageData(v12, v22);
    if ( v27 >= 0 )
    {
      v28 = 0;
      if ( (MiFlags & 0x80000) != 0
        && (*(_DWORD *)(BugCheckParameter2 + 92) & 0xC0000) == 0
        && ((*(_BYTE *)(v10 + 16) >> 5) & 2) != 0 )
      {
        v28 = 3;
      }
      if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
        MiMarkPfnVerified(v10, v28);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)&stru_140E2D2D0.WaitBlockFill11[148]);
      if ( v16 && v26 )
        KeCopyPageNoOverride(v22, (__int64)v16);
    }
    goto LABEL_40;
  }
  v25 = MiRevertRelocatedImagePfn((__int64)(v14 << 25) >> 16, (__int64 *)BugCheckParameter2, v31, v24, v30);
  v16 = (void *)v25;
  if ( v25 == -1 )
  {
    v16 = 0LL;
    goto LABEL_25;
  }
  if ( v25 )
  {
    v26 = v29;
    if ( !v29 )
      v22 = v25;
    goto LABEL_26;
  }
  v27 = -1073741670;
LABEL_40:
  if ( v32 )
    MiReleaseFaultPte((_QWORD *)v14);
  else
    MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v14, 1u);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return (unsigned int)v27;
}
