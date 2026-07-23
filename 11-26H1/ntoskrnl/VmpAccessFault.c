/*
 * XREFs of VmpAccessFault @ 0x1408224C4
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 *     VmAccessFault1 @ 0x140821F70 (VmAccessFault1.c)
 *     VmAccessFault2 @ 0x140821FB0 (VmAccessFault2.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExFreeToLookasideListEx @ 0x14039FE30 (ExFreeToLookasideListEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E50D0 (ExAllocateFromLookasideListEx.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     VmpAccessFaultBatch @ 0x1406C45B0 (VmpAccessFaultBatch.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VmpPrefetchForVirtualFault @ 0x14082313C (VmpPrefetchForVirtualFault.c)
 *     VmpLogAccessFault @ 0x140824158 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x140824328 (VmpLogAccessFaultRange.c)
 */

__int64 __fastcall VmpAccessFault(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  void *v9; // rbx
  _QWORD *v12; // r9
  ULONG64 v13; // rax
  __int64 v14; // rdi
  char *v15; // r13
  char *v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  signed __int64 v19; // rbp
  _QWORD *v20; // rdx
  char *v21; // r8
  char *v22; // rax
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r11
  int v29; // ecx
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // r11
  __int64 v33; // r10
  __int64 v34; // rcx
  int v35; // edi
  __int64 v36; // rbx
  __int64 v37; // r10
  __int64 v38; // r11
  _QWORD *v39; // r8
  unsigned __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // r10
  __int64 v43; // r11
  int v45; // [rsp+60h] [rbp-3B8h]
  __int64 v46; // [rsp+68h] [rbp-3B0h]
  _QWORD *v47; // [rsp+70h] [rbp-3A8h]
  unsigned __int64 v48; // [rsp+78h] [rbp-3A0h]
  ULONG64 v50; // [rsp+88h] [rbp-390h]
  unsigned __int64 QpcTimeStamp; // [rsp+90h] [rbp-388h] BYREF
  unsigned __int64 v52; // [rsp+98h] [rbp-380h]
  unsigned __int64 v53; // [rsp+A0h] [rbp-378h]
  _QWORD *v54; // [rsp+A8h] [rbp-370h]
  char *v55; // [rsp+B0h] [rbp-368h]
  PEX_SPIN_LOCK SpinLock; // [rsp+B8h] [rbp-360h]
  unsigned __int64 v57; // [rsp+C0h] [rbp-358h]
  char v58; // [rsp+D0h] [rbp-348h] BYREF

  v57 = a4;
  v9 = 0LL;
  v47 = a2;
  v45 = 16;
  v12 = a2;
  if ( stru_140F06A28.InitialStack
    && *(_DWORD *)stru_140F06A28.InitialStack
    && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 8LL) )
  {
    v13 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    v12 = v47;
    v50 = v13;
  }
  else
  {
    v50 = 0LL;
  }
  if ( (a5 & 0xFFFFFF00) != 0 )
    NT_ASSERT("(FaultTypeFlags & ~0xFF) == 0");
  if ( (a6 & 0xFFFFFFFD) != 0 )
    NT_ASSERT("(AllowedPromotionFlags & ~0x02) == 0");
  SpinLock = (PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( !SpinLock )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( (a5 & 0x20) != 0 && !a3 && (a5 & 0x18) == 0 )
    VmpPrefetchForVirtualFault(a1, v12, a4);
  v14 = 0LL;
  v15 = &v58;
  if ( a4 > 0x10 || a1[1] > 0x10uLL )
  {
    v16 = (char *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&VmpLargeFaultBatchLookasideList);
    v9 = v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 1) = 0;
      v15 = v16 + 32;
      *((_QWORD *)v16 + 1) = v16 + 32;
      v45 = 512;
      *(_DWORD *)v16 = 512;
      *((_QWORD *)v16 + 2) = v16 + 24608;
      *((_QWORD *)v16 + 3) = v16 + 24608;
    }
  }
  v17 = 2 * a4;
  v18 = (char *)a1 - a3;
  v55 = a3;
  QpcTimeStamp = (char *)a1 - a3;
  v19 = a3 - (char *)a1;
  v20 = a1;
  v21 = a3;
  while ( 1 )
  {
    v54 = v20;
    if ( v20 >= &a1[v17] )
      break;
    v22 = (char *)v20 + v19;
    v23 = *v20;
    v24 = *(_QWORD *)((char *)v20 + v19 + v18 + 8) + *v20;
    v25 = *v47;
    v48 = v24;
    v46 = *v47;
    if ( a3 && (v26 = *((_QWORD *)v22 + 1)) != 0 )
    {
      v27 = *(_QWORD *)v21;
      v28 = v27 + v26;
    }
    else
    {
      v27 = 0LL;
      v28 = 0LL;
    }
    v52 = v28;
    v53 = v27;
    if ( stru_140F06A28.InitialStack && *(_DWORD *)stru_140F06A28.InitialStack )
    {
      if ( tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 16LL) )
      {
        VmpLogAccessFaultRange(v29, v25, v23, v31, v30, v32, a5, a6, a7, v57, a8);
        v25 = v46;
      }
      goto LABEL_30;
    }
    while ( v23 < v24 )
    {
      if ( !MmIsUserAddress(v25 << 12) )
        NT_ASSERT("MmIsUserAddress((PVOID)(SystemVpn << 12L))");
      v33 = v46;
      v34 = 6 * v14;
      *(_QWORD *)&v15[8 * v34 + 24] = v46 & 0xFFFFFFFFFFFFFLL;
      *(_QWORD *)&v15[8 * v34 + 32] = v23 & 0xFFFFFFFFFFFFFLL;
      if ( v23 < v52 && v23 >= v53 )
        *(_QWORD *)&v15[48 * v14 + 32] = v23 & 0xFFFFFFFFFFFFFLL | 0x800000000000000LL;
      v14 = (unsigned int)(v14 + 1);
      if ( (_DWORD)v14 == v45 )
      {
        v35 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v15, v14, (int)v9, a5, a6, a7, a8);
        if ( v35 < 0 )
          goto LABEL_45;
        v33 = v46;
        v14 = 0LL;
      }
      ++v23;
      v25 = v33 + 1;
      v46 = v25;
LABEL_30:
      v24 = v48;
    }
    v21 = v55 + 16;
    v18 = QpcTimeStamp;
    v20 = v54 + 2;
    ++v47;
    v55 += 16;
  }
  if ( !(_DWORD)v14
    || (v35 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v15, v14, (int)v9, a5, a6, a7, a8), v35 >= 0) )
  {
    v35 = 0;
  }
LABEL_45:
  if ( v9 )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&VmpLargeFaultBatchLookasideList, v9);
  if ( v50 )
  {
    v36 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp) - v50;
    v37 = 0LL;
    v38 = 0LL;
    if ( a1 < &a1[v17] )
    {
      v39 = a1 + 1;
      v40 = ((unsigned __int64)(v17 * 8 - 1) >> 4) + 1;
      do
      {
        v37 += *v39;
        if ( a3 )
          v38 += *(_QWORD *)((char *)v39 + v19);
        v39 += 2;
        --v40;
      }
      while ( v40 );
    }
    if ( stru_140F06A28.InitialStack
      && *(_DWORD *)stru_140F06A28.InitialStack
      && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 8LL) )
    {
      VmpLogAccessFault(v41, a5, a6, a7, v57, v42, v45, v43, v36, a8, v35);
    }
  }
  return (unsigned int)v35;
}
