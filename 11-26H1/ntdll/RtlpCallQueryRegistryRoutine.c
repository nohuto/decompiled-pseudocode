/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x18005A26C
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlpQueryRegistryDirect @ 0x18005A930 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x18005AA58 (RtlpValidateKeyTrust.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18009C8A0 (RtlExpandEnvironmentStrings_U.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  unsigned int v13; // r15d
  int v14; // ecx
  int v15; // eax
  char *v16; // r12
  char *v17; // rsi
  unsigned int v18; // edi
  int v19; // ecx
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned int v22; // eax
  bool v23; // cf
  _WORD *v24; // rcx
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // ecx
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // eax
  char *v32; // rcx
  int v33; // ecx
  __int64 v34; // r13
  char *v35; // rdi
  char *v36; // r13
  __int16 v37; // ax
  __int64 v38; // rdx
  unsigned int v39; // r15d
  int RegistryDirect; // eax
  bool v41; // cc
  __int128 v43; // [rsp+40h] [rbp-28h] BYREF
  __int128 v44; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v46; // [rsp+B8h] [rbp+50h] BYREF
  _DWORD *v47; // [rsp+C0h] [rbp+58h]
  _DWORD *v48; // [rsp+C8h] [rbp+60h]

  v48 = a4;
  v8 = 0;
  v9 = (unsigned int)*a4;
  *a4 = 0;
  v11 = (unsigned __int64)a3;
  v12 = a1;
  v47 = a3;
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( a3[1] )
  {
    v14 = a3[2];
    if ( v14 != -1 )
    {
      v15 = a3[3];
      if ( v15 || a3[1] != v13 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_6:
          v13 = a3[1];
          v17 = (char *)a3 + (unsigned int)a3[2];
          v18 = a3[3];
          goto LABEL_7;
        }
        if ( v15 )
          v26 = v14 + v15;
        else
          v26 = a3[4] + 20;
        v27 = a3[4];
        v28 = v27 + 2;
        v16 = (char *)(((unsigned __int64)a3 + v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v29 = (int)(v27 + 2);
        if ( v29 >= 2 )
        {
          v46 = v9 + (_DWORD)a3;
          if ( (int)v9 + (int)a3 - (int)v16 < v28 )
          {
            result = 3221225507LL;
            *a4 = v28 + (_DWORD)v16 - (_DWORD)a3;
            return result;
          }
          memmove(v16, a3 + 5, v27);
          v30 = (unsigned int)a3[4];
          v12 = a1;
          v11 = (unsigned __int64)&v16[v29 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v47 = (_DWORD *)v11;
          v9 = v46 - (unsigned int)v11;
          *(_WORD *)&v16[v30] = 0;
          goto LABEL_6;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v23 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v23 ? 0xC0000034 : 0;
  }
  v18 = *(_DWORD *)(a2 + 48);
  v16 = *(char **)(a2 + 16);
  v17 = *(char **)(a2 + 40);
  if ( !v18 )
  {
    v24 = *(_WORD **)(a2 + 40);
    if ( v13 - 1 <= 1 )
    {
      if ( !v17 )
        return 3221225532LL;
      while ( *v24++ )
        ;
      v18 = (_DWORD)v24 - (_DWORD)v17;
    }
    else if ( v13 == 7 )
    {
      if ( !v17 )
        return 3221225532LL;
      if ( *(_WORD *)v17 )
      {
        do
        {
          while ( *v24++ )
            ;
        }
        while ( *v24 );
      }
      v18 = (_DWORD)v24 - (_DWORD)v17 + 2;
    }
  }
LABEL_7:
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v19 & 0x100) == 0 )
  {
    if ( (v19 & 0x80u) == 0 || v13 - 1 > 1 && v13 != 7 )
      goto LABEL_10;
    v23 = (v19 & 4) != 0;
    return v23 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v13 )
    return 3221225508LL;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v33 = 0;
      v34 = v18 - 4LL;
      v35 = v17;
      v36 = &v17[v34];
      if ( v17 < v36 )
      {
        do
        {
          do
          {
            v37 = *(_WORD *)v35;
            v35 += 2;
          }
          while ( v37 );
          v38 = *(unsigned int *)(a2 + 8);
          v39 = (_DWORD)v35 - (_DWORD)v17;
          if ( (v38 & 0x20) != 0 )
          {
            if ( a7 )
            {
              v33 = RtlpValidateKeyTrust(v12, v38, v9);
              if ( v33 < 0 )
                return (unsigned int)v33;
            }
            RegistryDirect = RtlpQueryRegistryDirect(1LL, v17, v39, *(_QWORD *)(a2 + 24));
            *(_QWORD *)(a2 + 24) += 16LL;
          }
          else
          {
            RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, char *, _QWORD, __int64, _QWORD))a2)(
                               v16,
                               1LL,
                               v17,
                               v39,
                               a5,
                               *(_QWORD *)(a2 + 24));
          }
          v33 = 0;
          if ( RegistryDirect != -1073741789 )
            v33 = RegistryDirect;
          if ( v33 < 0 )
            break;
          v12 = a1;
          v17 = v35;
        }
        while ( v35 < v36 );
      }
      return (unsigned int)v33;
    }
    if ( v13 == 2 )
    {
      v31 = v18 - 2;
      if ( v18 - 2 <= 0xFFFA && (v18 & 1) == 0 )
      {
        v46 = 0;
        v32 = v17;
        v44 = 0LL;
        v43 = 0LL;
        while ( v31 )
        {
          if ( *(_WORD *)v32 == 37 )
          {
            *((_QWORD *)&v44 + 1) = v17;
            WORD1(v44) = v18;
            LOWORD(v44) = v18 - 2;
            *((_QWORD *)&v43 + 1) = v11;
            LOWORD(v43) = 0;
            if ( (int)v9 <= 0 )
            {
              WORD1(v43) = 0;
            }
            else if ( (unsigned int)v9 > 0xFFFE )
            {
              WORD1(v43) = -2;
              *(_WORD *)(v11 + 65532) = 0;
            }
            else
            {
              WORD1(v43) = v9;
              *(_WORD *)(v11 + 2 * ((unsigned __int64)(int)v9 >> 1) - 2) = 0;
            }
            result = RtlExpandEnvironmentStrings_U(a6, &v44, &v43, &v46);
            v13 = 1;
            if ( (int)result >= 0 )
            {
              v17 = (char *)*((_QWORD *)&v43 + 1);
              v18 = (unsigned __int16)v43 + 2;
              break;
            }
            if ( (_DWORD)result == -1073741789 )
            {
              v41 = v46 <= 0xFFFC;
              *v48 = v46 + (_DWORD)v47 - (_DWORD)a3;
              if ( v41 && WORD1(v43) != 0xFFFE )
                return result;
            }
            else if ( (_DWORD)result != -2147483643 )
            {
              return result;
            }
            break;
          }
          v32 += 2;
          v31 -= 2;
        }
      }
    }
  }
  v20 = *(unsigned int *)(a2 + 8);
  if ( (v20 & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(a1, v20, v9);
      if ( (int)result < 0 )
        return result;
    }
    v22 = RtlpQueryRegistryDirect(v13, v17, v18, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, _QWORD))a2)(
            v16,
            v13,
            v17,
            v18,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v22 != -1073741789 )
    return v22;
  return v8;
}
