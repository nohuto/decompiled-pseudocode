/*
 * XREFs of MiProtectPrivateMemory @ 0x1403136E8
 * Callers:
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiProtectGoodCitizen @ 0x140313438 (MiProtectGoodCitizen.c)
 *     MiProtectFlushPayload @ 0x1403134BC (MiProtectFlushPayload.c)
 *     MiProtectInitialVaAttributes @ 0x140313660 (MiProtectInitialVaAttributes.c)
 *     MiComputeCheckPte @ 0x140313A2C (MiComputeCheckPte.c)
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033EF54 (MiSetProtectionOnTransitionPte.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiProtectPageFilePte @ 0x140480B38 (MiProtectPageFilePte.c)
 *     MiMakeProtoLeafValid @ 0x1404B9358 (MiMakeProtoLeafValid.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  unsigned __int64 v7; // rbx
  _KPROCESS *Process; // r13
  char v13; // al
  unsigned __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rdx
  char v21; // r14
  ULONG_PTR v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r8
  bool v26; // zf
  __int64 result; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // [rsp+38h] [rbp-41h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+40h] [rbp-39h]
  KIRQL v32; // [rsp+48h] [rbp-31h]
  char v33; // [rsp+49h] [rbp-30h]
  char v34; // [rsp+4Ah] [rbp-2Fh]
  unsigned int v35; // [rsp+4Ch] [rbp-2Dh]
  int v36; // [rsp+50h] [rbp-29h]
  unsigned int v37; // [rsp+54h] [rbp-25h]
  int v38; // [rsp+58h] [rbp-21h]
  __int64 v39; // [rsp+60h] [rbp-19h]
  __int64 v40; // [rsp+68h] [rbp-11h]
  unsigned __int64 v41; // [rsp+70h] [rbp-9h]
  unsigned __int64 v42; // [rsp+78h] [rbp-1h]
  __int64 v43; // [rsp+80h] [rbp+7h]
  __int64 v44; // [rsp+90h] [rbp+17h] BYREF

  v7 = *(unsigned int *)(a1 + 48);
  memset_0(&v30, 0, 0x60uLL);
  v30 = a1;
  v37 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v13 = v34;
  if ( (a5 & 0x101) != 0 )
    v13 = 1;
  v34 = v13;
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = 1LL;
  v42 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (v7 & 0x80000) != 0 && (v7 & 0x200000) != 0 )
  {
    v28 = (v7 >> 17) & 3;
    v29 = 16LL;
    v40 = MiVadPageSizes[v28];
    if ( v40 != 16 )
      v29 = 1LL;
    v35 = MiVadPageIndices[v28];
    v39 = v29;
  }
  else
  {
    v40 = 1LL;
    v35 = 3;
  }
  v15 = (*(_DWORD *)(a1 + 48) >> 10) & 0x7F;
  v16 = MiComputePageCommitment(a2, a3, a1, (unsigned int)&v44, 0LL);
  if ( v16 != ((__int64)(v42 - v14) >> 3) + 1 )
    return 3221225517LL;
  v19 = v44;
  if ( !v44 || (result = MiChargeFullProcessCommitment(Process, v44), (int)result >= 0) )
  {
    v32 = MiLockWorkingSetShared((__int64)p_Blink, v17, v18);
    if ( v14 > v42 )
    {
LABEL_20:
      if ( v41 )
      {
        if ( v43 )
        {
          MiFlushTbList(v43);
          MiReleaseProcessorFlushList();
        }
        MiUnlockPageTableInternal((__int64)p_Blink, v41);
      }
      LOBYTE(v20) = v32;
      MiUnlockWorkingSetShared((__int64)p_Blink, v20);
      if ( v19 )
        MiReturnFullProcessCommitment(Process, v19);
      v26 = v36 == 0;
      *a6 = v38;
      if ( !v26 )
        *a7 = 1;
      return 0LL;
    }
    while ( 1 )
    {
      v21 = v33;
      if ( v33 )
      {
        MiProtectGoodCitizen((__int64)&v30, 0);
        v21 = v33;
      }
      v22 = MiComputeCheckPte(v14, v35);
      v41 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v22, v15, v32, 0);
      if ( v21 )
        break;
      if ( (unsigned int)MiProtectInitialVaAttributes((__int64)&v30, (__int64 *)v22) )
      {
        v33 = 1;
        goto LABEL_14;
      }
      v41 = 0LL;
      MiLockWorkingSetShared((__int64)p_Blink, v23, v24);
LABEL_31:
      if ( v14 > v42 )
      {
LABEL_19:
        v19 = v44;
        goto LABEL_20;
      }
    }
    while ( 1 )
    {
LABEL_14:
      v25 = *(_QWORD *)v22;
      if ( (*(_QWORD *)v22 & 1) != 0 )
      {
        if ( !(unsigned int)MiProtectValidPte(&v30, v22) )
          goto LABEL_31;
      }
      else if ( (v25 & 0x400) != 0 )
      {
        MiProtectFlushPayload(&v30);
        if ( (int)MiMakeProtoLeafValid(v22) >= 0 )
          goto LABEL_17;
      }
      else if ( (v25 & 0x800) != 0 )
      {
        if ( (unsigned int)MiSetProtectionOnTransitionPte(a1, v22, a4, 1LL) )
          goto LABEL_17;
      }
      else
      {
        MiProtectPageFilePte(&v30, v14);
      }
      v14 += 8 * v40;
      v22 = MiComputeCheckPte(v14, v35);
LABEL_17:
      if ( (v14 & 0xFFF) == 0 )
        goto LABEL_31;
      if ( v14 > v42 )
        goto LABEL_19;
    }
  }
  return result;
}
