/*
 * XREFs of RegisterKernelPepIdleStatesV2 @ 0x1400360D8
 * Callers:
 *     RegisterKernelIdleStates @ 0x140035700 (RegisterKernelIdleStates.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14000E4B4 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     DecodeAcpi2CState @ 0x140025FD8 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterKernelPepIdleStatesV2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r13
  unsigned int v4; // ebx
  _DWORD *v5; // rsi
  __int64 v8; // rdi
  unsigned int v9; // r12d
  bool v10; // zf
  unsigned int (__fastcall *v11)(__int64, __int64); // rax
  bool IsAnyHypervisorPresent; // al
  void *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rax
  void *v16; // rax
  unsigned int v17; // r8d
  unsigned __int8 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdx
  __int128 v23; // xmm0
  int v24; // r10d
  unsigned int v25; // r8d
  __int128 *v26; // rsi
  unsigned int v27; // edx
  unsigned __int8 *v28; // r9
  __int64 v29; // r11
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // ecx
  _BYTE v38[4]; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-35h]
  unsigned int v40; // [rsp+38h] [rbp-31h]
  __int64 v41; // [rsp+40h] [rbp-29h]
  __int128 **v42; // [rsp+48h] [rbp-21h]
  _DWORD *v43; // [rsp+50h] [rbp-19h]
  __int64 v44; // [rsp+58h] [rbp-11h] BYREF
  __int64 v45; // [rsp+60h] [rbp-9h]
  __int128 v46; // [rsp+68h] [rbp-1h] BYREF
  int v47; // [rsp+78h] [rbp+Fh]

  v3 = *(unsigned int **)(a1 + 1144);
  v4 = 0;
  v5 = *(_DWORD **)(a1 + 528);
  v38[0] = 0;
  v44 = 0LL;
  v8 = a2;
  v9 = *v3;
  *(_WORD *)(a2 + 18) = 257;
  v10 = (*(_DWORD *)(a1 + 280) & 0x7F277) == 0LL;
  v45 = a2;
  v11 = AcpiCStatePreselect;
  v43 = v5;
  if ( v10 )
    v11 = PepIdlePreselect;
  v40 = v9;
  *(_QWORD *)(a2 + 24) = v11;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v13 = PepIdleVmTest;
  if ( !IsAnyHypervisorPresent )
    v13 = PepIdleTest;
  *(_QWORD *)(v8 + 32) = v13;
  *(_QWORD *)(v8 + 40) = PepIdleAvailabilityCheck;
  *(_QWORD *)(v8 + 48) = PepIdlePreExecuteV2;
  *(_QWORD *)(v8 + 64) = PepIdleExecute;
  *(_QWORD *)(v8 + 72) = PepIdleCompleteV2;
  v14 = *(_QWORD *)(a1 + 280) & 0x2000007F000LL;
  v15 = PepIsHalted;
  if ( v14 )
    v15 = AcpiMwaitStateIsHalted;
  *(_QWORD *)(v8 + 80) = v15;
  v16 = PepInitiateWake;
  if ( v14 )
    v16 = AcpiWaitStateInitiateWake;
  *(_QWORD *)(v8 + 88) = v16;
  *(_BYTE *)(v8 + 16) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400155E8,
    0LL);
  *(_BYTE *)(a1 + 1169) = 0;
  v46 = 0LL;
  LOBYTE(v46) = 127;
  v17 = 0;
  BYTE12(v46) = 1;
  HIWORD(v46) = 0;
  v47 = 0;
  while ( 1 )
  {
    v39 = v17;
    if ( v17 >= v9 )
      break;
    v18 = 0;
    v19 = 32LL * v17 + v8;
    v20 = *(_QWORD *)(a1 + 1152);
    v21 = 3LL * v17;
    v22 = 88LL * v17;
    v41 = v22;
    v42 = (__int128 **)(v22 + a3 + 56);
    v23 = *(_OWORD *)(v20 + 16LL * v17);
    v38[0] = 0;
    *(_OWORD *)(v19 + 120) = v23;
    v24 = (v3[3 * v17 + 1] >> 3) & 0xF;
    if ( v24 )
    {
      if ( !v5 )
        goto LABEL_32;
      v25 = *v5;
      if ( !*v5 )
        goto LABEL_32;
      v26 = &v46;
      v27 = 0;
      v28 = (unsigned __int8 *)(v43 + 4);
      do
      {
        if ( *v28 == v24 )
          v26 = (__int128 *)&v43[4 * v27 + 1 + v27];
        ++v27;
        v28 += 20;
      }
      while ( v27 < v25 );
      v29 = (__int64)v42;
      if ( v26 != &v46 )
        *v42 = v26;
      if ( (int)DecodeAcpi2CState(a1, (__int64)v26, (__int64)&v44, (__int64)v38, v29) < 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
LABEL_32:
        v4 = -1073741823;
        break;
      }
      v22 = v41;
      if ( !*v42 && (v3[v21 + 1] & 0x78) > 8 )
      {
        *(_DWORD *)(v19 + 104) |= 0x40000000u;
        *(_QWORD *)(v22 + a3 + 72) = 0LL;
        *(_QWORD *)(v22 + a3 + 80) = 0LL;
      }
      v30 = v3[v21 + 2];
      if ( v30 == -1 )
        v30 = 10 * *((unsigned __int16 *)v26 + 7);
      v18 = v38[0];
      v17 = v39;
      v5 = v43;
    }
    else
    {
      v30 = v3[3 * v17 + 2];
    }
    *(_DWORD *)(v19 + 108) = v30;
    *(_BYTE *)(v22 + a3 + 137) = (v3[v21 + 1] & 0x200) != 0;
    v31 = *(_DWORD *)(v19 + 104) ^ (v3[v21 + 1] ^ *(_DWORD *)(v19 + 104)) & 0x78;
    *(_DWORD *)(v19 + 104) = v31;
    *(_DWORD *)(v19 + 112) = v3[v21 + 3];
    v32 = v31 ^ (v3[v21 + 1] ^ v31) & 0x80;
    *(_DWORD *)(v19 + 104) = v32;
    v33 = v32 ^ (v3[v21 + 1] ^ v32) & 0x100;
    *(_DWORD *)(v19 + 104) = v33;
    v34 = v33 ^ (v3[v21 + 1] ^ v33) & 1;
    *(_DWORD *)(v19 + 104) = v34;
    v35 = v34 ^ (v3[v21 + 1] ^ v34) & 2;
    *(_DWORD *)(v19 + 104) = v35;
    v36 = (v18 << 31) | v3[v21 + 1] & 4 ^ v35 & 0x7FFFFFFB;
    *(_DWORD *)(v19 + 104) = v36;
    *(_DWORD *)(v19 + 104) = v36 ^ ((unsigned __int16)v36 ^ (unsigned __int16)(*(unsigned __int8 *)(v22 + a3 + 138) << 9)) & 0x200;
    if ( *(_BYTE *)(v22 + a3 + 138) )
      *(_QWORD *)(a3 + 40) = *(_QWORD *)(v22 + a3 + 96);
    v8 = v45;
    ++v17;
    v9 = v40;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155E8);
  return v4;
}
