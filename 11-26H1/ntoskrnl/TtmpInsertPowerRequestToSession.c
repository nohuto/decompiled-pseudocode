/*
 * XREFs of TtmpInsertPowerRequestToSession @ 0x1407ECC14
 * Callers:
 *     TtmNotifySessionPowerRequestCreated @ 0x1407EBF60 (TtmNotifySessionPowerRequestCreated.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1407EC118 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmpPowerRequestHashAllocator @ 0x1407ECF30 (TtmpPowerRequestHashAllocator.c)
 *     TtmpPowerRequestHashDeallocator @ 0x1407ECF54 (TtmpPowerRequestHashDeallocator.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall TtmpInsertPowerRequestToSession(unsigned int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  char v8; // r12
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 Pool2; // rax
  _QWORD *v14; // r14
  __int64 v15; // rbx
  char *v16; // r8
  char v17; // cl
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // r9
  __int64 v21; // r12
  _QWORD *v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v29; // [rsp+20h] [rbp-38h] BYREF

  v5 = a2;
  v29 = 0LL;
  v8 = 0;
  v9 = TtmpAcquireSessionById(&v29, a1);
  v10 = v29;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 3375LL;
LABEL_3:
    TtmiLogError("TtmpInsertPowerRequestToSession", v12, v11, -1LL);
    goto LABEL_28;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v14 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v12 = 3384LL;
    v11 = 3221225626LL;
    goto LABEL_3;
  }
  *(_QWORD *)(Pool2 + 24) = a4;
  *(_DWORD *)(Pool2 + 20) = a3;
  *(_QWORD *)(Pool2 + 8) = v5;
  *(_DWORD *)(Pool2 + 16) = v5;
  *(_QWORD *)(Pool2 + 32) = a5;
  *(_DWORD *)(Pool2 + 40) = 0;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
  *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
  v15 = (unsigned int)(2 * (*(_DWORD *)(v10 + 276) >> 5));
  if ( *(_DWORD *)(v10 + 272) < (unsigned int)v15 )
    goto LABEL_27;
  if ( (unsigned int)v15 < 4 )
    v15 = 4LL;
  v16 = (char *)TtmpPowerRequestHashAllocator(8LL * (unsigned int)v15, 0LL);
  if ( v16 )
  {
    if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
    {
      v17 = -1;
      do
      {
        ++v17;
        LODWORD(v15) = (unsigned int)v15 >> 1;
      }
      while ( (_DWORD)v15 );
      v15 = (unsigned int)(1 << v17);
    }
    if ( (unsigned int)v15 > 0x4000000 )
      v15 = 0x4000000LL;
    v18 = (unsigned int)v15;
    if ( v16 > &v16[8 * v15] )
      v18 = 0LL;
    if ( v18 )
      memset64(v16, (v10 + 272) | 1, v18);
    v19 = 0;
    v20 = -1LL << (*(_BYTE *)(v10 + 276) & 0x1F);
    if ( (*(_DWORD *)(v10 + 276) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v21 = *(_QWORD *)(v10 + 280);
        while ( 1 )
        {
          v22 = *(_QWORD **)(v21 + 8LL * v19);
          if ( ((unsigned __int8)v22 & 1) != 0 )
            break;
          *(_QWORD *)(v21 + 8LL * v19) = *v22;
          v29 = v20 & v22[1];
          v23 = ((_DWORD)v15 - 1) & (HIBYTE(v29)
                                   + 37
                                   * (BYTE6(v29)
                                    + 37
                                    * (BYTE5(v29)
                                     + 37
                                     * (BYTE4(v29)
                                      + 37
                                      * (BYTE3(v29)
                                       + 374026047
                                       + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * (unsigned int)(unsigned __int8)v29)))))));
          *v22 = *(_QWORD *)&v16[8 * v23];
          *(_QWORD *)&v16[8 * v23] = v22;
        }
        ++v19;
      }
      while ( v19 < *(_DWORD *)(v10 + 276) >> 5 );
    }
    v24 = *(_QWORD *)(v10 + 280);
    *(_QWORD *)(v10 + 280) = v16;
    *(_DWORD *)(v10 + 276) = (32 * v15) | *(_DWORD *)(v10 + 276) & 0x1F;
    if ( v24 )
      TtmpPowerRequestHashDeallocator(v24, 0LL, v16, v20);
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v10 + 276) >= 0x20u )
  {
LABEL_27:
    v8 = 1;
    v25 = *(_DWORD *)(v10 + 276) >> 5;
    v29 = v14[1] & (-1LL << (*(_DWORD *)(v10 + 276) & 0x1F));
    v26 = *(_QWORD *)(v10 + 280);
    v27 = (v25 - 1) & (HIBYTE(v29)
                     + 37
                     * (BYTE6(v29)
                      + 37
                      * (BYTE5(v29)
                       + 37
                       * (BYTE4(v29)
                        + 37
                        * (BYTE3(v29)
                         + 374026047
                         + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * (unsigned int)(unsigned __int8)v29)))))));
    *v14 = *(_QWORD *)(v26 + 8 * v27);
    *(_QWORD *)(v26 + 8 * v27) = v14;
    ++*(_DWORD *)(v10 + 272);
    goto LABEL_28;
  }
  TtmiLogError("TtmpInsertPowerRequestToSession", 3407LL, 3221225626LL, -1LL);
  ExFreePoolWithTag(v14, 0x52507454u);
LABEL_28:
  if ( v10 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  return v8;
}
