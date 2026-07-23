/*
 * XREFs of KsepResolveShimHooks @ 0x1407C0644
 * Callers:
 *     KsepResolveApplicableShimsForDriver @ 0x1407C0E34 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     KsepGetModuleInfoByName @ 0x1407C1758 (KsepGetModuleInfoByName.c)
 */

__int64 __fastcall KsepResolveShimHooks(__int64 a1, int *a2)
{
  int v4; // r15d
  int *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdi
  unsigned int i; // r12d
  char *v13; // rax
  char *v14; // r8
  __int64 v15; // rdx
  int v16; // r11d
  __int64 v17; // rax
  char *v18; // rdx
  int v19; // eax
  int v20; // ecx
  char *v21; // r9
  char *v22; // r13
  int v23; // r10d
  int v24; // edx
  __int64 v25; // rax
  char *v26; // rcx
  char *v27; // [rsp+20h] [rbp-58h]
  char *v28; // [rsp+28h] [rbp-50h]
  ULONG Size; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseOfImage; // [rsp+90h] [rbp+18h]
  char *v31; // [rsp+98h] [rbp+20h]

  BaseOfImage = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = 0;
  v5 = a2;
LABEL_4:
  if ( !v5 )
    return 0LL;
  v6 = *v5;
  if ( *v5 == 4 )
    return 0LL;
  if ( !v6 )
  {
    v9 = *(char **)(a1 + 24);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *(char **)(a1 + 320);
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    result = KsepGetModuleInfoByName(*((PCWSTR *)v5 + 1));
    if ( (int)result < 0 )
      return result;
    v9 = (char *)BaseOfImage;
    goto LABEL_16;
  }
  if ( v8 != 1 )
    return 3221225485LL;
  v9 = 0LL;
LABEL_15:
  BaseOfImage = v9;
LABEL_16:
  v11 = *((_QWORD *)v5 + 2);
  for ( i = 0; ; v11 = *((_QWORD *)v5 + 2) + 32LL * i )
  {
    if ( !v11 || *(_DWORD *)v11 == 2 )
    {
      v5 = &a2[6 * ++v4];
      goto LABEL_4;
    }
    if ( !*(_DWORD *)v11 )
      break;
LABEL_37:
    ++i;
  }
  v27 = *(char **)(v11 + 8);
  Size = 0;
  v13 = (char *)RtlImageDirectoryEntryToData(v9, 1u, 0, &Size);
  v14 = v13;
  if ( v13 )
  {
    v15 = *((unsigned int *)v13 + 8);
    v16 = 0;
    v17 = *((unsigned int *)v13 + 9);
    v18 = &v9[v15];
    v31 = v18;
    v28 = &v9[v17];
    v19 = *((_DWORD *)v14 + 6) - 1;
    while ( v19 >= v16 )
    {
      v20 = (v16 + v19) >> 1;
      v21 = v27;
      v22 = (char *)(&v9[*(unsigned int *)&v18[4 * v20]] - v27);
      do
      {
        v23 = (unsigned __int8)v22[(_QWORD)v21];
        v24 = (unsigned __int8)*v21 - v23;
        if ( v24 )
          break;
        ++v21;
      }
      while ( v23 );
      if ( v24 >= 0 )
      {
        if ( v24 <= 0 )
        {
          v25 = *(unsigned __int16 *)&v28[2 * v20];
          if ( (unsigned int)v25 < *((_DWORD *)v14 + 5) )
          {
            v26 = &v9[*(unsigned int *)&v9[4 * v25 + *((unsigned int *)v14 + 7)]];
            if ( v26 <= v14 || v26 >= &v14[Size] )
            {
              if ( v26 )
              {
                *(_QWORD *)(v11 + 24) = v26;
                goto LABEL_37;
              }
            }
          }
          return 3221225473LL;
        }
        v16 = v20 + 1;
      }
      else
      {
        if ( !v20 )
          return 3221225473LL;
        v19 = v20 - 1;
      }
      v18 = v31;
    }
  }
  return 3221225473LL;
}
