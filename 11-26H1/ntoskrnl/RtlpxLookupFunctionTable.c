/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1402CBA80
 * Callers:
 *     RtlLookupFunctionEntry @ 0x1402CB300 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402CB6E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionTableEx @ 0x14044CDF0 (RtlLookupFunctionTableEx.c)
 *     RtlLookupFunctionTable @ 0x14044CE40 (RtlLookupFunctionTable.c)
 *     RtlGuardCheckExceptionHandler @ 0x14044E930 (RtlGuardCheckExceptionHandler.c)
 *     RtlPcToFileHeader @ 0x140479300 (RtlPcToFileHeader.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BF1B4 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     KiVerifyPdata @ 0x140CD1F84 (KiVerifyPdata.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140368B2C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  int v3; // r15d
  int *v5; // rdi
  int v6; // r14d
  int v7; // r10d
  int v8; // esi
  int v9; // r11d
  int v10; // eax
  char *v11; // r9
  int *v12; // r8
  char *v13; // rdx
  int v14; // r10d
  PVOID result; // rax
  unsigned __int8 v16; // r13
  int v17; // esi
  int v18; // r8d
  int v19; // edx
  char *v20; // r10
  int *v21; // r9
  char *v22; // rcx
  int v23; // r11d
  PVOID v24; // rbx
  PVOID *v25; // rdi
  int v26; // r14d
  unsigned __int64 v27; // r11
  unsigned int SListFaultAddress_high; // r9d
  int v29; // ebp
  unsigned __int64 v30; // r8
  __int64 v31; // rsi
  unsigned __int64 v32; // r10
  __int64 v33; // rax
  char *v34; // rcx
  int v35; // edx
  __int64 v36; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v39; // rdx
  __int64 v40; // [rsp+18h] [rbp-50h]
  unsigned __int64 v41; // [rsp+20h] [rbp-48h]
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]
  unsigned __int64 v43; // [rsp+30h] [rbp-38h]
  __int64 v44; // [rsp+38h] [rbp-30h]
  char v45; // [rsp+78h] [rbp+10h]

  v3 = 1;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v5 = RtlpInvertedFunctionTable;
  v6 = RtlpInvertedFunctionTable[2];
  if ( (v6 & 1) != 0 )
  {
LABEL_22:
    v16 = 0;
    if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 )
    {
      v45 = 1;
    }
    else
    {
      v45 = 0;
      v16 = MmLockLoadedModuleListShared();
    }
    if ( *RtlpInvertedFunctionTable == 1 )
    {
LABEL_44:
      if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
      {
        v25 = (PVOID *)PsLoadedModuleList;
        v26 = *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12;
        if ( PsLoadedModuleList )
        {
          while ( v25 != &PsLoadedModuleList )
          {
            v27 = (unsigned __int64)v25[6];
            if ( (PVOID)v27 == PsNtosImageBase || (PVOID)v27 == PsHalImageBase )
              SListFaultAddress_high = HIDWORD(stru_140E366D8.SListFaultAddress);
            else
              SListFaultAddress_high = LODWORD(stru_140E366D8.QuantumTarget) + HIDWORD(stru_140E366D8.SListFaultAddress);
            if ( !SListFaultAddress_high )
              goto LABEL_84;
            v29 = 4;
            v30 = v27 + *((unsigned int *)v25 + 16);
            v31 = 4LL;
            v41 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            while ( 1 )
            {
              v32 = *(&v40 + v31--);
              --v29;
              v33 = *(_QWORD *)v32;
              if ( v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                v36 = *(_QWORD *)v32;
                if ( (v33 & 1) == 0 )
                  goto LABEL_59;
                if ( ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  if ( Process->AddressPolicy != 1 )
                  {
                    KernelWaitTime = Process[2].KernelWaitTime;
                    if ( KernelWaitTime )
                    {
                      v39 = *(_QWORD *)(KernelWaitTime + 8 * ((v32 >> 3) & 0x1FF));
                      if ( (v39 & 0x20) != 0 )
                        LOBYTE(v36) = v33 | 0x20;
                      LOBYTE(v33) = v36 | 0x42;
                      if ( (v39 & 0x42) == 0 )
                        LOBYTE(v33) = v36;
                    }
                  }
                }
              }
              if ( (v33 & 1) == 0 )
                goto LABEL_59;
              if ( (v33 & 0x80u) != 0LL )
                break;
              if ( v31 == 1 )
                goto LABEL_59;
            }
            if ( v29 )
              v30 = (v30 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
LABEL_59:
            if ( v30 )
              v34 = (char *)(v30 + SListFaultAddress_high);
            else
LABEL_84:
              v34 = (char *)(v27 + *((unsigned int *)v25 + 16));
            if ( a1 < (unsigned __int64)v34 && a1 >= v27 )
            {
              v24 = v25[2];
              *(_QWORD *)a2 = v24;
              *(_DWORD *)(a2 + 16) = (_DWORD)v34 - v27;
              *(_QWORD *)(a2 + 8) = v27;
              *(_DWORD *)(a2 + 20) = *((_DWORD *)v25 + 6);
              goto LABEL_41;
            }
            v35 = RtlKernelScpFunctionTableSize;
            if ( RtlKernelScpFunctionTableSize
              && a1 >= (unsigned __int64)v34
              && a1 < (unsigned __int64)&v34[v26]
              && (PVOID)v27 != PsHalImageBase
              && (PVOID)v27 != PsNtosImageBase )
            {
              *(_QWORD *)(a2 + 8) = v34;
              v24 = &RtlKernelScpFunctionTable;
              *(_QWORD *)a2 = &RtlKernelScpFunctionTable;
              *(_DWORD *)(a2 + 16) = v26;
              *(_DWORD *)(a2 + 20) = v35;
              goto LABEL_41;
            }
            v25 = (PVOID *)*v25;
          }
        }
      }
      v24 = 0LL;
LABEL_41:
      if ( !v45 )
        MmUnlockLoadedModuleListShared(v16);
      return v24;
    }
    v17 = *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12;
    v18 = *RtlpInvertedFunctionTable - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v18 < v3 )
          goto LABEL_44;
        v19 = (v3 + v18) >> 1;
        v20 = *(char **)&RtlpInvertedFunctionTable[6 * v19 + 6];
        v21 = &RtlpInvertedFunctionTable[6 * v19];
        v22 = &v20[v21[8]];
        if ( a1 >= (unsigned __int64)v20 )
          break;
        if ( !v19 )
          goto LABEL_44;
        v18 = v19 - 1;
      }
      if ( a1 >= 0x7FFFFFFF0000LL )
      {
        v23 = RtlKernelScpFunctionTableSize;
        if ( RtlKernelScpFunctionTableSize )
        {
          if ( a1 < (unsigned __int64)v22 )
            goto LABEL_39;
          if ( a1 >= (unsigned __int64)&v22[v17] || v20 == PsNtosImageBase )
            goto LABEL_38;
          if ( v20 != PsHalImageBase )
          {
            *(_QWORD *)a2 = &RtlKernelScpFunctionTable;
            *(_QWORD *)(a2 + 8) = v22;
            *(_DWORD *)(a2 + 16) = v17;
            *(_DWORD *)(a2 + 20) = v23;
LABEL_40:
            v24 = *(PVOID *)a2;
            goto LABEL_41;
          }
        }
      }
      if ( a1 < (unsigned __int64)v22 )
      {
LABEL_39:
        *(_OWORD *)a2 = *((_OWORD *)v21 + 1);
        *(_QWORD *)(a2 + 16) = *((_QWORD *)v21 + 4);
        goto LABEL_40;
      }
