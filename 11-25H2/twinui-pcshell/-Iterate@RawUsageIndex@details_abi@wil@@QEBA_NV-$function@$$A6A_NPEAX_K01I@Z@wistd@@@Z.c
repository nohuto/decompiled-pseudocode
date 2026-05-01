/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1801295C0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180129220 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x18005BC88 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     memcpy_s @ 0x1800B7E64 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char *v4; // rbx
  __int64 v5; // rdx
  char v6; // r15
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  char *v9; // rdi
  unsigned __int16 v10; // ax
  unsigned int i; // r12d
  unsigned __int64 v12; // r14
  char *v13; // rsi
  unsigned __int16 v14; // ax
  char *v15; // rax
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // [rsp+40h] [rbp-69h]
  unsigned __int16 v21; // [rsp+42h] [rbp-67h]
  int v22; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int16 v23; // [rsp+50h] [rbp-59h]
  char v24; // [rsp+52h] [rbp-57h]
  unsigned int v25; // [rsp+54h] [rbp-55h] BYREF
  unsigned __int16 v26; // [rsp+58h] [rbp-51h] BYREF
  __int128 v27; // [rsp+60h] [rbp-49h]
  unsigned __int16 v28; // [rsp+70h] [rbp-39h]
  char v29; // [rsp+72h] [rbp-37h]
  int v30; // [rsp+74h] [rbp-35h] BYREF
  unsigned __int16 Destination; // [rsp+78h] [rbp-31h] BYREF
  __int128 v32; // [rsp+80h] [rbp-29h]
  __int64 v33; // [rsp+90h] [rbp-19h]
  __int64 v34; // [rsp+98h] [rbp-11h] BYREF
  char *v35; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-1h] BYREF
  char *v37; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v38; // [rsp+110h] [rbp+67h]
  char v39; // [rsp+120h] [rbp+77h]
  char v40; // [rsp+128h] [rbp+7Fh]

  v38 = a1;
  v3 = a1;
  v4 = (char *)(*(_QWORD *)(a1 + 24) + 10LL);
  LOBYTE(a1) = *(_BYTE *)(a1 + 4);
  v39 = a1;
  v5 = *(unsigned __int16 *)(v3 + 2);
  v20 = *(_WORD *)(v3 + 2);
  v23 = v20;
  v24 = a1;
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  v6 = *(_BYTE *)(v3 + 8);
  v40 = v6;
  v7 = *(unsigned __int16 *)(v3 + 6);
  v21 = *(_WORD *)(v3 + 6);
  v28 = v21;
  v29 = v6;
  v30 = 0;
  Destination = 0;
  v32 = 0LL;
LABEL_2:
  while ( 2 )
  {
    v8 = *(_QWORD *)(v3 + 32);
    v9 = v4;
    if ( (_BYTE)a1 == 1 )
    {
      v9 = v4 + 2;
      if ( (unsigned __int64)(v4 + 2) > v8 )
        break;
      *(_QWORD *)&v27 = v4;
      if ( v4 )
      {
        v19 = *(_WORD *)v4;
      }
      else
      {
        LOWORD(v22) = 0;
        *(_DWORD *)_o__errno(a1, v5, v7) = 22;
        invalid_parameter_noinfo();
        v19 = 0;
        LOWORD(v5) = v20;
      }
      v25 = v19;
    }
    else if ( (_BYTE)a1 == 2 )
    {
      v9 = v4 + 4;
      if ( (unsigned __int64)(v4 + 4) > v8 )
        break;
      *(_QWORD *)&v27 = v4;
      memcpy_s(&v25, 4uLL, v4, 4uLL);
      v39 = v24;
      LOWORD(v5) = v23;
      v20 = v23;
    }
    v10 = v5;
    v26 = v5;
    if ( !(_WORD)v5 )
    {
      if ( (unsigned __int64)(v9 + 2) > v8 )
        break;
      memcpy_s(&v26, 2uLL, v9, 2uLL);
      v9 += 2;
      v10 = v26;
      v39 = v24;
      v20 = v23;
    }
    v33 = v10;
    v4 = &v9[v10];
    if ( (unsigned __int64)v4 <= v8 )
    {
      *((_QWORD *)&v27 + 1) = v9;
      for ( i = 0; ; ++i )
      {
        LOBYTE(a1) = v39;
        v3 = v38;
        v5 = v20;
        if ( i >= v25 )
          goto LABEL_2;
        v12 = *(_QWORD *)(v38 + 32);
        v13 = v4;
        if ( v6 == 1 )
          break;
        if ( v6 != 2 )
          goto LABEL_10;
        v13 = v4 + 4;
        LOBYTE(a1) = v39;
        v5 = v20;
        if ( (unsigned __int64)(v4 + 4) > v12 )
          goto LABEL_2;
        *(_QWORD *)&v32 = v4;
        memcpy_s(&v30, 4uLL, v4, 4uLL);
        v6 = v29;
        v40 = v29;
        v7 = v28;
        v21 = v28;
LABEL_11:
        v14 = v7;
        Destination = v7;
        if ( !(_WORD)v7 )
        {
          LOBYTE(a1) = v39;
          v3 = v38;
          v5 = v20;
          if ( (unsigned __int64)(v13 + 2) > v12 )
          {
            v6 = v40;
            goto LABEL_2;
          }
          memcpy_s(&Destination, 2uLL, v13, 2uLL);
          v13 += 2;
          v14 = Destination;
          v6 = v29;
          v40 = v29;
          v21 = v28;
        }
        a1 = v14;
        v15 = &v13[v14];
        if ( (unsigned __int64)v15 > v12 )
        {
          LOBYTE(a1) = v39;
          v3 = v38;
          v5 = v20;
          goto LABEL_2;
        }
        *((_QWORD *)&v32 + 1) = v13;
        v4 = v15;
        v22 = v30;
        v34 = a1;
        v35 = v13;
        v36 = v33;
        v37 = v9;
        v16 = *(_QWORD *)(a2 + 112);
        if ( !v16 )
          __fastfail(7u);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, char **, __int64 *, char **, __int64 *, int *))(*(_QWORD *)v16 + 32LL))(
                v16,
                &v37,
                &v36,
                &v35,
                &v34,
                &v22) )
        {
          wistd::function<bool (long)>::~function<bool (long)>(a2);
          return 0;
        }
      }
      v13 = v4 + 2;
      LOBYTE(a1) = v39;
      v5 = v20;
      if ( (unsigned __int64)(v4 + 2) > v12 )
        continue;
      *(_QWORD *)&v32 = v4;
      if ( v4 )
      {
        v17 = *(_WORD *)v4;
      }
      else
      {
        LOWORD(v22) = 0;
        *(_DWORD *)_o__errno(a1, v20, v7) = 22;
        invalid_parameter_noinfo();
        a1 = 0LL;
        v17 = 0;
      }
      v30 = v17;
LABEL_10:
      v7 = v21;
      goto LABEL_11;
    }
    break;
  }
  wistd::function<bool (long)>::~function<bool (long)>(a2);
  return 1;
}
