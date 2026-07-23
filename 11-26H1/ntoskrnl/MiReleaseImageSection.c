/*
 * XREFs of MiReleaseImageSection @ 0x140A64F24
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiMakeImageReadOnly @ 0x1404B7CFC (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C18CC (MiFinalizeImageHeaderPage.c)
 *     MiReleaseImageSectionWaiters @ 0x1404D0684 (MiReleaseImageSectionWaiters.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140618694 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 *     MiValidateSectionSigningPolicy @ 0x14099C76C (MiValidateSectionSigningPolicy.c)
 *     MiParseComAndCetHeaders @ 0x14099D24C (MiParseComAndCetHeaders.c)
 *     MiDeleteImageCreationMdls @ 0x140A63794 (MiDeleteImageCreationMdls.c)
 *     SeGetImageRequiredSigningLevel @ 0x140A8F9E8 (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140B56AF0 (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiReleaseImageSection(__int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned int *v3; // rsi
  void *v6; // rcx
  unsigned int *v7; // rdi
  char v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  int ImageRequiredSigningLevel; // ebx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // edi
  char v15; // r12
  unsigned int v16; // ecx
  int Flink; // r14d
  char v18; // al
  int v19; // r14d
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v21; // edi
  int v22; // edi
  int DirectImageOriginalBase; // eax
  __int64 v24; // rax
  char v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 *i; // rbx
  __int64 *v31; // rsi
  int j; // edi
  _BYTE v34[4]; // [rsp+50h] [rbp-29h] BYREF
  int v35; // [rsp+54h] [rbp-25h]
  int v36; // [rsp+58h] [rbp-21h]
  __int64 v37; // [rsp+60h] [rbp-19h]
  __int64 v38; // [rsp+68h] [rbp-11h]
  PVOID Object; // [rsp+70h] [rbp-9h]
  __int64 *v40; // [rsp+78h] [rbp-1h]
  _QWORD *v41; // [rsp+80h] [rbp+7h]
  char v43; // [rsp+E8h] [rbp+6Fh]
  __int64 v45; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = (unsigned int *)*a1;
  v37 = 0LL;
  v34[0] = 0;
  v6 = (void *)*((_QWORD *)v3 + 7);
  v7 = (unsigned int *)(a1 + 1);
  v8 = *((_BYTE *)v3 + 24);
  v36 = *((_DWORD *)a1 + 54);
  Object = v6;
  v9 = *(_QWORD *)a2;
  v40 = a1 + 1;
  LOBYTE(v45) = v8;
  *a3 = 0LL;
  v10 = *(_QWORD *)(v9 + 56);
  v38 = v10;
  v41 = (_QWORD *)v9;
  if ( !v7[30] && !v7[31] && !*(_BYTE *)(v10 + 50) )
    *(_WORD *)(v9 + 12) |= 0x4000u;
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (*v3 & 0x40000) != 0 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 5;
      ImageRequiredSigningLevel = -1073740749;
LABEL_87:
      MiDeleteImageCreationMdls((PMDL)a1[26], 1);
      return (unsigned int)ImageRequiredSigningLevel;
    }
    ImageRequiredSigningLevel = MiSetPagesModified((__int64 *)a2, v3[42]);
    if ( ImageRequiredSigningLevel < 0 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 6;
      goto LABEL_87;
    }
  }
  ImageRequiredSigningLevel = MiParseComAndCetHeaders((__int64 *)a2, v7, v34);
  if ( ImageRequiredSigningLevel < 0 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 4;
    goto LABEL_87;
  }
  v12 = *v3;
  if ( (*v3 & 0x80u) == 0 )
  {
    if ( (v12 & 0x20) != 0 )
    {
      v13 = 1;
    }
    else if ( (v12 & 0x10) != 0 )
    {
      v13 = (*v3 & 0x800) != 0 ? 8 : 2;
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    v13 = 4;
  }
  v43 = 0;
  v14 = v13 | 0x10;
  v15 = 0;
  if ( (v12 & 0x400) == 0 )
    v14 = v13;
  v16 = *v3;
  if ( (v12 & 0x2200) != 0 && (v12 & 0x10) == 0 )
  {
    LOBYTE(v45) = 0;
    Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
    ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(Object, (__int64)&v45);
    if ( ImageRequiredSigningLevel < 0 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 7;
      goto LABEL_87;
    }
    v16 = *v3;
    if ( (*v3 & 0x400) == 0 )
    {
      if ( v8 && (Flink & 0x800000) != 0 )
        v15 = 1;
      if ( (Flink & 0x1000000) != 0 )
      {
        v43 = 8;
      }
      else if ( (Flink & 0x2000000) != 0 )
      {
        v43 = 6;
      }
    }
    v8 = v45;
    *((_BYTE *)v3 + 24) = v45;
  }
  if ( (v16 & 0x40000) != 0 )
  {
    v18 = v8;
    v14 |= 0x40000000u;
    if ( !v8 )
      v18 = 4;
    v8 = v18;
    LOBYTE(v45) = v18;
  }
  v19 = v14 | 0x20000000;
  if ( (v16 & 0x100000) == 0 )
    v19 = v14;
  IsEnabledDeviceUsageNoInline = Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline();
  v21 = *v3;
  if ( IsEnabledDeviceUsageNoInline && (v21 & 0x4000000) != 0 )
    v19 |= 0x200000u;
  if ( (MiFlags & 0x80000) != 0 )
  {
    v21 |= 0x2000u;
    *v3 = v21;
    if ( !v8 )
    {
      v8 = 1;
      LOBYTE(v45) = 1;
    }
  }
  if ( (v21 & 0x2000) == 0 )
  {
    if ( (v21 & 0x200) == 0 )
      goto LABEL_53;
    if ( !v8 && *(char *)(v38 + 46) >= 0 )
      goto LABEL_51;
  }
  v15 |= 2u;
  if ( (v21 & 0x200) != 0 )
  {
LABEL_51:
    if ( v43 )
      v15 |= 4u;
  }
LABEL_53:
  v35 = 0;
  LODWORD(v38) = (v21 >> 5) & 1;
  v22 = (v21 >> 26) & 2;
  if ( (*(_DWORD *)(a2 + 56) & 0x30000000) != 0 )
  {
    DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase((PFILE_OBJECT)Object);
    ImageRequiredSigningLevel = DirectImageOriginalBase;
    if ( DirectImageOriginalBase >= 0 )
    {
      v24 = v37;
      goto LABEL_60;
    }
    if ( DirectImageOriginalBase != -1073741637 && DirectImageOriginalBase != -1073741808 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 8;
      goto LABEL_87;
    }
  }
  v24 = -1LL;
  v37 = -1LL;
LABEL_60:
  v25 = v34[0];
  if ( (v15 & 6) == 0 )
  {
LABEL_75:
    ImageRequiredSigningLevel = MiRelocateImage(v41, (__int64)v40, v36, v38, v24, v22);
    if ( ImageRequiredSigningLevel < 0 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 11;
      goto LABEL_87;
    }
    if ( v25 )
      MiMakeImageReadOnly(a2, v28, v29);
    goto LABEL_78;
  }
  if ( v24 == -1 )
  {
    if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(a2 + 56) & 0x30000000) != 0x10000000 )
      goto LABEL_69;
    v24 = v37;
  }
  ImageRequiredSigningLevel = MiRelocateImage(v41, (__int64)v40, v36, v38, v24, v22);
  if ( ImageRequiredSigningLevel < 0 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 9;
    goto LABEL_87;
  }
  v35 = 1;
  if ( v25 )
    MiMakeImageReadOnly(a2, v26, v27);
LABEL_69:
  if ( (*v3 & 0x2000000) != 0 )
    v15 |= 8u;
  ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                0,
                                (__int64)Object,
                                a2,
                                v3[42],
                                *((_QWORD *)v3 + 20),
                                v19,
                                v15,
                                v45,
                                v43);
  if ( ImageRequiredSigningLevel < 0 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 10;
    goto LABEL_87;
  }
  if ( !v35 )
  {
    v24 = v37;
    goto LABEL_75;
  }
LABEL_78:
  for ( i = (__int64 *)a1[26]; i; i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 10) & 4) == 0 )
    {
      v31 = i + 6;
      for ( j = *((_DWORD *)i + 10) >> 12; j; --j )
      {
        if ( *v31 != -1 )
          MiFinalizeImageHeaderPage(*v31);
        ++v31;
      }
    }
  }
  MiDeleteImageCreationMdls((PMDL)a1[26], 0);
  *a3 = MiReleaseImageSectionWaiters((__int64)Object, a2);
  return 0LL;
}
