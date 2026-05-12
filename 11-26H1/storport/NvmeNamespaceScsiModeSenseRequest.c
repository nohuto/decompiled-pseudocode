/*
 * XREFs of NvmeNamespaceScsiModeSenseRequest @ 0x140117FC8
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 * Callees:
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E95A0 (NvmeAdapterGetControllerLogPageSync.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceScsiModeSenseRequest(__int64 a1, void *a2, __int64 a3, _BYTE *a4)
{
  char v4; // di
  _BYTE *v8; // r14
  char v9; // r10
  unsigned int v10; // r11d
  unsigned int v11; // r9d
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // ebp
  _BYTE *v19; // rsi
  __int64 v20; // rax
  size_t v21; // rcx
  unsigned __int8 v22; // al
  int ControllerLogPageSync; // edi
  size_t v24; // r15
  __int64 v25; // rdx
  unsigned __int64 v26; // r9
  char v27; // cl
  char v28; // cl
  __int64 v29; // r8
  __int16 v30; // ax
  char v31; // cl
  char v32; // dl
  char v33; // al
  unsigned int v34; // eax
  __int64 v36; // [rsp+28h] [rbp-50h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = a2;
  v4 = *(_BYTE *)(a3 + 2);
  P = 0LL;
  v8 = 0LL;
  if ( v4 == 40 )
  {
    v9 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      v10 = *(_DWORD *)(a3 + 56);
      v11 = 0;
      if ( v10 )
      {
        while ( 1 )
        {
          v12 = *(unsigned int *)(a3 + 4LL * v11 + 120);
          if ( (unsigned int)v12 >= 0x80 )
          {
            v13 = *(unsigned int *)(a3 + 16);
            if ( (unsigned int)v12 < (unsigned int)v13 )
              break;
          }
LABEL_11:
          if ( ++v11 >= v10 )
            goto LABEL_12;
        }
        v14 = (unsigned int)v12;
        v15 = *(_DWORD *)(v12 + a3) - 64;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            if ( v14 + 56 <= v13 )
              v9 = 1;
            goto LABEL_10;
          }
          if ( v16 != 1 )
            goto LABEL_10;
        }
        if ( v14 + 40 <= v13 )
          goto LABEL_12;
LABEL_10:
        if ( v9 )
          goto LABEL_12;
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  v17 = 64LL;
  v18 = 4;
  if ( v4 != 40 )
    v17 = 24LL;
  v19 = *(_BYTE **)(v17 + a3);
  v20 = 60LL;
  if ( v4 != 40 )
    v20 = 16LL;
  if ( *a4 != 26 )
    v18 = 8;
  v21 = *(unsigned int *)(v20 + a3);
  v22 = a4[2];
  if ( v22 >= 0x40u )
  {
    SetSrbSenseData(a3, 6, 5, 36, 0);
    return (unsigned int)-1073741808;
  }
  if ( v19 && (unsigned int)v21 >= v18 )
  {
    if ( v22 != 63 && v22 != 8 )
    {
      SetSrbSenseData(a3, 6, 5, 36, 0);
      return (unsigned int)-1073741811;
    }
    if ( (unsigned int)v21 - v18 < 0xC )
    {
      SetSrbSenseData(a3, 18, 5, 36, 0);
      return (unsigned int)-1073741811;
    }
    v24 = v21;
    memset_0(v19, 0, v21);
    ControllerLogPageSync = NvmeAdapterGetControllerLogPageSync(
                              *(_QWORD *)(a1 + 16),
                              v25,
                              2u,
                              0x200u,
                              0LL,
                              v36,
                              1,
                              &P,
                              0LL,
                              0LL);
    if ( ControllerLogPageSync >= 0 )
    {
      v26 = v18 + 20LL;
      if ( *a4 == 26 )
      {
        v27 = v19[2];
        v19[1] = 0;
        v8 = P;
        v28 = v27 | 0x10;
        v19[2] = v28;
        *v19 = v18 + (v24 < v26 ? -9 : -1) + 20;
        if ( (*v8 & 8) != 0 )
          v19[2] = v28 | 0x80;
        v29 = 4LL;
      }
      else
      {
        v19[2] = 0;
        v8 = P;
        v30 = v18 + (v24 < v26 ? -10 : -2) + 20;
        v19[1] = v30;
        *v19 = HIBYTE(v30);
        v31 = v19[3] | 0x10;
        v19[3] = v31;
        if ( (*v8 & 8) != 0 )
          v19[3] = v31 | 0x80;
        v29 = 8LL;
      }
      v19[v29 + 2] &= ~1u;
      v32 = v19[v29 + 2];
      v33 = v19[v29] & 0x40 | 8;
      v19[v29 + 1] = 10;
      v19[v29] = v33;
      v19[v29 + 2] = v32 ^ (v32 ^ (4 * ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 16) + 136LL) >> 19))) & 4;
      v34 = v18 + (v24 < v26 ? 12 : 20);
      if ( *(_BYTE *)(a3 + 2) == 40 )
        *(_DWORD *)(a3 + 60) = v34;
      else
        *(_DWORD *)(a3 + 16) = v34;
      *(_BYTE *)(a3 + 3) = 1;
      ControllerLogPageSync = 0;
    }
    else
    {
      v8 = P;
      *(_BYTE *)(a3 + 3) = 4;
    }
  }
  else
  {
    SetSrbSenseData(a3, 6, 5, 36, 0);
    ControllerLogPageSync = -1073741811;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x52436152u);
  return (unsigned int)ControllerLogPageSync;
}
