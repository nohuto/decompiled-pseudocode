/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x140A10684
 * Callers:
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpQueryRegistryDirect @ 0x140A109F8 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x140A10DD0 (RtlpValidateKeyTrust.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int *a4,
        __int64 a5,
        int a6,
        char a7)
{
  int v7; // r12d
  unsigned int v8; // ebx
  _DWORD *v9; // rsi
  unsigned int v11; // ebp
  __int64 v12; // r10
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  char *v16; // r15
  char *v17; // rdi
  unsigned int v18; // esi
  int v19; // ecx
  unsigned int v20; // eax
  __int64 result; // rax
  bool v22; // cf
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // ecx
  unsigned __int64 v26; // rdi
  int v27; // r12d
  _WORD *v28; // rcx
  int v29; // ecx
  __int64 v30; // r12
  char *v31; // rsi
  char *v32; // r12
  __int16 v33; // ax
  int RegistryDirect; // eax
  unsigned int v37; // eax
  char *v38; // rcx

  v7 = *a4;
  v8 = 0;
  *a4 = 0;
  v9 = (_DWORD *)a3;
  v11 = (unsigned __int8)*(_DWORD *)(a2 + 32);
  v12 = a1;
  v13 = *(_DWORD *)(a3 + 4);
  if ( v13 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( v14 != -1 )
    {
      v15 = *(_DWORD *)(a3 + 12);
      if ( v15 || v13 != v11 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_6:
          v11 = v9[1];
          v17 = (char *)v9 + (unsigned int)v9[2];
          v18 = v9[3];
          goto LABEL_7;
        }
        if ( v15 )
          v23 = v14 + v15;
        else
          v23 = *(_DWORD *)(a3 + 16) + 20;
        v24 = *(_DWORD *)(a3 + 16);
        v25 = v24 + 2;
        v16 = (char *)((a3 + v23 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
        v26 = (int)(v24 + 2);
        if ( v26 >= 2 )
        {
          v27 = a3 + v7;
          if ( v27 - (int)v16 < v25 )
          {
            result = 3221225507LL;
            *a4 = v25 + (_DWORD)v16 - a3;
            return result;
          }
          memmove(v16, (const void *)(a3 + 20), v24);
          v12 = a1;
          a3 = (unsigned __int64)&v16[v26 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v7 = v27 - a3;
          *(_WORD *)&v16[v9[4]] = 0;
          goto LABEL_6;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !v11 )
  {
    v22 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v22 ? 0xC0000034 : 0;
  }
  v18 = *(_DWORD *)(a2 + 48);
  v16 = *(char **)(a2 + 16);
  v17 = *(char **)(a2 + 40);
  if ( !v18 )
  {
    v28 = *(_WORD **)(a2 + 40);
    if ( v11 - 1 <= 1 )
    {
      if ( !v17 )
        return 3221225532LL;
      while ( *v28++ )
        ;
      v18 = (_DWORD)v28 - (_DWORD)v17;
    }
    else if ( v11 == 7 )
    {
      if ( !v17 )
        return 3221225532LL;
      if ( *(_WORD *)v17 )
      {
        do
        {
          while ( *v28++ )
            ;
        }
        while ( *v28 );
      }
      v18 = (_DWORD)v28 - (_DWORD)v17 + 2;
    }
  }
LABEL_7:
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v19 & 0x100) == 0 )
  {
    if ( (v19 & 0x80u) == 0 || v11 - 1 > 1 && v11 != 7 )
      goto LABEL_10;
    v22 = (v19 & 4) != 0;
    return v22 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v11 )
    return 3221225508LL;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v11 == 7 )
    {
      v29 = 0;
      v30 = v18 - 4LL;
      v31 = v17;
      v32 = &v17[v30];
      if ( v17 < v32 )
      {
        do
        {
          do
          {
            v33 = *(_WORD *)v31;
            v31 += 2;
          }
          while ( v33 );
          if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
          {
            if ( a7 )
            {
              v29 = RtlpValidateKeyTrust(v12);
              if ( v29 < 0 )
                return (unsigned int)v29;
            }
            RegistryDirect = RtlpQueryRegistryDirect(
                               1LL,
                               v17,
                               (unsigned int)((_DWORD)v31 - (_DWORD)v17),
                               *(_QWORD *)(a2 + 24));
            *(_QWORD *)(a2 + 24) += 16LL;
          }
          else
          {
            RegistryDirect = guard_dispatch_icall_no_overrides((__int64)v16, 1LL);
          }
          v29 = 0;
          if ( RegistryDirect != -1073741789 )
            v29 = RegistryDirect;
          if ( v29 < 0 )
            break;
          v12 = a1;
          v17 = v31;
        }
        while ( v31 < v32 );
      }
      return (unsigned int)v29;
    }
    if ( v11 == 2 )
    {
      v37 = v18 - 2;
      if ( v18 - 2 <= 0xFFFA && (v18 & 1) == 0 )
      {
        v38 = v17;
        while ( v37 )
        {
          if ( *(_WORD *)v38 == 37 )
          {
            if ( v7 > 0 )
            {
              if ( (unsigned int)v7 > 0xFFFE )
                *(_WORD *)(a3 + 65532) = 0;
              else
                *(_WORD *)(a3 + 2 * ((unsigned __int64)v7 >> 1) - 2) = 0;
            }
            return 3221225485LL;
          }
          v38 += 2;
          v37 -= 2;
        }
      }
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(v12);
      if ( (int)result < 0 )
        return result;
    }
    v20 = RtlpQueryRegistryDirect(v11, v17, v18, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v20 = guard_dispatch_icall_no_overrides((__int64)v16, v11);
  }
  if ( v20 != -1073741789 )
    return v20;
  return v8;
}
