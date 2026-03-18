/*
 * XREFs of NtGdiHLSurfGetInformation @ 0x14017FAC0
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmGetDirtyRgn @ 0x14008D37C (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1400949E4 (GreDwmGetSurfaceData.c)
 *     GreDwmGetRedirectionStyle @ 0x140322D94 (GreDwmGetRedirectionStyle.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiHLSurfGetInformation(Gre::Base *a1, int a2, ULONG64 a3, ULONG64 a4)
{
  _DWORD *v4; // r13
  void *v5; // r15
  NTSTATUS v8; // ebx
  unsigned int *v9; // rax
  unsigned int v10; // edx
  size_t v11; // r14
  int v12; // esi
  const void *v13; // rdx
  int v14; // edi
  int v15; // edi
  NTSTATUS SurfaceData; // eax
  unsigned int v17; // edi
  int v19; // edi
  Gre::Base *HDEV; // rax
  HDEV v21; // rax
  ULONG v22; // eax
  __int128 Src; // [rsp+58h] [rbp-50h] BYREF
  HRGN v24[2]; // [rsp+68h] [rbp-40h] BYREF
  __int128 v25; // [rsp+78h] [rbp-30h] BYREF
  __int64 v26; // [rsp+88h] [rbp-20h] BYREF

  v4 = (_DWORD *)a4;
  v5 = (void *)a3;
  v8 = -1073741811;
  Src = 0LL;
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( a2 >= 11 )
    goto LABEL_33;
  v9 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  switch ( a2 )
  {
    case 3:
      if ( !a3 )
        goto LABEL_34;
      v11 = 48LL;
      if ( v10 >= 0x30 )
      {
        v12 = 48;
        goto LABEL_13;
      }
      goto LABEL_38;
    case 4:
      goto LABEL_8;
    case 6:
      if ( !a3 )
        goto LABEL_34;
      v12 = 32;
      if ( v10 >= 0x20 )
      {
        v11 = 32LL;
        goto LABEL_13;
      }
LABEL_38:
      v8 = -1073741306;
      goto LABEL_34;
  }
  if ( a2 != 9 )
  {
LABEL_33:
    v8 = -1073741821;
    goto LABEL_34;
  }
LABEL_8:
  if ( !a3 )
  {
LABEL_34:
    v17 = 0;
    goto LABEL_23;
  }
  v11 = 56LL;
  if ( v10 < 0x38 )
    goto LABEL_38;
  v12 = 56;
  v13 = (const void *)a3;
  if ( a3 >= MmUserProbeAddress )
    v13 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v13, 0x38uLL);
LABEL_13:
  v14 = a2 - 3;
  if ( !v14 )
  {
    HDEV = (Gre::Base *)UserGetHDEV();
    SurfaceData = GreDwmGetSurfaceData(HDEV, (HLSURF)a1, (struct tagDWMSURFACEDATA *)&Src);
    goto LABEL_16;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    SurfaceData = GreSfmGetDirtyRgn(a1, Src, (HRGN *)&Src + 1, v24, 0LL, 0LL, 0LL, (int *)&v26, (int *)&v26 + 1);
LABEL_16:
    v8 = SurfaceData;
    goto LABEL_17;
  }
  v19 = v15 - 2;
  if ( !v19 )
  {
    v21 = (HDEV)UserGetHDEV();
    SurfaceData = GreDwmGetRedirectionStyle(v21, (HLSURF)a1, (enum _HLSURF_REDIRECTIONSTYLE *)&Src);
    goto LABEL_16;
  }
  if ( v19 == 3 )
  {
    SurfaceData = GreSfmGetDirtyRgn(
                    a1,
                    Src,
                    (HRGN *)&Src + 1,
                    v24,
                    &v24[1],
                    (HRGN *)&v25,
                    (struct _POINTL *)&v25 + 1,
                    (int *)&v26,
                    (int *)&v26 + 1);
    goto LABEL_16;
  }
LABEL_17:
  if ( v8 < 0 )
    goto LABEL_34;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v5, &Src, v11);
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_DWORD *)MmUserProbeAddress;
  *v4 = v12;
  v17 = 1;
LABEL_23:
  if ( !v17 )
  {
    v22 = RtlNtStatusToDosError(v8);
    EngSetLastError(v22);
  }
  return v17;
}
