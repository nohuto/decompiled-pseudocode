/*
 * XREFs of ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x14007DFBC
 * Callers:
 *     NtGdiCreateSessionMappedDIBSection @ 0x14007BBA0 (NtGdiCreateSessionMappedDIBSection.c)
 *     NtGdiCreateDIBSection @ 0x14007BFA0 (NtGdiCreateDIBSection.c)
 *     NtGdiStretchDIBitsInternal @ 0x14007C4E0 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x14007DD60 (NtGdiCreateDIBitmapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCaptureBitmapInfo(struct tagBITMAPINFO *a1, int a2, unsigned int a3, struct tagBITMAPINFO **a4)
{
  unsigned int v4; // esi
  struct tagBITMAPINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  DWORD biSize; // r10d
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  DWORD v18; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx

  v4 = 4;
  if ( a3 < 4 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  if ( a3 > 0x2710000 )
    return 0LL;
  v9 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag(a3, 1886221383LL, 0LL);
  *a4 = v9;
  if ( !v9 )
    return 0LL;
  GreProbeAndReadFromUntrustedVa(v9, a3, a1, a3, 1uLL);
  v12 = (__int64)*a4;
  biSize = (*a4)->bmiHeader.biSize;
  if ( a3 < biSize || biSize < 0x28 || !v12 )
    goto LABEL_22;
  v14 = *(_DWORD *)(v12 + 16);
  v10 = *(unsigned int *)(v12 + 32);
  v11 = 2LL;
  v15 = *(unsigned __int16 *)(v12 + 14);
  if ( v14 != 3 )
  {
    if ( !v14 )
    {
      if ( v15 != 1 )
      {
        if ( v15 != 4 )
        {
          if ( v15 != 8 )
          {
            v20 = 0;
            if ( a2 != 1 )
              v20 = a2;
            a2 = v20;
            v17 = 0;
            if ( v15 != 16 && v15 != 24 && v15 != 32 )
              goto LABEL_22;
            goto LABEL_15;
          }
LABEL_51:
          v17 = 256;
          goto LABEL_15;
        }
LABEL_57:
        v17 = 16;
        goto LABEL_15;
      }
LABEL_39:
      v17 = 2;
      goto LABEL_15;
    }
    if ( v14 == 10 )
    {
      v21 = v15 - 1;
      if ( !v21 )
        goto LABEL_39;
      v22 = v21 - 3;
      if ( !v22 )
        goto LABEL_57;
      v23 = v22 - 4;
      if ( !v23 )
        goto LABEL_51;
      if ( v23 == 24 )
      {
LABEL_55:
        v17 = 0;
        goto LABEL_15;
      }
LABEL_22:
      FreeThreadBufferWithTag(*a4, v10, v11);
      *a4 = 0LL;
      return 0LL;
    }
    if ( v14 != 2 )
    {
      if ( v14 == 1 )
        goto LABEL_50;
      if ( v14 != 12 )
      {
        if ( v14 != 11 )
        {
          if ( (unsigned int)(v14 - 4) <= 1 )
            goto LABEL_55;
          goto LABEL_22;
        }
LABEL_50:
        if ( v15 == 8 )
          goto LABEL_51;
        goto LABEL_22;
      }
    }
    if ( v15 == 4 )
      goto LABEL_57;
    goto LABEL_22;
  }
  v16 = 0;
  if ( a2 != 1 )
    v16 = a2;
  a2 = v16;
  if ( v15 != 32 && v15 != 16 )
    goto LABEL_22;
  LODWORD(v10) = 3;
  if ( biSize > 0x28 )
    LODWORD(v10) = 0;
  v17 = v10;
LABEL_15:
  if ( (_DWORD)v10 )
  {
    if ( (unsigned int)v10 > v17 )
      LODWORD(v10) = v17;
  }
  else
  {
    LODWORD(v10) = v17;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v4 = 0;
    v11 = v4;
  }
  v10 = (unsigned int)(v11 * v10);
  v18 = (v10 + biSize + 3) & 0xFFFFFFFC;
  if ( v18 < biSize || a3 != v18 )
    goto LABEL_22;
  return 1LL;
}
