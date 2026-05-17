/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarRegister @ 0x18008D4B8
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x18008D258 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpCustomVaCallbacksEncodedComparison @ 0x180157F14 (RtlpHpCustomVaCallbacksEncodedComparison.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpCustomVaCallbacksRegistrarRegister(__int64 a1, char *a2, _QWORD *a3, __int128 *a4)
{
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int8 *v7; // r8
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r11
  _QWORD *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // r15
  int v20; // r8d
  int v21; // eax
  unsigned int v22; // esi
  unsigned __int64 *v23; // rcx
  signed __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v28; // [rsp+20h] [rbp-A8h]
  __int128 v30; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v31; // [rsp+40h] [rbp-88h]
  __int128 v32; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v33[4]; // [rsp+60h] [rbp-68h] BYREF

  v5 = 4LL;
  v6 = RtlpHpHeapGlobals ^ *(_QWORD *)a2;
  *(_QWORD *)&v30 = a4;
  v31 = a3;
  v33[0] = (unsigned __int64)v33 ^ v6;
  v7 = (unsigned __int8 *)v33;
  v33[1] = (unsigned __int64)v33 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 1);
  v10 = 314159LL;
  v11 = 4LL;
  v33[2] = (unsigned __int64)v33 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 2);
  v33[3] = (unsigned __int64)v33 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 3);
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
  v32 = *a4;
  v13 = (_QWORD *)RtlpHpMetadataAlloc(0x38uLL, 0x38uLL, 0, &v32);
  *(_QWORD *)&v32 = a1 + 16;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 16), v14);
  v15 = a1;
  v16 = 0LL;
  v17 = 0LL;
  v18 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v19 = v18 & v10;
LABEL_4:
  if ( v17 )
    goto LABEL_7;
  v20 = *(_DWORD *)(v15 + 4) >> 5;
  if ( v20 )
  {
    v17 = *(_QWORD *)(v15 + 8)
        + 8LL
        * ((v20 - 1) & (HIBYTE(v19)
                      - 877075889
                      + 442596621 * (unsigned __int8)v19
                      + 37
                      * (BYTE6(v19)
                       + 37
                       * (BYTE5(v19)
                        + 37 * (BYTE4(v19) + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (unsigned int)BYTE1(v19))))))));
LABEL_7:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v17 + 8)) )
      {
        if ( !v17 )
          break;
        v21 = RtlpHpCustomVaCallbacksEncodedComparison(v17, v33);
        v15 = a1;
        if ( v21 )
        {
          if ( v13 )
          {
            v30 = *(_OWORD *)v30;
            RtlpHpMetadataFree((__int64)v13, &v30);
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v17 + 48)) <= 1 )
            __fastfail(0xEu);
          v22 = 0;
          v16 = (_QWORD *)(v17 + 16);
          goto LABEL_21;
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 )
  {
    v23 = v13 + 2;
    v24 = a2 - (char *)(v13 + 2);
    do
    {
      *v23 = (unsigned __int64)(v13 + 2) ^ RtlpHpHeapGlobals ^ *(unsigned __int64 *)((char *)v23 + v24);
      ++v23;
      --v5;
    }
    while ( v5 );
    v13[6] = 1LL;
    v22 = 0;
    v16 = v13 + 2;
    v28 = v13[1] & (-1LL << (*(_DWORD *)(v15 + 4) & 0x1F));
    v25 = *(_QWORD *)(v15 + 8);
    v26 = ((*(_DWORD *)(v15 + 4) >> 5) - 1) & (HIBYTE(v28)
                                             + 37
                                             * (BYTE6(v28)
                                              + 37
                                              * (BYTE5(v28)
                                               + 37
                                               * (BYTE4(v28)
                                                + 37
                                                * (BYTE3(v28)
                                                 + 374026047
                                                 + 37
                                                 * (BYTE2(v28)
                                                  + 37 * (BYTE1(v28) + 37 * (unsigned int)(unsigned __int8)v28)))))));
    *v13 = *(_QWORD *)(v25 + 8 * v26);
    *(_QWORD *)(v25 + 8 * v26) = v13;
    ++*(_DWORD *)v15;
  }
  else
  {
    v22 = -1073741801;
  }
LABEL_21:
  *v31 = v16;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v32);
  return v22;
}
