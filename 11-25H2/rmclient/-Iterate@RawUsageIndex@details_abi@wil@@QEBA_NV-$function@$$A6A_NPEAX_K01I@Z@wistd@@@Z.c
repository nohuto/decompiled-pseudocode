/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1800083C0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007FEC (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x18000896C (--1-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v4; // rbx
  char v5; // cl
  char *v6; // rbx
  unsigned __int64 v8; // r14
  char *v9; // rsi
  unsigned int i; // r14d
  char *v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-39h] BYREF
  char *v20; // [rsp+48h] [rbp-31h] BYREF
  __int64 v21; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int16 v23; // [rsp+60h] [rbp-19h]
  char v24; // [rsp+62h] [rbp-17h]
  unsigned int v25; // [rsp+64h] [rbp-15h] BYREF
  unsigned __int16 v26; // [rsp+68h] [rbp-11h] BYREF
  __int128 v27; // [rsp+70h] [rbp-9h]
  unsigned __int16 v28; // [rsp+80h] [rbp+7h]
  char v29; // [rsp+82h] [rbp+9h]
  int v30; // [rsp+84h] [rbp+Bh] BYREF
  unsigned __int16 v31; // [rsp+88h] [rbp+Fh] BYREF
  __int128 v32; // [rsp+90h] [rbp+17h]
  unsigned __int16 Destination; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int16 v34; // [rsp+F0h] [rbp+77h] BYREF
  int v35; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = *(_WORD *)(a1 + 2);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_BYTE *)(a1 + 4);
  v6 = (char *)(v4 + 10);
  v23 = v2;
  v28 = *(_WORD *)(a1 + 6);
  v29 = *(_BYTE *)(a1 + 8);
  v24 = v5;
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
LABEL_2:
  v8 = *(_QWORD *)(a1 + 32);
  v9 = v6;
  if ( v5 == 1 )
  {
    v9 = v6 + 2;
    if ( (unsigned __int64)(v6 + 2) > v8 )
      goto LABEL_16;
    *(_QWORD *)&v27 = v6;
    Destination = 0;
    memcpy_s(&Destination, 2uLL, v6, 2uLL);
    v25 = Destination;
  }
  else if ( v5 == 2 )
  {
    v9 = v6 + 4;
    if ( (unsigned __int64)(v6 + 4) > v8 )
      goto LABEL_16;
    *(_QWORD *)&v27 = v6;
    memcpy_s(&v25, 4uLL, v6, 4uLL);
  }
  v26 = v23;
  if ( !v23 )
  {
    if ( (unsigned __int64)(v9 + 2) > v8 )
      goto LABEL_16;
    memcpy_s(&v26, 2uLL, v9, 2uLL);
    v9 += 2;
  }
  v6 = &v9[v26];
  if ( (unsigned __int64)v6 > v8 )
  {
LABEL_16:
    v17 = *(_QWORD *)(a2 + 112);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
    return 1;
  }
  *((_QWORD *)&v27 + 1) = v9;
  for ( i = 0; ; ++i )
  {
    if ( i >= v25 )
    {
LABEL_19:
      v5 = v24;
      goto LABEL_2;
    }
    v11 = v6;
    v12 = *(_QWORD *)(a1 + 32);
    if ( v29 == 1 )
    {
      v11 = v6 + 2;
      if ( (unsigned __int64)(v6 + 2) > v12 )
        goto LABEL_19;
      *(_QWORD *)&v32 = v6;
      v34 = 0;
      memcpy_s(&v34, 2uLL, v6, 2uLL);
      v30 = v34;
    }
    else if ( v29 == 2 )
    {
      v11 = v6 + 4;
      if ( (unsigned __int64)(v6 + 4) > v12 )
        goto LABEL_19;
      *(_QWORD *)&v32 = v6;
      memcpy_s(&v30, 4uLL, v6, 4uLL);
    }
    v13 = v28;
    v31 = v28;
    if ( !v28 )
    {
      if ( (unsigned __int64)(v11 + 2) > v12 )
        goto LABEL_19;
      memcpy_s(&v31, 2uLL, v11, 2uLL);
      v13 = v31;
      v11 += 2;
    }
    v14 = v13;
    v15 = &v11[v13];
    if ( (unsigned __int64)v15 > v12 )
      goto LABEL_19;
    v6 = v15;
    v19 = v14;
    v16 = *(_QWORD *)(a2 + 112);
    v35 = v30;
    v21 = v26;
    v22 = *((_QWORD *)&v27 + 1);
    *((_QWORD *)&v32 + 1) = v11;
    v20 = v11;
    if ( !v16 )
      __fastfail(7u);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *, char **, __int64 *, int *))(*(_QWORD *)v16 + 32LL))(
            v16,
            &v22,
            &v21,
            &v20,
            &v19,
            &v35) )
      break;
  }
  wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(a2);
  return 0;
}