LABEL_38:
      v3 = v19 + 1;
    }
  }
  if ( *RtlpInvertedFunctionTable == 1 )
  {
LABEL_21:
    if ( !*((_BYTE *)RtlpInvertedFunctionTable + 12) )
    {
      result = 0LL;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  v7 = 1;
  v8 = *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12;
  v9 = *RtlpInvertedFunctionTable - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 < v7 )
        goto LABEL_21;
      v10 = (v7 + v9) >> 1;
      v11 = *(char **)&RtlpInvertedFunctionTable[6 * v10 + 6];
      v12 = &RtlpInvertedFunctionTable[6 * v10];
      v13 = &v11[v12[8]];
      if ( a1 >= (unsigned __int64)v11 )
        break;
      if ( !v10 )
        goto LABEL_21;
      v9 = v10 - 1;
    }
    if ( a1 < 0x7FFFFFFF0000LL )
      break;
    v14 = RtlKernelScpFunctionTableSize;
    if ( !RtlKernelScpFunctionTableSize )
      break;
    if ( a1 < (unsigned __int64)v13 )
      goto LABEL_17;
    if ( a1 < (unsigned __int64)&v13[v8] && v11 != PsNtosImageBase )
    {
      if ( v11 != PsHalImageBase )
      {
        *(_QWORD *)a2 = &RtlKernelScpFunctionTable;
        *(_QWORD *)(a2 + 8) = v13;
        *(_DWORD *)(a2 + 16) = v8;
        *(_DWORD *)(a2 + 20) = v14;
        goto LABEL_18;
      }
      break;
    }
LABEL_16:
    v7 = v10 + 1;
  }
  if ( a1 >= (unsigned __int64)v13 )
    goto LABEL_16;
LABEL_17:
  *(_OWORD *)a2 = *((_OWORD *)v12 + 1);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)v12 + 4);
LABEL_18:
  result = *(PVOID *)a2;
LABEL_19:
  if ( v5[2] != v6 )
    goto LABEL_22;
  return result;
}
