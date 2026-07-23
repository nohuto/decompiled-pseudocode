/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x1402E5900
 * Callers:
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1404608E0 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, KIRQL a3, __int64 a4)
{
  int v4; // esi
  _KPROCESS *Process; // r15
  __int64 p_Blink; // r15
  unsigned int v9; // ebp
  int v10; // edi
  unsigned __int64 *v11; // r14
  ULONG_PTR v12; // rbx
  int SystemAddressValid; // r10d
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r11
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // rdx
  _KPROCESS *v21; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  struct _KPRCB *v25; // rcx
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  _KPROCESS *v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v35; // al
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-60h]
  unsigned __int64 v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+38h] [rbp-50h]
  unsigned __int64 v43; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]
  unsigned __int64 v45; // [rsp+50h] [rbp-38h]
  __int64 v46; // [rsp+58h] [rbp-30h]

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_DWORD *)a4 = 0;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v39 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0;
  v46 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_2:
  if ( v9 < 2 )
  {
    v10 = 3;
    v11 = &v39 + 4 * v9;
    while ( 1 )
    {
      if ( v10 < 1 )
      {
LABEL_53:
        ++v9;
        goto LABEL_2;
      }
      v12 = v11[v10];
      if ( v10 == 3 )
      {
        v19 = MiFastLockLeafPageTable(p_Blink, (__int64)(*v11 << 25) >> 16, 8u);
        if ( v19 )
        {
          if ( v19 == 3 )
          {
            v12 = v11[2];
            v10 = 2;
            SystemAddressValid = 0;
            goto LABEL_7;
          }
          v20 = v11[v19];
          if ( v20 == 0xFFFFF6FB7DBEDF68uLL )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v35 = *(_DWORD *)(p_Blink + 184) & 0xF;
            if ( !v35 )
            {
              v36 = 2LL;
LABEL_73:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v36]);
              goto LABEL_6;
            }
            if ( v35 != 7 )
            {
              v36 = 3LL;
              if ( v35 == 5 )
                v36 = 0LL;
              goto LABEL_73;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
          }
          else if ( (*(_DWORD *)(p_Blink + 184) & 0xF) != 0
                 || v20 < 0xFFFFF6FB7DBED000uLL
                 || v20 > 0xFFFFF6FB7DBEDFFFuLL
                 || (v37 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
          {
            if ( (*(_DWORD *)(p_Blink + 184) & 0xF) != 0 && v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              v38 = 2 * (unsigned int)((__int64)(v20 + 0x90482413000LL) >> 3);
              _InterlockedAnd((volatile signed __int32 *)&MiState + (v38 >> 5) + 1467, ~(3 << v38));
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)v20, 0xCFFFFFFFFFFFFFFFuLL);
            }
          }
          else
          {
            ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v37 + 4 * ((v20 >> 3) & 0x1FF)));
          }
        }
      }
LABEL_6:
      SystemAddressValid = MiMakeSystemAddressValid(v12, 0, a3, 4);
      if ( SystemAddressValid < 0 )
      {
        v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v15 = 0LL;
        v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v16 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_9;
      }
LABEL_7:
      v14 = *(_QWORD *)v12;
      v15 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = 0xFFFFF6FB7DBED000uLL;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        v21 = MiPteHasShadow();
        if ( v21 )
        {
          KernelWaitTime = v21[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v23 = *(_QWORD *)(KernelWaitTime + 8 * ((v12 >> 3) & 0x1FF));
            if ( (v23 & 0x20) != 0 )
              v14 |= 0x20uLL;
            v24 = v14;
            v14 |= 0x42uLL;
            if ( (v23 & 0x42) == 0 )
              v14 = v24;
          }
        }
      }
      v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
LABEL_9:
      if ( v14 )
      {
        if ( v9 )
          goto LABEL_12;
      }
      else
      {
        v4 = 1;
        v18 = (unsigned __int8)(1 << (v10 - 1));
        *(_BYTE *)(v9 + a4) = v18;
        if ( v9 )
          goto LABEL_12;
        if ( !v15 && ((*(&v43 + v10) ^ v12) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          *(_BYTE *)(a4 + 1) = v18;
          return;
        }
      }
      if ( v10 == 1 && ((v12 ^ v44) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        v11 = &v43;
        v9 = 1;
        if ( SystemAddressValid >= 0 )
        {
          v17 = *(_QWORD *)v44;
          if ( v44 >= v16 && v44 <= 0xFFFFF6FB7DBED7F8uLL && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
          {
            v29 = MiPteHasShadow();
            if ( v29 )
            {
              v31 = v29[2].KernelWaitTime;
              if ( v31 )
              {
                v32 = *(_QWORD *)(v31 + 8 * ((v30 >> 3) & 0x1FF));
                if ( (v32 & 0x20) != 0 )
                  v17 |= 0x20uLL;
                v33 = v17;
                v17 |= 0x42uLL;
                if ( (v32 & 0x42) == 0 )
                  v17 = v33;
              }
            }
          }
        }
        if ( !v17 )
          *(_BYTE *)(a4 + 1) = 1;
      }
LABEL_12:
      if ( !v15 )
        goto LABEL_20;
      if ( v15 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v25 = KeGetCurrentPrcb();
        v26 = *(_DWORD *)(p_Blink + 184) & 0xF;
        if ( !v26 )
        {
          v27 = 2LL;
LABEL_56:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v25->SelfmapLockHandle[v27]);
          goto LABEL_20;
        }
        if ( v26 != 7 )
        {
          v27 = 3LL;
          if ( v26 == 5 )
            v27 = 0LL;
          goto LABEL_56;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v25->SelfmapLockHandle[1]);
      }
      else if ( (*(_DWORD *)(p_Blink + 184) & 0xF) != 0
             || v15 < v16
             || v15 > 0xFFFFF6FB7DBEDFFFuLL
             || (v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(p_Blink + 184) & 0xF) != 0 && v15 >= v16 && v15 <= 0xFFFFF6FB7DBEDFFFuLL )
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState
          + ((unsigned __int64)(2 * (unsigned int)((__int64)(v15 - v16) >> 3)) >> 5)
          + 1467,
            ~(2 << ((2 * ((__int64)(v15 - v16) >> 3)) & 0x1F)) & ~(1 << ((2 * ((__int64)(v15 - v16) >> 3)) & 0x1F)));
        else
          _InterlockedAnd64((volatile signed __int64 *)v15, 0xCFFFFFFFFFFFFFFFuLL);
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v28 + 4 * ((v15 >> 3) & 0x1FF)));
      }
LABEL_20:
      if ( v4 )
      {
        v4 = 0;
        goto LABEL_53;
      }
      --v10;
      v4 = 0;
    }
  }
}
