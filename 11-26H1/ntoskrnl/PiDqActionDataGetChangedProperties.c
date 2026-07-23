/*
 * XREFs of PiDqActionDataGetChangedProperties @ 0x140AB592C
 * Callers:
 *     PiDqActionDataCreate @ 0x14095124C (PiDqActionDataCreate.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14095D088 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x14095D7B0 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PiDqGrowPropertyArray @ 0x140AB5D94 (PiDqGrowPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetChangedProperties(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9,
        unsigned int *a10)
{
  char v11; // di
  int v12; // esi
  unsigned int v13; // r15d
  unsigned int i; // eax
  __int64 v15; // r9
  char *v16; // rbx
  __int64 v17; // r14
  int v18; // ecx
  int v19; // edi
  unsigned int v20; // r10d
  unsigned int j; // r8d
  unsigned int k; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  wchar_t *v27; // rdi
  const wchar_t *v28; // rcx
  const wchar_t *v29; // rbx
  __int64 v30; // rax
  __int128 v31; // xmm1
  __int64 v32; // rax
  __int64 v33; // rcx
  __int128 v34; // xmm0
  int v35; // ecx
  int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  PVOID v42; // [rsp+48h] [rbp-38h] BYREF
  __int128 v43; // [rsp+50h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-20h]
  PVOID v45[2]; // [rsp+70h] [rbp-10h]
  unsigned int v50; // [rsp+108h] [rbp+88h]

  v11 = a4;
  Handle = 0LL;
  v12 = 0;
  v42 = 0LL;
  *a10 = 0;
  v13 = 0;
  v43 = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v45 = 0LL;
  PiPnpRtlBeginOperation(&v42);
  for ( i = 0; ; i = v50 + 1 )
  {
    v15 = a8;
    v50 = i;
    if ( i >= *(_DWORD *)(a8 + 76) )
      break;
    v16 = 0LL;
    v17 = a8 + 32LL * i;
    if ( !a6 )
    {
LABEL_4:
      v18 = *(_DWORD *)(v17 + 100);
      if ( !v18 )
      {
        v19 = a2;
        goto LABEL_6;
      }
      if ( v18 != 1 )
      {
        v12 = -1073741811;
        break;
      }
      v19 = 0;
      if ( !Handle )
      {
        Handle = 0LL;
        v36 = PiDqOpenUserObjectRegKey(a3, a2, 1u, 0, a1, &Handle);
        v15 = a8;
        v12 = v36;
        if ( v36 == -1073741772 )
        {
          v12 = 0;
          Handle = (HANDLE)-1LL;
        }
      }
      v16 = (char *)Handle;
      if ( Handle != (HANDLE)-1LL )
      {
LABEL_6:
        if ( v12 < 0 )
          break;
        if ( a4 )
        {
          v12 = PiDqPnPGetObjectPropertyInBestLocale(a3, v19, v16, v17 + 80, *(_DWORD *)(v17 + 100), a5, &v43);
          if ( v12 >= 0 )
          {
            v26 = a5;
            v27 = (wchar_t *)P[1];
            while ( 1 )
            {
              v28 = *(const wchar_t **)(v17 + 104);
              v29 = (const wchar_t *)(v26 & -(__int64)(*(_WORD *)v26 != 0));
              if ( v28 == v29 || v28 && v29 && !wcsicmp(v28, (const wchar_t *)(v26 & -(__int64)(*(_WORD *)v26 != 0))) )
                break;
              if ( v27 == v29 || v27 && (!v29 || !wcsicmp(v27, v29)) || !v29 )
              {
LABEL_52:
                if ( v27 )
                  ExFreePoolWithTag(v27, 0x58706E50u);
                if ( v45[1] )
                  ExFreePoolWithTag(v45[1], 0x58706E50u);
                goto LABEL_14;
              }
              v30 = -1LL;
              do
                ++v30;
              while ( v29[v30] );
              v26 = (__int64)&v29[v30 + 1];
            }
            v20 = *a10;
            for ( j = 0; j < v20; ++j )
            {
              v37 = *a9;
              v38 = 48LL * j;
              if ( LODWORD(P[0]) == *(_DWORD *)(v38 + *a9 + 16) )
              {
                v39 = v43 - *(_QWORD *)(v38 + v37);
                if ( (_QWORD)v43 == *(_QWORD *)(v38 + v37) )
                  v39 = *((_QWORD *)&v43 + 1) - *(_QWORD *)(v38 + v37 + 8);
                if ( !v39 && HIDWORD(P[0]) == *(_DWORD *)(v38 + v37 + 20) )
                  goto LABEL_52;
              }
            }
            if ( v13 > v20 )
              goto LABEL_56;
            if ( a7 )
            {
              v13 = a7;
            }
            else
            {
              v40 = 5;
              if ( *(_DWORD *)(a8 + 76) > 5u )
                v40 = *(_DWORD *)(a8 + 76);
              v13 += v40;
            }
            v12 = PiDqGrowPropertyArray(a9);
            if ( v12 >= 0 )
            {
LABEL_56:
              v31 = *(_OWORD *)P;
              v32 = *a9;
              v33 = 6LL * *a10;
              *(_OWORD *)(v32 + 8 * v33) = v43;
              v34 = *(_OWORD *)v45;
              *(_OWORD *)(v32 + 8 * v33 + 16) = v31;
              *(_OWORD *)(v32 + 8 * v33 + 32) = v34;
              goto LABEL_13;
            }
            if ( v27 )
              ExFreePoolWithTag(v27, 0x58706E50u);
            if ( v45[1] )
              ExFreePoolWithTag(v45[1], 0x58706E50u);
          }
          break;
        }
        if ( v13 <= *a10 )
        {
          if ( a7 )
          {
            v13 = a7;
          }
          else
          {
            v35 = 5;
            if ( *(_DWORD *)(v15 + 76) > 5u )
              v35 = *(_DWORD *)(v15 + 76);
            v13 += v35;
          }
          v12 = PiDqGrowPropertyArray(a9);
          if ( v12 < 0 )
            break;
        }
        v12 = PiDqPnPGetObjectProperty(
                a3,
                v19,
                (__int64)v16,
                v17 + 80,
                *(_DWORD *)(v17 + 100),
                *(_WORD **)(v17 + 104),
                *a9 + 48LL * *a10);
        if ( v12 < 0 )
          break;
LABEL_13:
        ++*a10;
      }
LABEL_14:
      v11 = a4;
      continue;
    }
    for ( k = 0; k < a7; ++k )
    {
      v24 = 32LL * k;
      if ( *(_DWORD *)(v17 + 96) == *(_DWORD *)(v24 + a6 + 16) )
      {
        v25 = *(_QWORD *)(v17 + 80) - *(_QWORD *)(v24 + a6);
        if ( !v25 )
          v25 = *(_QWORD *)(v17 + 88) - *(_QWORD *)(v24 + a6 + 8);
        if ( !v25 && *(_DWORD *)(v17 + 100) == *(_DWORD *)(v24 + a6 + 20) && (!*(_QWORD *)(v17 + 104) || v11) )
          goto LABEL_4;
      }
    }
  }
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( v42 )
    PiPnpRtlEndOperation((char *)v42);
  return (unsigned int)v12;
}
