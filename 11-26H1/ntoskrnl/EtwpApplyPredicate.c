/*
 * XREFs of EtwpApplyPredicate @ 0x1406CD64C
 * Callers:
 *     EtwpApplyPayloadFilterInternal @ 0x1406CCDC8 (EtwpApplyPayloadFilterInternal.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     EtwpGetFieldValue @ 0x1406CDBD8 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1406CDC6C (EtwpGetSignedFieldValue.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     strncmp @ 0x140741F60 (strncmp.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ExSystemExceptionFilter @ 0x14083CCA0 (ExSystemExceptionFilter.c)
 */

char __fastcall EtwpApplyPredicate(
        unsigned __int16 *a1,
        int a2,
        __int64 a3,
        char *a4,
        unsigned int a5,
        bool *a6,
        char a7)
{
  __int64 v10; // r9
  char v11; // r15
  int v12; // r12d
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rcx
  bool v18; // bl
  bool v19; // zf
  unsigned int v20; // r10d
  char *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  const wchar_t *v24; // r14
  char *v25; // rsi
  wchar_t v26; // r13
  __int64 v27; // rsi
  __int16 UShortFromUser; // ax
  char *v29; // r12
  char *v30; // rcx
  unsigned __int64 v31; // rdx
  const char *v32; // r14
  char *v33; // rsi
  unsigned int v34; // esi
  char UCharFromUser; // al
  char v36; // r12
  char *v37; // r13
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  bool v40; // zf
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v44; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v45; // [rsp+30h] [rbp-78h]
  char *v46; // [rsp+38h] [rbp-70h]
  char *v47; // [rsp+40h] [rbp-68h]
  bool *v48; // [rsp+48h] [rbp-60h]
  const wchar_t *v49; // [rsp+50h] [rbp-58h]
  __int128 v50; // [rsp+58h] [rbp-50h] BYREF

  v48 = a6;
  v10 = 0LL;
  v44 = 0LL;
  *(_QWORD *)&v50 = 0LL;
  if ( !a5 )
    return 0;
  v11 = 0;
  v12 = *(unsigned __int16 *)(a3 + 2);
  if ( !a2 )
    return 0;
  v13 = a2 - 1;
  if ( !v13 )
  {
    LOBYTE(v10) = a7;
    if ( !(unsigned __int8)EtwpGetSignedFieldValue(a4, a5, &v44, v10) )
      return 0;
    v41 = *(_QWORD *)(a3 + 8);
    v42 = *(_QWORD *)(a3 + 16);
    if ( !v12 )
    {
      v19 = v44 == v41;
      goto LABEL_127;
    }
    if ( v12 != 1 )
    {
      switch ( v12 )
      {
        case 2:
          v18 = v44 <= v41;
          goto LABEL_128;
        case 3:
          v18 = v44 > v41;
          goto LABEL_128;
        case 4:
          v18 = v44 < v41;
          goto LABEL_128;
        case 5:
          v18 = v44 >= v41;
          goto LABEL_128;
        case 6:
          if ( v41 > v44 || v44 > v42 )
            goto LABEL_119;
          break;
        case 7:
          if ( v44 >= v41 && v42 >= v44 )
            goto LABEL_119;
          break;
        default:
          if ( v12 != 8 || !v41 )
            return 0;
          v39 = v44 % v41;
          goto LABEL_89;
      }
LABEL_116:
      v18 = 1;
      goto LABEL_128;
    }
    v40 = v44 == v41;
LABEL_125:
    v18 = !v40;
    goto LABEL_128;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    LOBYTE(v10) = a7;
    if ( !(unsigned __int8)EtwpGetFieldValue(a4, a5, &v50, v10) )
      return 0;
    if ( !v12 )
    {
      v19 = (_QWORD)v50 == *(_QWORD *)(a3 + 8);
      goto LABEL_127;
    }
    if ( v12 != 1 )
    {
      switch ( v12 )
      {
        case 2:
          v18 = (unsigned __int64)v50 <= *(_QWORD *)(a3 + 8);
          goto LABEL_128;
        case 3:
          v18 = (unsigned __int64)v50 > *(_QWORD *)(a3 + 8);
          goto LABEL_128;
        case 4:
          v18 = (unsigned __int64)v50 < *(_QWORD *)(a3 + 8);
          goto LABEL_128;
        case 5:
          v18 = (unsigned __int64)v50 >= *(_QWORD *)(a3 + 8);
          goto LABEL_128;
        case 6:
          if ( *(_QWORD *)(a3 + 8) > (unsigned __int64)v50 || (unsigned __int64)v50 > *(_QWORD *)(a3 + 16) )
            goto LABEL_119;
          break;
        case 7:
          if ( (unsigned __int64)v50 >= *(_QWORD *)(a3 + 8) && *(_QWORD *)(a3 + 16) >= (unsigned __int64)v50 )
            goto LABEL_119;
          break;
        case 8:
          v38 = *(_QWORD *)(a3 + 8);
          if ( !v38 )
            return 0;
          v39 = (unsigned __int64)v50 % v38;
LABEL_89:
          v19 = v39 == 0;
          goto LABEL_127;
        default:
          return 0;
      }
      goto LABEL_116;
    }
    v40 = (_QWORD)v50 == *(_QWORD *)(a3 + 8);
    goto LABEL_125;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v30 = (char *)a1 + a1[24];
    v31 = (unsigned __int64)&v30[a1[25]];
    v32 = &v30[*(_QWORD *)(a3 + 8)];
    if ( (unsigned __int64)v32 >= v31 )
      return 0;
    v33 = &v30[*(_QWORD *)(a3 + 8)];
    if ( *v32 )
    {
      do
      {
        if ( (unsigned __int64)v33 >= v31 )
          break;
        ++v33;
      }
      while ( *v33 );
    }
    v34 = (_DWORD)v33 - (_DWORD)v32;
    if ( v34 )
    {
      if ( v12 != 20 )
      {
        if ( v12 != 21 )
        {
          if ( v12 != 30 )
          {
            if ( v12 != 31 )
              return 0;
            v11 = 1;
          }
          v18 = v11;
          if ( v34 == a5 )
          {
            v18 = 1;
            while ( v34 )
            {
              if ( a7 )
                UCharFromUser = RtlReadUCharFromUser(a4);
              else
                UCharFromUser = *a4;
              if ( UCharFromUser != *v32 )
              {
                v18 = 0;
                break;
              }
              v47 = ++a4;
              *(_QWORD *)&v50 = ++v32;
              v45 = --v34;
            }
LABEL_36:
            if ( v11 )
            {
LABEL_16:
              v19 = !v18;
LABEL_127:
              v18 = v19;
            }
          }
LABEL_128:
          *v48 = v18;
          return 1;
        }
        v11 = 1;
      }
      v18 = v11;
      if ( v34 > a5 )
        goto LABEL_128;
      v36 = *v32;
      v37 = &a4[a5 - (unsigned __int64)v34 + 1];
      v18 = 0;
      while ( a4 < v37 )
      {
        if ( *a4 == v36 && !strncmp(a4, v32, v34) )
        {
          v18 = 1;
          goto LABEL_36;
        }
        v47 = ++a4;
      }
      goto LABEL_36;
    }
LABEL_119:
    v18 = 0;
    goto LABEL_128;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (a5 & 1) != 0 )
      return 0;
    v20 = a5 >> 1;
    v21 = (char *)a1 + a1[22];
    v22 = (unsigned __int64)&v21[2 * ((unsigned __int64)a1[23] >> 1)];
    v23 = *(_QWORD *)(a3 + 8);
    v24 = (const wchar_t *)&v21[2 * v23];
    if ( (unsigned __int64)v24 >= v22 )
      return 0;
    v25 = &v21[2 * v23];
    v26 = *v24;
    if ( *v24 )
    {
      do
      {
        if ( (unsigned __int64)v25 >= v22 )
          break;
        v25 += 2;
      }
      while ( *(_WORD *)v25 );
    }
    v27 = (v25 - (char *)v24) >> 1;
    if ( (_DWORD)v27 )
    {
      if ( v12 != 20 )
      {
        if ( v12 != 21 )
        {
          if ( v12 != 30 )
          {
            if ( v12 != 31 )
              return 0;
            v11 = 1;
          }
          v18 = v11;
          if ( (_DWORD)v27 == v20 )
          {
            v18 = 1;
            while ( (_DWORD)v27 )
            {
              if ( a7 )
                UShortFromUser = RtlReadUShortFromUser(a4);
              else
                UShortFromUser = *(_WORD *)a4;
              if ( UShortFromUser != *v24 )
              {
                v18 = 0;
                goto LABEL_36;
              }
              a4 += 2;
              v46 = a4;
              v49 = ++v24;
              LODWORD(v27) = v27 - 1;
              v45 = v27;
            }
            goto LABEL_36;
          }
          goto LABEL_128;
        }
        v11 = 1;
      }
      v18 = v11;
      if ( (unsigned int)v27 > v20 )
        goto LABEL_128;
      v29 = &a4[2 * (v20 - (unsigned __int64)(unsigned int)v27) + 2];
      v18 = 0;
      while ( a4 < v29 )
      {
        if ( *(_WORD *)a4 == v26 && !wcsncmp((const wchar_t *)a4, v24, (unsigned int)v27) )
        {
          v18 = 1;
          goto LABEL_36;
        }
        a4 += 2;
        v46 = a4;
      }
      goto LABEL_36;
    }
    goto LABEL_119;
  }
  if ( v16 == 1 && a5 == 16 )
  {
    v50 = 0LL;
    if ( a7 )
      RtlCopyFromUser(&v50, a4, 0x10uLL);
    else
      RtlCopyVolatileMemory(&v50, a4, 0x10uLL);
    v17 = v50 - *(_QWORD *)(a3 + 8);
    if ( (_QWORD)v50 == *(_QWORD *)(a3 + 8) )
      v17 = *((_QWORD *)&v50 + 1) - *(_QWORD *)(a3 + 16);
    v18 = v17 == 0;
    if ( v12 == 30 )
      goto LABEL_128;
    if ( v12 == 31 )
      goto LABEL_16;
  }
  return 0;
}
