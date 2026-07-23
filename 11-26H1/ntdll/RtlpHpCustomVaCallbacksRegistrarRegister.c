/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800E387C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x180070BB8 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlpHpCustomVaCallbacksEncodedComparison @ 0x180157DE4 (RtlpHpCustomVaCallbacksEncodedComparison.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
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
  __int64 v14; // r11
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // r15
  int v19; // r8d
  int v20; // eax
  unsigned int v21; // esi
  unsigned __int64 *v22; // rcx
  signed __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v27; // [rsp+20h] [rbp-A8h]
  __int128 v29; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v30; // [rsp+40h] [rbp-88h]
  PRTL_SRWLOCK SRWLock[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v32[4]; // [rsp+60h] [rbp-68h] BYREF

  v5 = 4LL;
  v6 = RtlpHpHeapGlobals ^ *(_QWORD *)a2;
  *(_QWORD *)&v29 = a4;
  v30 = a3;
  v32[0] = (unsigned __int64)v32 ^ v6;
  v7 = (unsigned __int8 *)v32;
  v32[1] = (unsigned __int64)v32 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 1);
  v10 = 314159LL;
  v11 = 4LL;
  v32[2] = (unsigned __int64)v32 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 2);
  v32[3] = (unsigned __int64)v32 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 3);
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
  *(_OWORD *)SRWLock = *a4;
  v13 = (_QWORD *)RtlpHpMetadataAlloc(0x38uLL, 0x38uLL, 0, (__int128 *)SRWLock);
  SRWLock[0] = (PRTL_SRWLOCK)(a1 + 16);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  v14 = a1;
  v15 = 0LL;
  v16 = 0LL;
  v17 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v18 = v17 & v10;
LABEL_4:
  if ( v16 )
    goto LABEL_7;
  v19 = *(_DWORD *)(v14 + 4) >> 5;
  if ( v19 )
  {
    v16 = *(_QWORD *)(v14 + 8)
        + 8LL
        * ((v19 - 1) & (HIBYTE(v18)
                      - 877075889
                      + 442596621 * (unsigned __int8)v18
                      + 37
                      * (BYTE6(v18)
                       + 37
                       * (BYTE5(v18)
                        + 37 * (BYTE4(v18) + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (unsigned int)BYTE1(v18))))))));
LABEL_7:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v16 + 8)) )
      {
        if ( !v16 )
          break;
        v20 = RtlpHpCustomVaCallbacksEncodedComparison(v16, v32);
        v14 = a1;
        if ( v20 )
        {
          if ( v13 )
          {
            v29 = *(_OWORD *)v29;
            RtlpHpMetadataFree((__int64)v13, &v29);
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 48)) <= 1 )
            __fastfail(0xEu);
          v21 = 0;
          v15 = (_QWORD *)(v16 + 16);
          goto LABEL_21;
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 )
  {
    v22 = v13 + 2;
    v23 = a2 - (char *)(v13 + 2);
    do
    {
      *v22 = (unsigned __int64)(v13 + 2) ^ RtlpHpHeapGlobals ^ *(unsigned __int64 *)((char *)v22 + v23);
      ++v22;
      --v5;
    }
    while ( v5 );
    v13[6] = 1LL;
    v21 = 0;
    v15 = v13 + 2;
    v27 = v13[1] & (-1LL << (*(_DWORD *)(v14 + 4) & 0x1F));
    v24 = *(_QWORD *)(v14 + 8);
    v25 = ((*(_DWORD *)(v14 + 4) >> 5) - 1) & (HIBYTE(v27)
                                             + 37
                                             * (BYTE6(v27)
                                              + 37
                                              * (BYTE5(v27)
                                               + 37
                                               * (BYTE4(v27)
                                                + 37
                                                * (BYTE3(v27)
                                                 + 374026047
                                                 + 37
                                                 * (BYTE2(v27)
                                                  + 37 * (BYTE1(v27) + 37 * (unsigned int)(unsigned __int8)v27)))))));
    *v13 = *(_QWORD *)(v24 + 8 * v25);
    *(_QWORD *)(v24 + 8 * v25) = v13;
    ++*(_DWORD *)v14;
  }
  else
  {
    v21 = -1073741801;
  }
LABEL_21:
  *v30 = v15;
  RtlReleaseSRWLockExclusive(SRWLock[0]);
  return v21;
}
