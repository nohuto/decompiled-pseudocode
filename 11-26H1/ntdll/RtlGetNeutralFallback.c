/*
 * XREFs of RtlGetNeutralFallback @ 0x180004170
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x180004B30 (RtlpAddNeutralsToMergedList.c)
 * Callees:
 *     RtlpIsCustomLocale @ 0x180001008 (RtlpIsCustomLocale.c)
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpNlsGetNameIndex @ 0x180004930 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180004A18 (RtlpLoadNlsData.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpGetCustomCultureData @ 0x180113878 (RtlpGetCustomCultureData.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlGetNeutralFallback(__int64 a1, wchar_t *a2, UNICODE_STRING *a3, _BYTE *a4)
{
  unsigned int v8; // r12d
  __int64 v9; // r9
  __int64 v10; // rdi
  int v11; // esi
  __int64 i; // rbp
  const wchar_t *v13; // rcx
  int j; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  const wchar_t *v25; // rcx
  size_t v26; // rax
  unsigned int v27; // edx
  unsigned __int64 v28; // rdi
  unsigned __int16 v29; // bx
  int v31; // ecx
  size_t v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int NameIndex; // eax
  int v36; // ecx
  __int64 v37; // rax
  const void *v38; // r9
  _WORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // [rsp+20h] [rbp-38h] BYREF
  wchar_t *v43; // [rsp+28h] [rbp-30h]
  int v44; // [rsp+60h] [rbp+8h] BYREF

  v44 = 0;
  v8 = 0;
  if ( a1 && a3 && a4 )
  {
    *a4 = 0;
    if ( a2 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v42 = v9;
      if ( *a2 )
      {
        v10 = *(_QWORD *)(a1 + 32);
        if ( v10 )
        {
          v11 = 0;
          for ( i = 0LL; ; i += 2LL )
          {
            if ( v11 >= *(unsigned __int16 *)(v10 + 6) )
            {
              v9 = v42;
              goto LABEL_28;
            }
            v13 = (const wchar_t *)(*(_QWORD *)(v10 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v10 + 16) + i));
            if ( v13 == a2 || !wcsicmp(v13, a2) )
              break;
            ++v11;
          }
          v9 = v42;
          if ( v11 < 0 )
            goto LABEL_28;
        }
        else
        {
LABEL_28:
          LOWORD(v11) = -1;
        }
        if ( (v11 & 0x8000u) != 0 )
        {
          v42 = 0LL;
          v43 = a2;
LABEL_40:
          v32 = 2 * wcslen(a2);
          if ( v32 >= 0xFFFE )
            LOWORD(v32) = -4;
          LOWORD(v42) = v32;
          WORD1(v42) = v32 + 2;
LABEL_43:
          if ( (unsigned __int8)RtlCultureNameToLCID(&v42, &v44) && ((v44 - 4096) & 0xFFFFFBFF) == 0 )
          {
            *a4 = 1;
            return v8;
          }
          if ( *a4 )
            return v8;
          if ( a2 )
          {
            if ( !a3->Buffer )
              return (unsigned int)-1073741584;
            if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData(v34, v33) )
              return (unsigned int)-1073741823;
            NameIndex = RtlpNlsGetNameIndex(a2);
            if ( NameIndex >= 0 )
            {
              _mm_lfence();
              v36 = *(unsigned __int16 *)(pTblPtrs + 48)
                  * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
              v37 = *(_QWORD *)(pTblPtrs + 32) + 2LL;
              v38 = (const void *)(v37 + 2LL * *(unsigned int *)(v36 + *(_QWORD *)(pTblPtrs + 8) + 184LL));
              if ( v38 )
              {
                v39 = (_WORD *)(v37 + 2LL * *(unsigned int *)(v36 + *(_QWORD *)(pTblPtrs + 8) + 184LL));
                v40 = 85LL;
                do
                {
                  if ( !*v39 )
                    break;
                  ++v39;
                  --v40;
                }
                while ( v40 );
                v27 = 85 - v40;
                v8 = 0;
                if ( v40 )
                {
                  if ( v27 >= 0x55 )
                    return (unsigned int)-1073741789;
                  v28 = 2LL * v27;
                  if ( a3->MaximumLength <= v28 )
                  {
                    return (unsigned int)-1073741789;
                  }
                  else
                  {
                    v29 = 2 * v27;
                    memmove(a3->Buffer, v38, (unsigned __int16)(2 * v27));
                    a3->Buffer[v28 / 2] = 0;
                    a3->Length = v29;
                  }
                  return v8;
                }
                return (unsigned int)-1073741823;
              }
            }
            if ( RtlpIsCustomLocale(a2) )
            {
              LOBYTE(v41) = 1;
              return (unsigned int)RtlpGetCustomCultureData(a2, v41, 0LL, a3);
            }
          }
          return (unsigned int)-1073741585;
        }
        for ( j = 0; ; ++j )
        {
          if ( j >= *(unsigned __int16 *)(v9 + 6) )
            goto LABEL_39;
          v15 = 28LL * j;
          v16 = *(_QWORD *)(v9 + 16);
          if ( *(_WORD *)(v15 + v16 + 6) == (_WORD)v11 && (*(_WORD *)(v15 + v16) & 0x1020) == 0x20 )
            break;
        }
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v18 = 28LL * (__int16)j;
        if ( ((*(_WORD *)(v18 + v17 + 4) - 4096) & 0xFBFF) == 0 )
          *a4 = 1;
        v19 = *(__int16 *)(v18 + v17 + 10);
        v8 = 0;
        v20 = *(unsigned __int16 *)(v18 + v17 + 8) >> 14;
        if ( v20 == 2 )
        {
          v21 = *(__int16 *)(28 * v19 + v17 + 6);
          LODWORD(v19) = *(unsigned __int16 *)(28 * v19 + v17 + 4);
          if ( (__int16)v21 > 0 )
          {
            v22 = *(_QWORD *)(a1 + 32);
            v23 = *(__int16 *)(*(_QWORD *)(v22 + 16) + 2 * v21);
            v24 = *(_QWORD *)(v22 + 24);
            *(_QWORD *)&a3->Length = 0LL;
            v25 = (const wchar_t *)(v24 + 2 * v23);
            a3->Buffer = (wchar_t *)v25;
            if ( v25 )
            {
              v26 = 2 * wcslen(v25);
              if ( v26 >= 0xFFFE )
                LOWORD(v26) = -4;
              a3->Length = v26;
              a3->MaximumLength = v26 + 2;
            }
            return 0;
          }
          if ( !(_WORD)v19 )
          {
LABEL_66:
            v8 = -1073741595;
            v42 = 0LL;
            v43 = a2;
            goto LABEL_40;
          }
        }
        else
        {
          v31 = v20 - 1;
          if ( v31 )
          {
            if ( v31 == 2 )
            {
              RtlInitUnicodeString(
                a3,
                (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
                       + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2 * v19)));
              return 0;
            }
            goto LABEL_66;
          }
        }
        if ( !(unsigned __int8)RtlLCIDToCultureName((unsigned int)v19, a3) )
          v8 = -1073741595;
        if ( (v8 & 0x80000000) == 0 )
          return v8;
      }
    }
LABEL_39:
    v42 = 0LL;
    v43 = a2;
    if ( !a2 )
      goto LABEL_43;
    goto LABEL_40;
  }
  return 3221225485LL;
}
