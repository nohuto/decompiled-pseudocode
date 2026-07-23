/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x140701500
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x14087994C (MiPrepareToHotPatchImage.c)
 *     MmPrepareImagePagesForHotPatch @ 0x14087B034 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     MiLogHotPatchPagesLocked @ 0x140878900 (MiLogHotPatchPagesLocked.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiPrepareImagePagesForHotPatch(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 p_Blink; // r15
  __int64 v6; // rdi
  struct _MDL *v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 result; // rax
  unsigned __int64 v13; // r13
  int v14; // ebx
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // ebx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r13
  struct _MDL *v30; // r15
  int v31; // ebx
  unsigned __int64 v32; // r9
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v34; // r12
  __int64 v35; // rbx
  unsigned __int16 v36; // cx
  int v37; // ecx
  int v38; // r9d
  int v39; // r10d
  struct _MDL *v40; // rax
  __int64 v41; // rax
  int v42; // [rsp+30h] [rbp-B8h]
  __int64 v43; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+40h] [rbp-A8h]
  __int64 v45; // [rsp+48h] [rbp-A0h]
  _KPROCESS *v46; // [rsp+50h] [rbp-98h]
  __int64 v47; // [rsp+58h] [rbp-90h]
  unsigned __int8 Mdl; // [rsp+60h] [rbp-88h]
  struct _MDL *v49; // [rsp+68h] [rbp-80h]
  __int64 v50; // [rsp+70h] [rbp-78h] BYREF
  __int128 v51; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+90h] [rbp-58h]
  _KPROCESS *v53; // [rsp+98h] [rbp-50h]
  unsigned int *v54; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v58; // [rsp+108h] [rbp+20h] BYREF

  v50 = 0LL;
  v51 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v46 = Process;
  v53 = Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v6 = *a1;
  v43 = v6;
  v7 = 0LL;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v52 = v8 + 8 * (a3 - 1);
  v47 = 0LL;
  v9 = MiCountSharedPages(v6, v8, v52);
  v45 = v9;
  if ( v9 )
  {
    result = MiChargeFullProcessCommitment(Process, v9);
    if ( (int)result < 0 )
      return result;
  }
  v44 = a2;
  v13 = 0LL;
  v14 = 1;
  v42 = 1;
  LOBYTE(v58) = MiLockWorkingSetShared(p_Blink, v10, v11);
  while ( v8 <= v52 )
  {
    if ( v14 || (v8 & 0xFFF) == 0 )
    {
      if ( v13 )
        MiUnlockPageTableInternal(p_Blink, v13);
      v13 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v8, (*(_DWORD *)(v6 + 48) >> 10) & 0x7F, v58, 0);
      v42 = 0;
    }
    v15 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 1) != 0 )
    {
      if ( *(__int64 *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) >= 0
        || *(__int64 *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8) > 0
        && (*(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) & 0x10000000000LL) == 0 )
      {
        goto LABEL_22;
      }
      v19 = *(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8);
      if ( (v19 | 0x8000000000000000uLL) != MiGetProtoPteAddress(v43, v44 >> 12, 0, &v54) )
        goto LABEL_22;
      if ( (v15 & 0x800) != 0 )
      {
        MiUnlockPageTableInternal(p_Blink, v13);
        LOBYTE(v20) = v58;
        MiUnlockWorkingSetShared(p_Blink, v20);
        v21 = -1073741755;
        goto LABEL_52;
      }
      v22 = MiCopyOnWrite(v44, v8, -1LL, 0, &v50);
      if ( v22 >= 0 )
      {
        if ( (v15 & 0x200) == 0 )
          ++v47;
LABEL_22:
        v8 += 8LL;
        v44 += 4096LL;
        v6 = v43;
        v14 = v42;
      }
      else
      {
        MiUnlockPageTableInternal(p_Blink, v13);
        LOBYTE(v23) = v58;
        MiUnlockWorkingSetShared(p_Blink, v23);
        v13 = 0LL;
        MiCopyOnWriteCheckConditions(p_Blink, v22, v50);
        v14 = 1;
        v42 = 1;
        MiLockWorkingSetShared(p_Blink, v24, v25);
        v6 = v43;
      }
    }
    else
    {
      MiUnlockPageTableInternal(p_Blink, v13);
      LOBYTE(v16) = v58;
      MiUnlockWorkingSetShared(p_Blink, v16);
      v13 = 0LL;
      RtlReadULong64FromUser(v44);
      v14 = 1;
      v42 = 1;
      MiLockWorkingSetShared(p_Blink, v17, v18);
    }
  }
  MiUnlockPageTableInternal(p_Blink, v13);
  LOBYTE(v26) = v58;
  MiUnlockWorkingSetShared(p_Blink, v26);
  v28 = IopAllocateMdl(a2, (_DWORD)a3 << 12, 0, v27, 0LL, 0);
  v7 = (struct _MDL *)v28;
  v49 = (struct _MDL *)v28;
  if ( v28 )
  {
    *(_QWORD *)&v51 = 0LL;
    v21 = MiProbeAndLockPages(v28, &v51);
    if ( v21 >= 0 )
    {
      v7->MdlFlags |= 0x80u;
      v29 = 0LL;
      v30 = v7 + 1;
      v31 = a3;
      v32 = (unsigned __int64)&v7[1] + 8 * a3;
      v58 = v32;
      CurrentIrql = KeGetCurrentIrql();
      Mdl = CurrentIrql;
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
        v32 = v58;
      }
      if ( (unsigned __int64)v30 < v32 )
      {
        v34 = v58;
        do
        {
          v35 = 48 * (__int64)v30->Next;
          LODWORD(v58) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 - 0x220000000000LL + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v58);
            while ( *(__int64 *)(v35 - 0x220000000000LL + 24) < 0 );
          }
          v36 = ((*(_QWORD *)(v35 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 2;
          if ( (*(_BYTE *)(v35 - 0x220000000000LL + 34) & 8) == 0 )
            v36 = ((*(_QWORD *)(v35 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
          if ( (unsigned __int16)*(_DWORD *)(v35 - 0x220000000000LL + 32) > v36 )
            ++v29;
          _InterlockedAnd64((volatile signed __int64 *)(v35 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v30 = (struct _MDL *)((char *)v30 + 8);
        }
        while ( (unsigned __int64)v30 < v34 );
        v7 = v49;
        CurrentIrql = Mdl;
        v31 = a3;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( v29
        && stru_140E366D8.FirstArgument
        && *(_DWORD *)stru_140E366D8.FirstArgument
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
      {
        MiLogHotPatchPagesLocked(v37, a2, (v31 << 12) + a2 - 1, v38, v39, v29);
      }
      v40 = (struct _MDL *)a1[7];
      if ( v40 )
        v7->Next = v40;
      a1[7] = (__int64)v7;
      v7 = 0LL;
      v21 = 0;
    }
  }
  else
  {
    v21 = -1073741670;
  }
LABEL_52:
  if ( v47 )
  {
    v41 = v47 + (((unsigned __int64)*(unsigned __int8 *)(v43 + 34) << 32) | *(unsigned int *)(v43 + 52));
    *(_DWORD *)(v43 + 52) += v47;
    *(_BYTE *)(v43 + 34) = BYTE4(v41);
  }
  if ( v45 != v47 )
    MiReturnFullProcessCommitment(v46, v45 - v47);
  if ( v7 )
    IoFreeMdl(v7);
  return (unsigned int)v21;
}
