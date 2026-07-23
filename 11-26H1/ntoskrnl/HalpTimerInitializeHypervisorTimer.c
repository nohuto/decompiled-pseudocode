/*
 * XREFs of HalpTimerInitializeHypervisorTimer @ 0x140586D60
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140501D24 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerInitialize @ 0x140579E08 (HalpTimerInitialize.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14057E6CC (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpFindTimer @ 0x140583D54 (HalpFindTimer.c)
 *     HalpTimerTestHypervisorTimer @ 0x14058702C (HalpTimerTestHypervisorTimer.c)
 *     HalpIsPartitionCpuManager @ 0x140587720 (HalpIsPartitionCpuManager.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpHvBuildDeviceId @ 0x140BEF42C (HalpHvBuildDeviceId.c)
 */

void HalpTimerInitializeHypervisorTimer()
{
  ULONG_PTR *Timer; // rax
  __int64 v6; // rbx
  int v7; // eax
  int v8; // edi
  unsigned int *v9; // r12
  int v10; // esi
  _DWORD *v11; // rdx
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  ULONG_PTR *v18; // rax
  int v19; // r8d
  _BYTE v20[4]; // [rsp+38h] [rbp-39h] BYREF
  int v21; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v22; // [rsp+40h] [rbp-31h] BYREF
  int v23; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v24[3]; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v25[6]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v26; // [rsp+80h] [rbp+Fh]
  __int64 v27; // [rsp+88h] [rbp+17h]
  __int64 v28; // [rsp+90h] [rbp+1Fh]
  __int64 v29; // [rsp+98h] [rbp+27h]
  __int128 v30; // [rsp+A0h] [rbp+2Fh]

  v24[0] = 0LL;
  v30 = 0LL;
  v22 = 0LL;
  v20[0] = 0;
  if ( (unsigned __int8)HalpIsPartitionCpuManager() )
  {
    if ( qword_140FBB420 )
    {
      _RAX = 1073741830LL;
      __asm { cpuid }
      if ( (_RAX & 0x100) != 0 )
      {
        Timer = HalpFindTimer(3, 32, 24576, 3840, 0);
        v6 = (__int64)Timer;
        if ( Timer )
        {
          if ( (int)HalpTimerInitialize((ULONG_PTR)Timer) >= 0 )
          {
            *(_DWORD *)(v6 + 184) |= 4u;
            HalpHypervisorHpet = v6;
            v7 = HalpTimerTestHypervisorTimer(v6, v20);
            HalpHypervisorHpet = 0LL;
            if ( v7 >= 0 )
            {
              v8 = 1;
              v9 = *(unsigned int **)(v6 + 72);
              v10 = 0;
              if ( v20[0] )
              {
                v11 = *(_DWORD **)(v6 + 288);
                v12 = v11[1];
                HIWORD(v21) = *v11 >> 8;
                BYTE1(v21) = *(_BYTE *)v11;
                LOBYTE(v21) = (8 * *((_BYTE *)v11 + 4)) | (v12 >> 5) & 7;
                HalpHvBuildDeviceId(&v21, v11 + 2, 0LL, v24);
              }
              else
              {
                v13 = *(_DWORD *)(v6 + 224);
                if ( (v13 & 0x200) != 0 )
                {
                  if ( (int)HalpInterruptGsiToLine(*(unsigned int *)(v6 + 88), &v22) < 0 )
                    return;
                }
                else if ( (v13 & 0x100) != 0 )
                {
                  v14 = *(_DWORD *)(v6 + 84);
                  if ( v14 >= 8 )
                  {
                    LODWORD(v22) = 45057;
                    v14 -= 8;
                  }
                  else
                  {
                    LODWORD(v22) = 45056;
                  }
                  HIDWORD(v22) = v14;
                }
                v21 = *(_DWORD *)(v6 + 96);
                v23 = *(_DWORD *)(v6 + 92);
                HalpInterruptApplyOverrides((int *)&v22, &v23, &v21);
                v8 = v21;
                v10 = v23;
                v24[0] = 0x8000000000000000uLL;
                LOBYTE(v24[0]) = v22;
              }
              if ( (int)guard_dispatch_icall_no_overrides(*v9, v24[0]) >= 0 )
              {
                if ( v20[0] )
                {
                  *(_DWORD *)(v6 + 236) = 0;
                  *(_DWORD *)(v6 + 232) = DWORD2(v30);
                  *(_QWORD *)(v6 + 240) = HIDWORD(v30);
                  v17 = *(_DWORD *)(v6 + 184) | 0x10;
LABEL_25:
                  HalpHypervisorHpet = v6;
                  *(_DWORD *)(v6 + 184) = v17 | 0x40;
                  HalpTimerEnableHypervisorTimer(v16, v15);
                  return;
                }
                v27 = *((_QWORD *)&v30 + 1);
                v25[1] = 0;
                v26 = 8LL;
                v28 = 0LL;
                v29 = 212LL;
                v25[0] = v10;
                v25[2] = v8;
                v25[3] = 0;
                v25[4] = -1;
                v25[5] = 1;
                v18 = HalpInterruptLookupController(v22);
                if ( !v18 )
                {
                  HalpInterruptSetProblemEx(
                    0LL,
                    17,
                    v19,
                    (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
                    0xCC4u);
                  return;
                }
                if ( (int)HalpInterruptSetRemappedLineStateInternal((__int64)v18, (unsigned int *)&v22, (__int64)v25) >= 0 )
                {
                  v17 = *(_DWORD *)(v6 + 184) & 0xFFFFFFEF;
                  goto LABEL_25;
                }
              }
            }
          }
        }
      }
    }
  }
}
