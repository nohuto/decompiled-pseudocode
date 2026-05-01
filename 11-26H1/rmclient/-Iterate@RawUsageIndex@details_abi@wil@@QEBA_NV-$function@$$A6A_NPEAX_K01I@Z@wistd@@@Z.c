/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180006B50
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180006768 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x180007CBC (--1-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  char v3; // r8
  char *v4; // rbx
  unsigned __int64 v6; // r14
  char *v7; // rsi
  unsigned int i; // r14d
  char *v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int16 v19; // [rsp+50h] [rbp-19h]
  char v20; // [rsp+52h] [rbp-17h]
  unsigned int v21; // [rsp+54h] [rbp-15h] BYREF
  unsigned __int16 v22; // [rsp+58h] [rbp-11h] BYREF
  __int128 v23; // [rsp+60h] [rbp-9h]
  unsigned __int16 v24; // [rsp+70h] [rbp+7h]
  char v25; // [rsp+72h] [rbp+9h]
  int v26; // [rsp+74h] [rbp+Bh] BYREF
  unsigned __int16 v27; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v28; // [rsp+80h] [rbp+17h]
  int Destination; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v30; // [rsp+E0h] [rbp+77h] BYREF
  char *v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_BYTE *)(a1 + 4);
  v4 = (char *)(*(_QWORD *)(a1 + 24) + 10LL);
  v19 = *(_WORD *)(a1 + 2);
  v24 = *(_WORD *)(a1 + 6);
  v25 = *(_BYTE *)(a1 + 8);
  v20 = v3;
  v21 = 0;
  v22 = 0;
  v23 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = 0LL;
LABEL_2:
  v6 = *(_QWORD *)(a1 + 32);
  v7 = v4;
  if ( v3 == 1 )
  {
    v7 = v4 + 2;
    if ( (unsigned __int64)(v4 + 2) > v6 )
      goto LABEL_16;
    *(_QWORD *)&v23 = v4;
    LOWORD(Destination) = 0;
    memcpy_s(&Destination, 2uLL, v4, 2uLL);
    v21 = (unsigned __int16)Destination;
  }
  else if ( v3 == 2 )
  {
    v7 = v4 + 4;
    if ( (unsigned __int64)(v4 + 4) > v6 )
      goto LABEL_16;
    *(_QWORD *)&v23 = v4;
    memcpy_s(&v21, 4uLL, v4, 4uLL);
  }
  v22 = v19;
  if ( !v19 )
  {
    if ( (unsigned __int64)(v7 + 2) > v6 )
      goto LABEL_16;
    memcpy_s(&v22, 2uLL, v7, 2uLL);
    v7 += 2;
  }
  v4 = &v7[v22];
  if ( (unsigned __int64)v4 > v6 )
  {
LABEL_16:
    v15 = *(_QWORD *)(a2 + 112);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
    return 1;
  }
  *((_QWORD *)&v23 + 1) = v7;
  for ( i = 0; ; ++i )
  {
    if ( i >= v21 )
    {
LABEL_19:
      v3 = v20;
      goto LABEL_2;
    }
    v9 = v4;
    v10 = *(_QWORD *)(a1 + 32);
    if ( v25 == 1 )
    {
      v9 = v4 + 2;
      if ( (unsigned __int64)(v4 + 2) > v10 )
        goto LABEL_19;
      *(_QWORD *)&v28 = v4;
      LOWORD(Destination) = 0;
      memcpy_s(&Destination, 2uLL, v4, 2uLL);
      v26 = (unsigned __int16)Destination;
    }
    else if ( v25 == 2 )
    {
      v9 = v4 + 4;
      if ( (unsigned __int64)(v4 + 4) > v10 )
        goto LABEL_19;
      *(_QWORD *)&v28 = v4;
      memcpy_s(&v26, 4uLL, v4, 4uLL);
    }
    v11 = v24;
    v27 = v24;
    if ( !v24 )
    {
      if ( (unsigned __int64)(v9 + 2) > v10 )
        goto LABEL_19;
      memcpy_s(&v27, 2uLL, v9, 2uLL);
      v11 = v27;
      v9 += 2;
    }
    v12 = v11;
    v13 = &v9[v11];
    if ( (unsigned __int64)v13 > v10 )
      goto LABEL_19;
    v4 = v13;
    v30 = v12;
    v14 = *(_QWORD *)(a2 + 112);
    Destination = v26;
    v17 = v22;
    v18 = *((_QWORD *)&v23 + 1);
    *((_QWORD *)&v28 + 1) = v9;
    v31 = v9;
    if ( !v14 )
      __fastfail(7u);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *, char **, __int64 *, int *))(*(_QWORD *)v14 + 32LL))(
            v14,
            &v18,
            &v17,
            &v31,
            &v30,
            &Destination) )
      break;
  }
  wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(a2);
  return 0;
}
