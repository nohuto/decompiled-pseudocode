/*
 * XREFs of MmGetSystemRoutineAddress @ 0x140A8B460
 * Callers:
 *     HalpCmciLoadThresholdConfiguration @ 0x14050DE04 (HalpCmciLoadThresholdConfiguration.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140595968 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcGetLoadConfiguration @ 0x140595D68 (HalpMcGetLoadConfiguration.c)
 *     HalpMcGetRollbackRequest @ 0x140595E28 (HalpMcGetRollbackRequest.c)
 *     DifMmGetSystemRoutineAddressWrapper @ 0x14066ABC0 (DifMmGetSystemRoutineAddressWrapper.c)
 *     HalpPmuArbiterQueryRegistryQuantum @ 0x140784378 (HalpPmuArbiterQueryRegistryQuantum.c)
 *     HalpDmaCvmQueryRegistryKeys @ 0x140CB65D0 (HalpDmaCvmQueryRegistryKeys.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MiEnableExportCallers @ 0x140A8B640 (MiEnableExportCallers.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  char *v1; // rdi
  PUNICODE_STRING v2; // rsi
  char *v3; // r8
  char *v4; // rbx
  int v5; // r14d
  int v6; // edx
  unsigned __int16 Length; // bp
  wchar_t *Buffer; // r11
  int v9; // r9d
  __int64 v10; // r13
  char *v11; // r10
  wchar_t v12; // ax
  int v13; // esi
  int v14; // ecx
  __int64 v15; // r13
  wchar_t v16; // cx
  int v17; // eax
  __int64 v18; // rax
  char *v20; // rdi
  char *v21; // rax
  char *v22; // r8
  int v23; // r14d
  char *v24; // r12
  char *v25; // r15
  PUNICODE_STRING v26; // r13
  int v27; // r9d
  unsigned __int16 v28; // si
  wchar_t *v29; // r11
  int v30; // ecx
  char *v31; // r10
  wchar_t v32; // ax
  int v33; // ebp
  int v34; // edx
  __int64 v35; // r13
  wchar_t v36; // dx
  int v37; // eax
  unsigned int v38; // ecx
  ULONG Size; // [rsp+68h] [rbp+10h] BYREF
  char *v41; // [rsp+70h] [rbp+18h]

  v1 = (char *)PsNtosImageBase;
  v2 = SystemRoutineName;
  Size = 0;
  v3 = (char *)RtlImageDirectoryEntryToData(PsNtosImageBase, 1u, 0, &Size);
  v4 = 0LL;
  v41 = 0LL;
  if ( v3 )
  {
    v5 = 0;
    v6 = *((_DWORD *)v3 + 6) - 1;
    while ( v6 >= v5 )
    {
      Length = v2->Length;
      Buffer = v2->Buffer;
      v9 = (v5 + v6) >> 1;
      v10 = v9;
      v11 = &v1[*(unsigned int *)&v1[4 * v9 + *((unsigned int *)v3 + 8)]];
      if ( v2->Length < 2u )
        v12 = 0;
      else
        v12 = *Buffer;
      v13 = (unsigned __int8)*v11;
      v14 = v12 - v13;
      if ( v12 == v13 )
      {
        v15 = (unsigned int)(v14 + 2);
        do
        {
          if ( !(_BYTE)v13 )
            break;
          Buffer = (wchar_t *)((char *)Buffer + v15);
          ++v11;
          Length -= 2;
          v16 = Length < (unsigned __int16)v15 ? 0 : *Buffer;
          LOBYTE(v13) = *v11;
          v14 = v16 - (unsigned __int8)*v11;
        }
        while ( !v14 );
        v4 = v41;
        v10 = v9;
      }
      v17 = (v14 > 0) - ((unsigned int)v14 >> 31);
      if ( v17 < 0 )
      {
        if ( !v9 )
          goto LABEL_25;
        v6 = v9 - 1;
      }
      else
      {
        if ( v17 <= 0 )
        {
          v18 = *(unsigned __int16 *)&v1[2 * v10 + *((unsigned int *)v3 + 9)];
          if ( (unsigned int)v18 >= *((_DWORD *)v3 + 5) )
            break;
          v4 = &v1[*(unsigned int *)&v1[4 * v18 + *((unsigned int *)v3 + 7)]];
          if ( v4 <= v3 || v4 >= &v3[Size] )
            break;
          goto LABEL_25;
        }
        v5 = v9 + 1;
      }
      v2 = SystemRoutineName;
    }
  }
  if ( !v4 )
  {
LABEL_25:
    v20 = (char *)PsHalImageBase;
    Size = 0;
    v21 = (char *)RtlImageDirectoryEntryToData(PsHalImageBase, 1u, 0, &Size);
    v41 = v21;
    v22 = v21;
    v4 = 0LL;
    if ( v21 )
    {
      v23 = 0;
      v24 = &v20[*((unsigned int *)v21 + 8)];
      v25 = &v20[*((unsigned int *)v21 + 9)];
      v26 = SystemRoutineName;
      v27 = *((_DWORD *)v21 + 6) - 1;
      while ( v27 >= v23 )
      {
        v28 = v26->Length;
        v29 = v26->Buffer;
        v30 = (v23 + v27) >> 1;
        v31 = &v20[*(unsigned int *)&v24[4 * v30]];
        if ( v26->Length < 2u )
          v32 = 0;
        else
          v32 = *v29;
        v33 = (unsigned __int8)*v31;
        v34 = v32 - v33;
        if ( v32 == v33 )
        {
          v35 = (unsigned int)(v34 + 2);
          do
          {
            if ( !(_BYTE)v33 )
              break;
            v29 = (wchar_t *)((char *)v29 + v35);
            ++v31;
            v28 -= 2;
            v36 = v28 < (unsigned __int16)v35 ? 0 : *v29;
            LOBYTE(v33) = *v31;
            v34 = v36 - (unsigned __int8)*v31;
          }
          while ( !v34 );
          v22 = v41;
          v26 = SystemRoutineName;
        }
        v37 = (v34 > 0) - ((unsigned int)v34 >> 31);
        if ( v37 >= 0 )
        {
          if ( v37 <= 0 )
          {
            v38 = *(unsigned __int16 *)&v25[2 * v30];
            if ( v38 < *((_DWORD *)v22 + 5) )
            {
              v4 = &v20[*(unsigned int *)&v20[4 * v38 + *((unsigned int *)v22 + 7)]];
              if ( v4 > v22 && v4 < &v22[Size] )
                return 0LL;
            }
            break;
          }
          v23 = v30 + 1;
        }
        else
        {
          if ( !v30 )
            return 0LL;
          v27 = v30 - 1;
        }
      }
    }
    if ( !v4 )
      return 0LL;
  }
  if ( (int)MiEnableExportCallers(v4) < 0 )
    return 0LL;
  return v4;
}
