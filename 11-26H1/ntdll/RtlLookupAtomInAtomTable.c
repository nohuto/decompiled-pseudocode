/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x180006500
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     NLS_UPCASE @ 0x180036DE0 (NLS_UPCASE.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 */

__int64 __fastcall RtlLookupAtomInAtomTable(__int64 a1, unsigned __int64 a2, _WORD *a3)
{
  const wchar_t *v6; // r15
  unsigned __int64 v7; // rdx
  unsigned __int16 *v8; // rbx
  unsigned int i; // r10d
  unsigned __int16 v10; // ax
  __int64 v11; // rbx
  const wchar_t *v12; // rdi
  int v13; // ebx
  unsigned __int64 v14; // rcx
  __int16 v15; // cx
  const wchar_t *v16; // rax
  const wchar_t *v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  const wchar_t *v21; // [rsp+30h] [rbp-68h] BYREF
  const wchar_t *v22; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v23; // [rsp+40h] [rbp-58h]
  __int128 v24; // [rsp+48h] [rbp-50h] BYREF
  const wchar_t *v25; // [rsp+58h] [rbp-40h]
  __int64 v26; // [rsp+60h] [rbp-38h]
  __int16 v27; // [rsp+A0h] [rbp+8h]
  int v28; // [rsp+B8h] [rbp+20h] BYREF

  v26 = a1;
  v6 = 0LL;
  if ( a1 && *(_DWORD *)a1 == 1836020801 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8);
    v25 = (const wchar_t *)a2;
    v24 = 0LL;
    v22 = 0LL;
    v28 = 0;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_WORD *)a2 == 35 )
      {
        v15 = a2 + 2;
        v25 = (const wchar_t *)(a2 + 2);
        v16 = (const wchar_t *)(a2 + 2);
        v22 = (const wchar_t *)(a2 + 2);
        v17 = (const wchar_t *)(a2 + 2);
        v7 = (unsigned __int16)(a2 + 2);
        while ( *v16 )
        {
          if ( (unsigned __int16)(*v16 - 48) > 9u )
            goto LABEL_5;
          v16 = v17 + 1;
          v22 = v16;
          ++v17;
          v7 = (unsigned __int16)v16;
        }
        v28 = 0;
        *((_QWORD *)&v24 + 1) = a2 + 2;
        LOWORD(v24) = v7 - v15;
        WORD1(v24) = v7 - v15;
        if ( (int)RtlUnicodeStringToInteger(&v24, 10LL, &v28) >= 0 )
        {
          if ( (unsigned int)(v28 - 1) > 0xBFFF )
            v27 = -16384;
          else
            v27 = v28;
          LOWORD(a2) = v27;
LABEL_40:
          if ( (unsigned __int16)a2 >= 0xC000u )
          {
            LOWORD(a2) = 0;
            v13 = -1073741811;
          }
          else
          {
            v13 = 0;
          }
          if ( a3 )
            *a3 = a2;
          goto LABEL_66;
        }
      }
    }
    else if ( (unsigned __int16)a2 < 0xC000u )
    {
      if ( !(_WORD)a2 )
        LOWORD(a2) = -16384;
      goto LABEL_40;
    }
LABEL_5:
    if ( !*(_WORD *)a2 )
    {
      v13 = -1073741773;
LABEL_66:
      RtlReleaseSRWLockExclusive(a1 + 8, v7);
      return (unsigned int)v13;
    }
    v7 = (unsigned __int64)&v21;
    v23 = 0LL;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v8 = (unsigned __int16 *)a2;
      v23 = (unsigned __int16 *)a2;
      for ( i = 0; ; i += v10 + (v10 >> 1) + 2 * v10 )
      {
        v10 = *v8;
        if ( !*v8 )
          break;
        v23 = ++v8;
        if ( v10 >= 0x61u )
        {
          if ( v10 > 0x7Au )
            v10 = NLS_UPCASE(qword_1801C6038, v10);
          else
            v10 -= 32;
        }
      }
      v11 = (__int64)((__int64)v8 - a2) >> 1;
      if ( (unsigned int)v11 > 0xFF )
      {
        v12 = 0LL;
        goto LABEL_23;
      }
      v12 = (const wchar_t *)(a1 + 8 * (i % *(_DWORD *)(a1 + 64) + 9LL));
      do
        v12 = *(const wchar_t **)v12;
      while ( v12 && (*((unsigned __int8 *)v12 + 16) != (_DWORD)v11 || wcsicmp(v12 + 9, (const wchar_t *)a2)) );
    }
    else
    {
      v12 = 0LL;
      if ( (unsigned __int16)a2 < 0xC000u )
      {
LABEL_20:
        if ( v12 )
        {
          if ( v12 == (const wchar_t *)-12LL )
          {
            v13 = -1073741801;
LABEL_24:
            if ( v13 >= 0 )
            {
              if ( v6 )
              {
                v14 = *(_QWORD *)(a1 + 40);
                v7 = v14 + *(_DWORD *)(a1 + 20) * (unsigned int)v6[4];
                if ( v7
                  && v7 >= v14
                  && v7 < *(_QWORD *)(a1 + 48)
                  && ((*(_DWORD *)(a1 + 20) - 1) & (unsigned int)v7) == 0
                  && (*(_BYTE *)v7 & 1) != 0
                  && *(_QWORD *)(v7 + 8) )
                {
                  v13 = 0;
                  if ( a3 )
                    *a3 = v6[5];
                }
                else
                {
                  v13 = -1073741816;
                }
              }
              else
              {
                v13 = -1073741772;
              }
            }
            goto LABEL_66;
          }
          v21 = v12 + 6;
        }
LABEL_23:
        v6 = v12;
        v13 = 0;
        goto LABEL_24;
      }
      v18 = *(_QWORD *)(a1 + 40);
      v19 = v18 + *(_DWORD *)(a1 + 20) * (unsigned int)(a2 & 0x3FFF);
      if ( v19
        && v19 >= v18
        && v19 < *(_QWORD *)(a1 + 48)
        && ((*(_DWORD *)(a1 + 20) - 1) & (unsigned int)v19) == 0
        && (*(_BYTE *)v19 & 1) != 0 )
      {
        v12 = *(const wchar_t **)(v19 + 8);
      }
      else
      {
        v12 = 0LL;
      }
    }
    v7 = (unsigned __int64)&v21;
    goto LABEL_20;
  }
  return 3221225485LL;
}
