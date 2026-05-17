/*
 * XREFs of LdrpGetProcedureAddress @ 0x180046820
 * Callers:
 *     LdrpApplyPatchImage @ 0x18007115C (LdrpApplyPatchImage.c)
 *     LdrpCorInitialize @ 0x1800BE60C (LdrpCorInitialize.c)
 *     LdrpResolveProcedureAddress @ 0x1800C5A40 (LdrpResolveProcedureAddress.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrHotPatchNotify @ 0x18015B900 (LdrHotPatchNotify.c)
 *     LdrpBuildImportRedirection @ 0x18015E1F0 (LdrpBuildImportRedirection.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 a1, const char *a2, int a3, unsigned __int64 *a4)
{
  int v4; // r14d
  unsigned int v8; // r13d
  bool v9; // bp
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int16 v13; // ax
  __int64 v14; // rax
  _DWORD *v15; // rdi
  int v16; // esi
  int v17; // r10d
  int i; // eax
  int v19; // eax
  int v20; // ebx
  __int64 v21; // r9
  int v22; // edx
  unsigned int v23; // esi
  unsigned __int64 v24; // rcx
  __int64 v26; // r10
  unsigned int v27; // r8d
  unsigned int *v28; // rdx
  __int64 v29; // r9
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 *v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v4 = 0;
  v30 = 0LL;
  v8 = 0;
  v9 = 1;
  v10 = a1;
  v11 = 0LL;
  if ( (a1 & 2) != 0 || (a1 & 1) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = !(a1 & 1);
  }
  v12 = RtlImageNtHeaderEx(1LL, v10, 0LL, &v30);
  if ( v30 )
  {
    v13 = *(_WORD *)(v30 + 24);
    if ( v13 != 267 )
    {
      if ( v13 != 523 )
        return 3221225594LL;
      if ( !*(_DWORD *)(v30 + 132) )
      {
        v12 = -1073741811;
        goto LABEL_11;
      }
      v14 = *(unsigned int *)(v30 + 136);
      if ( !(_DWORD)v14 )
      {
        v12 = -1073741822;
        goto LABEL_11;
      }
      v8 = *(_DWORD *)(v30 + 140);
      if ( !v9 && (unsigned int)v14 >= *(_DWORD *)(v30 + 84) )
      {
        v11 = RtlAddressInSectionTable(v30, v10, (unsigned int)v14);
        v12 = 0;
        if ( !v11 )
          v12 = -1073741811;
        goto LABEL_11;
      }
      v11 = v10 + v14;
LABEL_10:
      v12 = 0;
      goto LABEL_11;
    }
    if ( !*(_DWORD *)(v30 + 116) )
    {
      v12 = -1073741811;
      goto LABEL_11;
    }
    v26 = *(unsigned int *)(v30 + 120);
    if ( !(_DWORD)v26 )
    {
      v12 = -1073741822;
      goto LABEL_11;
    }
    v8 = *(_DWORD *)(v30 + 124);
    if ( v9 || (unsigned int)v26 < *(_DWORD *)(v30 + 84) )
    {
      v11 = v10 + v26;
      goto LABEL_10;
    }
    v27 = 0;
    v28 = (unsigned int *)(v30 + *(unsigned __int16 *)(v30 + 20) + 24LL);
    while ( v27 < *(unsigned __int16 *)(v30 + 6) )
    {
      v29 = v28[3];
      if ( (unsigned int)v26 >= (unsigned int)v29 && (unsigned int)v26 < (unsigned int)v29 + v28[4] )
      {
        v11 = v10 + v28[5] - v29 + v26;
        if ( v11 )
        {
          v12 = 0;
          goto LABEL_11;
        }
        break;
      }
      v28 += 10;
      ++v27;
    }
    v12 = -1073741811;
  }
LABEL_11:
  v15 = 0LL;
  if ( v12 >= 0 )
    v15 = (_DWORD *)v11;
  if ( !v15 )
    return 3221225594LL;
  if ( a2 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      838,
      (int)"LdrpGetProcedureAddress",
      2,
      "Locating procedure \"%s\" by name\n",
      (char)a2);
    v16 = 0;
    v17 = v15[6] - 1;
    for ( i = v17; ; i = v16 + v17 )
    {
      v19 = i / 2;
      v20 = v19;
      if ( v17 < v16 )
        break;
      v21 = v19;
      v22 = strcmp(a2, (const char *)(a1 + *(unsigned int *)(a1 + (unsigned int)v15[8] + 4LL * v19)));
      if ( !v22 )
      {
        v23 = *(unsigned __int16 *)(a1 + (unsigned int)v15[9] + 2 * v21);
        goto LABEL_19;
      }
      if ( v22 >= 0 )
        v16 = v20 + 1;
      else
        v17 = v20 - 1;
    }
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      2286,
      (int)"LdrpNameToOrdinal",
      1,
      "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
      (char)a2);
    return 3221225594LL;
  }
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrsnap.c",
    856,
    (int)"LdrpGetProcedureAddress",
    2,
    "Loading procedure 0x%lx by ordinal\n",
    a3);
  if ( !a3 )
    return 3221225485LL;
  v23 = a3 - v15[4];
LABEL_19:
  if ( v23 >= v15[5] )
  {
    LOBYTE(v4) = a2 != 0LL;
    return (unsigned int)(v4 - 1073741512);
  }
  else
  {
    v24 = a1 + *(unsigned int *)(a1 + (unsigned int)v15[7] + 4LL * (int)v23);
    *v31 = v24;
    if ( v24 >= (unsigned __int64)v15 )
      return v24 < (unsigned __int64)v15 + v8 ? 0xC000022D : 0;
    else
      return 0LL;
  }
}
