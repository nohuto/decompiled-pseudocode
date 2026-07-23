/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarRegister @ 0x14063AAF4
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x14063B9E0 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlpHpCustomVaCallbacksEncodedComparison @ 0x14063AA78 (RtlpHpCustomVaCallbacksEncodedComparison.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpCustomVaCallbacksRegistrarRegister(__int64 a1, char *a2, _QWORD *a3, _OWORD *a4)
{
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int8 *v7; // r8
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  char v17; // al
  __int64 v18; // r11
  _QWORD *v19; // rdi
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r15
  BOOL v24; // eax
  bool v25; // zf
  unsigned int v26; // esi
  unsigned __int64 *v27; // rcx
  signed __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int8 v32; // [rsp+20h] [rbp-B8h]
  __int64 v33; // [rsp+28h] [rbp-B0h]
  unsigned int v34; // [rsp+30h] [rbp-A8h]
  __int128 v36; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-88h]
  struct _KTHREAD *v38[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v39[4]; // [rsp+70h] [rbp-68h] BYREF

  v5 = 4LL;
  v6 = *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)a2;
  v37 = a3;
  v7 = (unsigned __int8 *)v39;
  v39[0] = (unsigned __int64)v39 ^ v6;
  v10 = 314159LL;
  v39[1] = (unsigned __int64)v39 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *((_QWORD *)a2 + 1);
  v11 = 4LL;
  v39[2] = (unsigned __int64)v39 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *((_QWORD *)a2 + 2);
  v39[3] = (unsigned __int64)v39 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *((_QWORD *)a2 + 3);
  do
  {
    v12 = *v7;
    v7 += 8;
    v10 = *(v7 - 1)
        + 37
        * (*(v7 - 2)
         + 37
         * (*(v7 - 3) + 37
                      * (*(v7 - 4) + 37 * (*(v7 - 5) + 37 * (*(v7 - 6) + 37 * (*(v7 - 7) + 37 * (v12 + 37 * v10)))))));
    --v11;
  }
  while ( v11 );
  *(_OWORD *)v38 = *a4;
  v13 = (_QWORD *)RtlpHpMetadataAlloc(0x38uLL, 0x38uLL, 0, (__int128 *)v38);
  v14 = *(_DWORD *)a4 & 1;
  v38[0] = (struct _KTHREAD *)(a1 + 16);
  v17 = RtlpHpAcquireLockExclusive((int *)(a1 + 16), v14, v15, v16);
  v18 = a1;
  v19 = 0LL;
  v32 = v17;
  v20 = 0LL;
  v21 = *(_DWORD *)(a1 + 4);
  v34 = v21;
  v22 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v23 = v22 & v10;
  *(_QWORD *)&v36 = v22;
LABEL_4:
  if ( v20 )
    goto LABEL_7;
  if ( v21 >> 5 )
  {
    v20 = *(_QWORD *)(v18 + 8)
        + 8LL
        * (((v21 >> 5) - 1) & (HIBYTE(v23)
                             - 877075889
                             + 442596621 * (unsigned __int8)v23
                             + 37
                             * (BYTE6(v23)
                              + 37
                              * (BYTE5(v23) + 37
                                            * (BYTE4(v23) + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * BYTE1(v23))))))));
    v22 = v36;
LABEL_7:
    while ( 1 )
    {
      v20 = *(_QWORD *)v20;
      if ( (v20 & 1) != 0 )
        break;
      if ( v23 == (v22 & *(_QWORD *)(v20 + 8)) )
      {
        if ( !v20 )
          break;
        v24 = RtlpHpCustomVaCallbacksEncodedComparison((_QWORD *)v20, (unsigned __int64)v39);
        v18 = a1;
        v25 = !v24;
        v21 = v34;
        v22 = v36;
        if ( !v25 )
        {
          if ( v13 )
          {
            v36 = *a4;
            RtlpHpMetadataFree((__int64)v13, &v36);
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v20 + 48)) <= 1 )
            __fastfail(0xEu);
          v26 = 0;
          v19 = (_QWORD *)(v20 + 16);
          goto LABEL_21;
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 )
  {
    v27 = v13 + 2;
    v28 = a2 - (char *)(v13 + 2);
    do
    {
      *v27 = (unsigned __int64)(v13 + 2) ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(unsigned __int64 *)((char *)v27 + v28);
      ++v27;
      --v5;
    }
    while ( v5 );
    v13[6] = 1LL;
    v26 = 0;
    v19 = v13 + 2;
    v33 = v13[1] & (-1LL << (*(_DWORD *)(v18 + 4) & 0x1F));
    v29 = *(_QWORD *)(v18 + 8);
    v30 = ((*(_DWORD *)(v18 + 4) >> 5) - 1) & (HIBYTE(v33)
                                             + 37
                                             * (BYTE6(v33)
                                              + 37
                                              * (BYTE5(v33)
                                               + 37
                                               * (BYTE4(v33)
                                                + 37
                                                * (BYTE3(v33)
                                                 + 374026047
                                                 + 37
                                                 * (BYTE2(v33)
                                                  + 37 * (BYTE1(v33) + 37 * (unsigned int)(unsigned __int8)v33)))))));
    *v13 = *(_QWORD *)(v29 + 8 * v30);
    *(_QWORD *)(v29 + 8 * v30) = v13;
    ++*(_DWORD *)v18;
  }
  else
  {
    v26 = -1073741801;
  }
LABEL_21:
  *v37 = v19;
  RtlpHpReleaseLockExclusive(v38[0], 0, v32);
  return v26;
}
