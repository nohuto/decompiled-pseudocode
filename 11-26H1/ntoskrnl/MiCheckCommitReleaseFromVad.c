/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x1406E8AD0
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x1406E8F3C (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x1406E8FF4 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int64 v6; // r14
  unsigned __int64 v8; // r11
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  char v15; // r15
  __int64 NextPageTable; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r14
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rbx
  _KPROCESS *v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v26; // rax
  BOOL v27; // eax
  __int64 v28; // rbx
  _QWORD *v29; // rax
  bool v30; // zf
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  unsigned __int64 PrototypePteDirect; // rax
  _QWORD *CloneAddress; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v40; // [rsp+30h] [rbp-58h] BYREF
  __int64 v41; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-48h]
  char v45; // [rsp+A8h] [rbp+20h]

  v6 = a3;
  v8 = *(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32);
  v41 = 0LL;
  v10 = 0LL;
  v11 = 8 * (v8 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v12 = (*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL;
  v13 = 8 * v12 - 0x98000000000LL;
  v42 = v13;
  v15 = MiLockWorkingSetShared(a3, v12, 0xFFFFFFFFFLL);
  v45 = v15;
  while ( v11 <= v13 )
  {
    NextPageTable = MiGetNextPageTable(v11, v13, v15, 0, &v40);
    v17 = NextPageTable;
    if ( NextPageTable == v11 )
    {
      v19 = 0LL;
    }
    else
    {
      if ( NextPageTable )
        v18 = (__int64)(NextPageTable - v11) >> 3;
      else
        v18 = ((__int64)(v13 - v11) >> 3) + 1;
      v10 += MiComputeCommitChargeForZeroPteRange(a4, v11, v18);
      v19 = 0LL;
      if ( !v17 )
        break;
    }
    v11 = v17;
    v20 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v40 = v20;
    v21 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v21 > v13 )
      v21 = v13;
    if ( v17 <= v21 )
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)v11;
        if ( v11 >= 0xFFFFF6FB7DBED000uLL
          && v11 <= 0xFFFFF6FB7DBED7F8uLL
          && (v22 & 1) != 0
          && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
        {
          v23 = MiPteHasShadow();
          if ( v23 )
          {
            KernelWaitTime = v23[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v26 = *(_QWORD *)(KernelWaitTime + 8 * ((v11 >> 3) & 0x1FF));
              if ( (v26 & 0x20) != 0 )
                v24 |= 0x20uLL;
              v22 = v24 | 0x42;
              if ( (v26 & 0x42) == 0 )
                v22 = v24;
            }
          }
        }
        if ( !v22 )
        {
          v36 = MiComputeCommitChargeForZeroPteRange(a4, v11, 1LL);
          goto LABEL_58;
        }
        if ( (v22 & 1) != 0 )
          break;
        if ( (v22 & 0x400) != 0 )
        {
          LOBYTE(v31) = MiIsPrototypePteVadLookup(v22);
          if ( v31 )
          {
            v32 = v10 + 1;
            if ( ((v22 >> 5) & 5) != 5 )
              v32 = v10;
            v10 = v32;
            goto LABEL_59;
          }
          LOBYTE(v33) = MiIsPrototypePteVadLookup(v22);
          if ( v33 || (v22 & 0x800) == 0 )
          {
            if ( *(_QWORD *)(a2 + 640) == v19
              || (PrototypePteDirect = MiGetPrototypePteDirect(v22),
                  CloneAddress = MiLocateCloneAddress(a2, PrototypePteDirect),
                  v19 = 0LL,
                  !CloneAddress) )
            {
              v36 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1LL, &v41);
LABEL_58:
              v10 += v36;
              v19 = 0LL;
              goto LABEL_59;
            }
          }
          goto LABEL_59;
        }
        if ( (v22 & 0x800) != 0 )
        {
          v37 = MiLockTransitionLeafPageEx(v11, 0LL, 0);
          v19 = 0LL;
          if ( v37 )
          {
            if ( (*(_BYTE *)(v37 + 34) & 0x10) == 0
              && (*(_DWORD *)(v37 + 16) & 8) == 0
              && !(unsigned __int16)*(_DWORD *)(v37 + 32) )
            {
              ++*a6;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v11 -= 8LL;
          }
          goto LABEL_59;
        }
        if ( ((v22 >> 3) & 1) == 0 )
        {
          if ( ((v22 >> 5) & 0x1F) == 0x10 )
            goto LABEL_59;
LABEL_54:
          ++v10;
          goto LABEL_59;
        }
        if ( a5 != (_DWORD)v19 )
        {
          v30 = (unsigned __int16)v22 >> 12 == *(_DWORD *)(a1 + 1300);
LABEL_53:
          if ( v30 )
            goto LABEL_54;
        }
LABEL_59:
        v11 += 8LL;
        if ( v11 > v21 )
        {
          v20 = v40;
          v13 = v42;
          goto LABEL_61;
        }
      }
      if ( (v22 & 0x200) == 0 )
        goto LABEL_59;
      if ( (*(_DWORD *)(a4 + 48) & 0x1C) == 0x10 )
      {
        v27 = MiRotatedToFrameBuffer(v11);
        v19 = 0LL;
        if ( v27 )
          goto LABEL_59;
      }
      v28 = (v22 >> 12) & 0xFFFFFFFFFFLL;
      if ( *(__int64 *)(48 * v28 - 0x220000000000LL + 8) > 0
        && (*(_QWORD *)(48 * v28 - 0x220000000000LL + 40) & 0x10000000000LL) == 0 )
      {
        goto LABEL_59;
      }
      if ( *(_QWORD *)(a2 + 640) == v19 )
        goto LABEL_54;
      v29 = MiLocateCloneAddress(a2, *(_QWORD *)(48 * v28 - 0x220000000000LL + 8) | 0x8000000000000000uLL);
      v19 = 0LL;
      v30 = v29 == 0LL;
      goto LABEL_53;
    }
LABEL_61:
    v38 = v20;
    v6 = a3;
    MiUnlockPageTableInternal(a3, v38);
    v15 = v45;
  }
  LOBYTE(v14) = v15;
  MiUnlockWorkingSetShared(v6, v14);
  return v10;
}
