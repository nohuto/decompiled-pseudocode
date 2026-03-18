/*
 * XREFs of KsepResolveShimHooks @ 0x1407BD5E4
 * Callers:
 *     KsepResolveApplicableShimsForDriver @ 0x1407BDDD4 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     KsepGetModuleInfoByName @ 0x1407BE6F8 (KsepGetModuleInfoByName.c)
 */

__int64 __fastcall KsepResolveShimHooks(__int64 a1, int *a2)
{
  int v4; // r15d
  int *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdi
  unsigned int i; // r12d
  __int64 v13; // rax
  _DWORD *v14; // r8
  __int64 v15; // rdx
  int v16; // r11d
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  unsigned __int8 *v21; // r9
  unsigned __int64 v22; // r13
  int v23; // r10d
  int v24; // edx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int8 *v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  unsigned int v29; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v30 = 0LL;
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
    v9 = *(_QWORD *)(a1 + 24);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *(_QWORD *)(a1 + 320);
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    result = KsepGetModuleInfoByName(*((PCWSTR *)v5 + 1));
    if ( (int)result < 0 )
      return result;
    v9 = v30;
    goto LABEL_16;
  }
  if ( v8 != 1 )
    return 3221225485LL;
  v9 = 0LL;
LABEL_15:
  v30 = v9;
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
  v27 = *(unsigned __int8 **)(v11 + 8);
  v29 = 0;
  v13 = RtlImageDirectoryEntryToData(v9, 1, 0, &v29);
  v14 = (_DWORD *)v13;
  if ( v13 )
  {
    v15 = *(unsigned int *)(v13 + 32);
    v16 = 0;
    v17 = *(unsigned int *)(v13 + 36);
    v18 = v9 + v15;
    v31 = v18;
    v28 = v9 + v17;
    v19 = v14[6] - 1;
    while ( v19 >= v16 )
    {
      v20 = (v16 + v19) >> 1;
      v21 = v27;
      v22 = v9 + *(unsigned int *)(v18 + 4LL * v20) - (_QWORD)v27;
      do
      {
        v23 = v21[v22];
        v24 = *v21 - v23;
        if ( v24 )
          break;
        ++v21;
      }
      while ( v23 );
      if ( v24 >= 0 )
      {
        if ( v24 <= 0 )
        {
          v25 = *(unsigned __int16 *)(v28 + 2LL * v20);
          if ( (unsigned int)v25 < v14[5] )
          {
            v26 = v9 + *(unsigned int *)(v9 + (unsigned int)v14[7] + 4 * v25);
            if ( v26 <= (unsigned __int64)v14 || v26 >= (unsigned __int64)v14 + v29 )
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
