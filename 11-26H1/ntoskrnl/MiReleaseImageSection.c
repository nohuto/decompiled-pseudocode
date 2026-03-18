/*
 * XREFs of MiReleaseImageSection @ 0x140A579A4
 * Callers:
 *     MiCreateNewSection @ 0x140A562D8 (MiCreateNewSection.c)
 * Callees:
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiMakeImageReadOnly @ 0x1404BE4AC (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C7B8C (MiFinalizeImageHeaderPage.c)
 *     MiReleaseImageSectionWaiters @ 0x1404D6EB4 (MiReleaseImageSectionWaiters.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140615670 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     MiRelocateImage @ 0x1409CA7A4 (MiRelocateImage.c)
 *     MiValidateSectionSigningPolicy @ 0x1409CB78C (MiValidateSectionSigningPolicy.c)
 *     MiParseComAndCetHeaders @ 0x1409CC26C (MiParseComAndCetHeaders.c)
 *     MiDeleteImageCreationMdls @ 0x140A5620C (MiDeleteImageCreationMdls.c)
 *     SeGetImageRequiredSigningLevel @ 0x140A8876C (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140B54250 (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiReleaseImageSection(__int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned int *v3; // rsi
  struct _FILE_OBJECT *v6; // rcx
  unsigned int *v7; // rdi
  char v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  int ImageRequiredSigningLevel; // ebx
  int v12; // r8d
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // edi
  char v16; // r12
  unsigned int v17; // ecx
  int Flink; // r14d
  char v19; // al
  int v20; // r14d
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v22; // edi
  int v23; // edi
  int DirectImageOriginalBase; // eax
  __int64 v25; // rax
  char v26; // r13
  __int64 *i; // rbx
  __int64 *v28; // rsi
  int j; // edi
  _BYTE v31[4]; // [rsp+50h] [rbp-29h] BYREF
  int v32; // [rsp+54h] [rbp-25h]
  int v33; // [rsp+58h] [rbp-21h]
  __int64 v34; // [rsp+60h] [rbp-19h]
  __int64 v35; // [rsp+68h] [rbp-11h]
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-9h]
  __int64 *v37; // [rsp+78h] [rbp-1h]
  _QWORD *v38; // [rsp+80h] [rbp+7h]
  char v40; // [rsp+E8h] [rbp+6Fh]
  char v42; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = (unsigned int *)*a1;
  v34 = 0LL;
  v31[0] = 0;
  v6 = (struct _FILE_OBJECT *)*((_QWORD *)v3 + 7);
  v7 = (unsigned int *)(a1 + 1);
  v8 = *((_BYTE *)v3 + 24);
  v33 = *((_DWORD *)a1 + 54);
  FileObject = v6;
  v9 = *(_QWORD *)a2;
  v37 = a1 + 1;
  v42 = v8;
  *a3 = 0LL;
  v10 = *(_QWORD *)(v9 + 56);
  v35 = v10;
  v38 = (_QWORD *)v9;
  if ( !v7[30] && !v7[31] && !*(_BYTE *)(v10 + 50) )
    *(_WORD *)(v9 + 12) |= 0x4000u;
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (*v3 & 0x40000) != 0 )
    {
      *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 5;
      ImageRequiredSigningLevel = -1073740749;
LABEL_87:
      MiDeleteImageCreationMdls((PMDL)a1[26], 1);
      return (unsigned int)ImageRequiredSigningLevel;
    }
    ImageRequiredSigningLevel = MiSetPagesModified((__int64 *)a2, v3[42]);
    if ( ImageRequiredSigningLevel < 0 )
    {
      *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 6;
      goto LABEL_87;
    }
  }
  ImageRequiredSigningLevel = MiParseComAndCetHeaders((__int64 *)a2, v7, v31);
  if ( ImageRequiredSigningLevel < 0 )
  {
    *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 4;
    goto LABEL_87;
  }
  v13 = *v3;
  if ( (*v3 & 0x80u) == 0 )
  {
    if ( (v13 & 0x20) != 0 )
    {
      v14 = 1;
    }
    else if ( (v13 & 0x10) != 0 )
    {
      v14 = (*v3 & 0x800) != 0 ? 8 : 2;
    }
    else
    {
      v14 = 0;
    }
  }
  else
  {
    v14 = 4;
  }
  v40 = 0;
  v15 = v14 | 0x10;
  v16 = 0;
  if ( (v13 & 0x400) == 0 )
    v15 = v14;
  v17 = *v3;
  if ( (v13 & 0x2200) != 0 && (v13 & 0x10) == 0 )
  {
    v42 = 0;
    LOBYTE(v12) = v8;
    Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
    ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)FileObject, v15, v12, 0, (__int64)&v42);
    if ( ImageRequiredSigningLevel < 0 )
    {
      *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 7;
      goto LABEL_87;
    }
    v17 = *v3;
    if ( (*v3 & 0x400) == 0 )
    {
      if ( v8 && (Flink & 0x800000) != 0 )
        v16 = 1;
      if ( (Flink & 0x1000000) != 0 )
      {
        v40 = 8;
      }
      else if ( (Flink & 0x2000000) != 0 )
      {
        v40 = 6;
      }
    }
    v8 = v42;
    *((_BYTE *)v3 + 24) = v42;
  }
  if ( (v17 & 0x40000) != 0 )
  {
    v19 = v8;
    v15 |= 0x40000000u;
    if ( !v8 )
      v19 = 4;
    v8 = v19;
    v42 = v19;
  }
  v20 = v15 | 0x20000000;
  if ( (v17 & 0x100000) == 0 )
    v20 = v15;
  IsEnabledDeviceUsageNoInline = Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline();
  v22 = *v3;
  if ( IsEnabledDeviceUsageNoInline && (v22 & 0x4000000) != 0 )
    v20 |= 0x200000u;
  if ( (MiFlags & 0x80000) != 0 )
  {
    v22 |= 0x2000u;
    *v3 = v22;
    if ( !v8 )
    {
      v8 = 1;
      v42 = 1;
    }
  }
  if ( (v22 & 0x2000) == 0 )
  {
    if ( (v22 & 0x200) == 0 )
      goto LABEL_53;
    if ( !v8 && *(char *)(v35 + 46) >= 0 )
      goto LABEL_51;
  }
  v16 |= 2u;
  if ( (v22 & 0x200) != 0 )
  {
LABEL_51:
    if ( v40 )
      v16 |= 4u;
  }
LABEL_53:
  v32 = 0;
  LODWORD(v35) = (v22 >> 5) & 1;
  v23 = (v22 >> 26) & 2;
  if ( (*(_DWORD *)(a2 + 56) & 0x30000000) != 0 )
  {
    DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
    ImageRequiredSigningLevel = DirectImageOriginalBase;
    if ( DirectImageOriginalBase >= 0 )
    {
      v25 = v34;
      goto LABEL_60;
    }
    if ( DirectImageOriginalBase != -1073741637 && DirectImageOriginalBase != -1073741808 )
    {
      *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 8;
      goto LABEL_87;
    }
  }
  v25 = -1LL;
  v34 = -1LL;
LABEL_60:
  v26 = v31[0];
  if ( (v16 & 6) == 0 )
  {
LABEL_75:
    ImageRequiredSigningLevel = MiRelocateImage(v38, (__int64)v37, v33, v35, v25, v23);
    if ( ImageRequiredSigningLevel < 0 )
    {
      *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 11;
      goto LABEL_87;
    }
    if ( v26 )
      MiMakeImageReadOnly(a2);
    goto LABEL_78;
  }
  if ( v25 == -1 )
  {
    if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(a2 + 56) & 0x30000000) != 0x10000000 )
      goto LABEL_69;
    v25 = v34;
  }
  ImageRequiredSigningLevel = MiRelocateImage(v38, (__int64)v37, v33, v35, v25, v23);
  if ( ImageRequiredSigningLevel < 0 )
  {
    *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 9;
    goto LABEL_87;
  }
  v32 = 1;
  if ( v26 )
    MiMakeImageReadOnly(a2);
LABEL_69:
  if ( (*v3 & 0x2000000) != 0 )
    v16 |= 8u;
  ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                0,
                                (__int64)FileObject,
                                a2,
                                v3[42],
                                *((_QWORD *)v3 + 20),
                                v20,
                                v16,
                                v42,
                                v40);
  if ( ImageRequiredSigningLevel < 0 )
  {
    *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 10;
    goto LABEL_87;
  }
  if ( !v32 )
  {
    v25 = v34;
    goto LABEL_75;
  }
LABEL_78:
  for ( i = (__int64 *)a1[26]; i; i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 10) & 4) == 0 )
    {
      v28 = i + 6;
      for ( j = *((_DWORD *)i + 10) >> 12; j; --j )
      {
        if ( *v28 != -1 )
          MiFinalizeImageHeaderPage(*v28);
        ++v28;
      }
    }
  }
  MiDeleteImageCreationMdls((PMDL)a1[26], 0);
  *a3 = MiReleaseImageSectionWaiters((__int64)FileObject, a2);
  return 0LL;
}
