/*
 * XREFs of MiRelocateImage @ 0x14099B784
 * Callers:
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiCreateFileOnlyImageFixupExtents @ 0x140500CE0 (MiCreateFileOnlyImageFixupExtents.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x14099B3C4 (MiUpdateImageSystemWideBitmaps.c)
 *     MiRelocateCleanup @ 0x14099B9E4 (MiRelocateCleanup.c)
 *     MiRelocateImagePrepare @ 0x14099BA68 (MiRelocateImagePrepare.c)
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 *     RtlInitializeSystemOverrideDelta @ 0x14099C1D4 (RtlInitializeSystemOverrideDelta.c)
 *     MiRelocateValidateFixups @ 0x14099C24C (MiRelocateValidateFixups.c)
 *     MiRelocateFinish @ 0x14099C5F4 (MiRelocateFinish.c)
 *     MiRelocateMapImage @ 0x14099CD1C (MiRelocateMapImage.c)
 */

__int64 __fastcall MiRelocateImage(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5, char a6)
{
  __int64 v10; // r13
  char v11; // si
  int FileOnlyImageFixupExtents; // ebx
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // r15
  int v16; // r9d
  int updated; // esi
  __int64 v18; // r14
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  char v28; // cl
  __int64 v29; // rdx
  _QWORD v31[2]; // [rsp+38h] [rbp-39h] BYREF
  int v32; // [rsp+48h] [rbp-29h]
  int v33; // [rsp+4Ch] [rbp-25h]
  __int64 v34; // [rsp+50h] [rbp-21h]
  int v35; // [rsp+58h] [rbp-19h]
  unsigned int v36; // [rsp+5Ch] [rbp-15h]
  unsigned int v37; // [rsp+64h] [rbp-Dh]
  __int64 v38; // [rsp+70h] [rbp-1h]
  int v39; // [rsp+80h] [rbp+Fh]
  __int64 v40; // [rsp+90h] [rbp+1Fh]

  memset_0(v31, 0, 0x60uLL);
  v10 = a5;
  v11 = a6;
  v31[0] = *a1;
  v31[1] = a2;
  v32 = a3;
  v33 = a4;
  v34 = a5;
  if ( (a6 & 1) != 0 )
    v35 |= 0x100u;
  FileOnlyImageFixupExtents = MiRelocateImagePrepare(v31);
  if ( FileOnlyImageFixupExtents != -1073741802 )
    goto LABEL_29;
  v13 = v35;
  a5 = 0LL;
  if ( (v35 & 2) != 0 )
  {
    FileOnlyImageFixupExtents = MiRelocateMapImage(v31);
    if ( FileOnlyImageFixupExtents != -1073741802 )
      goto LABEL_29;
    v13 = v35;
  }
  v14 = v38;
  v15 = v31[0];
  v16 = (v13 >> 8) & 1 | 2;
  if ( (v11 & 2) == 0 )
    v16 = (v13 >> 8) & 1;
  updated = MiSelectImageBase((_DWORD)a1, v38, a4, v16, (__int64)&a5);
  if ( updated < 0 )
  {
    MiRelocateCleanup(v31);
    if ( !a4 )
      return v36;
  }
  else
  {
    v18 = a5;
    v19 = v13 | 0x200;
    v35 = v19;
    updated = MiUpdateImageSystemWideBitmaps(v15);
    if ( updated >= 0 )
    {
      if ( (v19 & 2) != 0 )
      {
        v20 = *(_QWORD *)(v14 + 96);
        if ( v20 )
          RtlInitializeSystemOverrideDelta(
            v20,
            v18,
            v39 << 12,
            *(_QWORD *)(*(_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 4) + 32LL),
            *(_DWORD *)(*(_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 4) + 12LL));
      }
      v21 = v14 + 104;
      *(_QWORD *)(v14 + 40) = v18 - v40;
      v22 = v10 - v40;
      if ( v10 == -1 )
        v22 = 0LL;
      v23 = v19 | 0x10;
      *(_QWORD *)(v14 + 48) = v22;
      v24 = v37;
      *(_QWORD *)v14 = v21;
      v35 = v23;
      *(_QWORD *)(v14 + 32) = v21 + 8 * v24;
      v25 = v23 | 8;
      v26 = *(_QWORD *)(v14 + 88);
      if ( v26 )
        v35 = v23 | 8;
      v27 = *(_QWORD *)(v14 + 96);
      if ( !v26 )
        v25 = v23;
      v28 = v25;
      if ( v27 )
      {
        v28 = v25 | 0x80;
        v35 = v25 | 0x80;
      }
      v29 = v14;
      if ( !v27 )
        v28 = v25;
      if ( (v28 & 2) == 0 )
        goto LABEL_27;
      FileOnlyImageFixupExtents = MiRelocateValidateFixups(v31, v14);
      if ( FileOnlyImageFixupExtents == -1073741802 )
      {
        v14 = v38;
        v29 = v38;
LABEL_27:
        *(_QWORD *)(*(_QWORD *)v14 + 8 * ((unsigned __int64)*(unsigned int *)(v14 + 60) >> 12)) = *(_QWORD *)(*(_QWORD *)v14 + 8 * ((unsigned __int64)*(unsigned int *)(v14 + 60) >> 12) + 8 * ((unsigned __int64)*(unsigned int *)(v14 + 60) >> 12)) | 1LL;
        if ( (*(_DWORD *)(v15 + 56) & 0x30000000) != 0x10000000
          || (FileOnlyImageFixupExtents = MiCreateFileOnlyImageFixupExtents((volatile LONG *)v15, v29),
              FileOnlyImageFixupExtents >= 0) )
        {
          FileOnlyImageFixupExtents = MiRelocateFinish(v31, v18);
        }
      }
LABEL_29:
      MiRelocateCleanup(v31);
      return (unsigned int)FileOnlyImageFixupExtents;
    }
    MiRelocateCleanup(v31);
  }
  return (unsigned int)updated;
}
