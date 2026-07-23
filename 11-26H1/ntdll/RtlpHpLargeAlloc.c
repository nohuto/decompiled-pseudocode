/*
 * XREFs of RtlpHpLargeAlloc @ 0x18006FE4C
 * Callers:
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapValidateProtection @ 0x18006ED00 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 *     RtlpHpTlLogVAChange @ 0x18006F198 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x180070DFC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180070EC0 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpLargeLockAcquire @ 0x18007100C (RtlpHpLargeLockAcquire.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlRbInsertNodeEx @ 0x18008CB50 (RtlRbInsertNodeEx.c)
 *     RtlpHeapLogRangeReserve @ 0x180113B10 (RtlpHeapLogRangeReserve.c)
 *     RtlHeapZero @ 0x1801641D0 (RtlHeapZero.c)
 */

PVOID __fastcall RtlpHpLargeAlloc(char *BaseAddress, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v6; // rax
  _RTL_BALANCED_NODE *v7; // rsi
  BOOL v8; // edi
  unsigned int v9; // r12d
  __int64 v10; // r14
  __m128i *i; // rcx
  __int128 v12; // xmm0
  unsigned __int64 v13; // r9
  int v14; // r8d
  int v15; // eax
  ULONG v16; // eax
  ULONG_PTR v17; // r14
  unsigned int v18; // r13d
  int v19; // r14d
  unsigned __int64 v20; // r9
  int v21; // r8d
  bool v22; // cf
  ULONG v23; // eax
  PVOID v24; // rax
  unsigned __int64 v25; // rdi
  _RTL_RB_TREE *v26; // rcx
  unsigned __int64 v27; // rdx
  BOOLEAN v28; // al
  unsigned __int64 v29; // rax
  PVOID v30; // rdi
  __int64 v31; // rcx
  _BYTE *v32; // r8
  __int8 *v34; // rcx
  bool v35; // zf
  __m128i *v36; // rdx
  __int8 *v37; // rax
  PVOID BaseAddressa; // [rsp+30h] [rbp-50h] BYREF
  __int64 v39; // [rsp+38h] [rbp-48h] BYREF
  __m128i *v40; // [rsp+40h] [rbp-40h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR v42[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v43; // [rsp+70h] [rbp-10h]
  __int16 v44; // [rsp+C8h] [rbp+48h]

  v44 = a2;
  v39 = 0LL;
  BaseAddressa = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  *(_OWORD *)RegionSize = *(_OWORD *)BaseAddress;
  v6 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, (__int128 *)RegionSize);
  v7 = (_RTL_BALANCED_NODE *)v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    v8 = 0;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    if ( (*((_DWORD *)BaseAddress + 5) & 0x4000000) != 0 )
      v8 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    v9 = 0;
    if ( !v8 )
      goto LABEL_25;
    v10 = 0x200000LL;
    for ( i = (__m128i *)(a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF); ; i = (__m128i *)(a3 + (v9 << 12)) )
    {
      v12 = *(_OWORD *)BaseAddress;
      v13 = *((_QWORD *)BaseAddress + 1);
      v14 = (unsigned __int8)BYTE1(*(_QWORD *)BaseAddress);
      v15 = *((_DWORD *)BaseAddress + 5) & 0x40000000;
      v39 = (__int64)i;
      *(_OWORD *)RegionSize = v12;
      v16 = RtlpHpHeapValidateProtection(BaseAddress, v15 != 0 ? 64 : 4, v14, v13);
      if ( (int)RtlpHpAllocVA(&BaseAddressa, (__m128i **)&v39, v10, 0x2000u, v16, (__m128i *)RegionSize) < 0
        || (*(_OWORD *)v42 = 0LL,
            v43 = 0LL,
            RtlpHpVaMgrCtxQuery(&unk_1801C6958, BaseAddressa, v42),
            *(_QWORD *)v43 = BaseAddress,
            RegionSize[0] = (a3 + 4095) >> 12,
            v17 = RegionSize[0] << 12,
            v40 = (__m128i *)(RegionSize[0] << 12),
            !(unsigned int)RtlpHpSegHeapCheckCommitLimit(RegionSize[0] << 12, BaseAddress)) )
      {
LABEL_54:
        v30 = 0LL;
        *(_OWORD *)v42 = *(_OWORD *)BaseAddress;
        RtlpHpMetadataFree(v7, v42);
        goto LABEL_23;
      }
      v18 = 4096;
      if ( v8 )
      {
        v18 = 536875008;
        v40 = (__m128i *)(v17 - ((v17 - 1) & 0x1FFFFF) + 0x1FFFFF);
        v19 = a4 & 2;
      }
      else
      {
        v19 = a4 & 2;
        if ( (a4 & 2) != 0 )
          v18 = 1073745920;
      }
      v20 = *((_QWORD *)BaseAddress + 1);
      v21 = (unsigned __int8)BYTE1(*(_QWORD *)BaseAddress);
      v22 = (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0;
      *(_OWORD *)v42 = *(_OWORD *)BaseAddress;
      v23 = RtlpHpHeapValidateProtection(BaseAddress, v22 ? 64 : 4, v21, v20);
      if ( (int)RtlpHpAllocVA(&BaseAddressa, &v40, 0LL, v18, v23, (__m128i *)v42) >= 0 )
        break;
      if ( !v8 )
        goto LABEL_54;
      v8 = 0;
      v34 = (__int8 *)(((unsigned __int64)BaseAddressa + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
      v36 = (__m128i *)((_BYTE *)BaseAddressa + v39 - v34);
      v35 = (char *)BaseAddressa + v39 == v34;
      BaseAddressa = v34;
      v39 = (__int64)v36;
      if ( !v35 )
      {
        RtlpHpVaMgrCtxFree((__int64)&unk_1801C6958, &BaseAddressa, (ULONG_PTR *)&v39);
        if ( (RtlpHpHeapFeatures & 0x10) != 0 )
          RtlpHpTlLogVAChange(0x8000, v39, (__int64)BaseAddressa, 0);
      }
      BaseAddressa = 0LL;
      v9 = 0;
LABEL_25:
      v10 = 0LL;
      if ( (unsigned __int8)(BYTE1(*(_QWORD *)BaseAddress) - 2) > 2u )
        v9 = 1;
    }
    if ( v8 && v19 )
      RtlHeapZero(BaseAddressa, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v24 = BaseAddressa;
    v7[1].Children[1] = (_RTL_BALANCED_NODE *)((unsigned __int64)v7[1].Children[1] & 0xFFD);
    v25 = RegionSize[0];
    v7[1].Children[0] = (_RTL_BALANCED_NODE *)v24;
    v7[1].Children[1] = (_RTL_BALANCED_NODE *)((unsigned __int64)v7[1].Children[1] | (2 * (v9 | (v25 << 11))));
    _BitScanForward64((unsigned __int64 *)&v24, v39);
    v7[1].Children[1] = (_RTL_BALANCED_NODE *)((4LL * (_QWORD)v24) ^ ((__int64)v7[1].Children[1] ^ (4LL * (_QWORD)v24)) & 0xFFFFFFFFFFFFFF03uLL);
    LOWORD(v7[1].Children[0]) = ((_WORD)v25 << 12) - v44;
    RtlpHpLargeLockAcquire(BaseAddress);
    v26 = (_RTL_RB_TREE *)(BaseAddress + 72);
    v27 = *((_QWORD *)BaseAddress + 9);
    if ( (BaseAddress[80] & 1) != 0 )
    {
      if ( v27 )
        v27 ^= (unsigned __int64)v26;
      else
        v27 = 0LL;
    }
    v28 = 0;
    if ( v27 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)BaseAddressa < (*(_QWORD *)(v27 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v29 = *(_QWORD *)v27;
          if ( (BaseAddress[80] & 1) != 0 )
          {
            if ( !v29 )
              goto LABEL_49;
            v29 ^= v27;
          }
          if ( !v29 )
          {
LABEL_49:
            v28 = 0;
            break;
          }
        }
        else
        {
          v29 = *(_QWORD *)(v27 + 8);
          if ( (BaseAddress[80] & 1) != 0 )
          {
            if ( !v29 )
            {
LABEL_18:
              v28 = 1;
              break;
            }
            v29 ^= v27;
          }
          if ( !v29 )
            goto LABEL_18;
        }
        v27 = v29;
      }
    }
    RtlRbInsertNodeEx(v26, (PRTL_BALANCED_NODE)v27, v28, v7);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    _InterlockedAdd64((volatile signed __int64 *)BaseAddress + 11, v39 / 4096);
    _InterlockedAdd64((volatile signed __int64 *)BaseAddress + 12, v25);
    v30 = BaseAddressa;
    BaseAddressa = 0LL;
    if ( RtlGetCurrentServiceSessionId() )
      v31 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v31 = 2147353480LL;
    if ( *(_BYTE *)v31 )
    {
      RtlpHeapLogRangeReserve(BaseAddress, v30, v39);
      goto LABEL_23;
    }
  }
  else
  {
    v30 = 0LL;
LABEL_23:
    v32 = BaseAddressa;
    if ( BaseAddressa )
    {
      v37 = (__int8 *)(((unsigned __int64)BaseAddressa + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
      v35 = (char *)BaseAddressa + v39 == v37;
      BaseAddressa = v37;
      v39 = &v32[v39] - v37;
      if ( !v35 )
      {
        RtlpHpVaMgrCtxFree((__int64)&unk_1801C6958, &BaseAddressa, (ULONG_PTR *)&v39);
        if ( (RtlpHpHeapFeatures & 0x10) != 0 )
          RtlpHpTlLogVAChange(0x8000, v39, (__int64)BaseAddressa, 0);
      }
    }
  }
  return v30;
}
