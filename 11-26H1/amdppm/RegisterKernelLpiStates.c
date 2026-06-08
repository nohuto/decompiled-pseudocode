/*
 * XREFs of RegisterKernelLpiStates @ 0x140035BF4
 * Callers:
 *     RegisterKernelIdleStates @ 0x140035700 (RegisterKernelIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     DecodeAcpiIdleState @ 0x140026034 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall RegisterKernelLpiStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // r14d
  void *v12; // rax
  void *v13; // rax
  __int64 v14; // r13
  __int64 v15; // r12
  int v16; // eax
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rcx
  int v23; // eax
  __int64 v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v27; // [rsp+90h] [rbp+8h] BYREF
  char v28; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 544);
  v4 = 0;
  v28 = 0;
  v27 = 0;
  v26[0] = 0LL;
  if ( v3 && *(_DWORD *)(v3 + 16) )
  {
    *(_BYTE *)(a2 + 19) = 1;
    *(_QWORD *)(a2 + 40) = PepIdleAvailabilityCheck;
    *(_QWORD *)(a2 + 24) = PepIdlePreselect;
    *(_QWORD *)(a2 + 64) = LpiIdleExecute;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
    {
      *(_QWORD *)(a2 + 48) = PepNotifyLpiPreExecute;
      v8 = PepNotifyLpiComplete;
    }
    else
    {
      v8 = AcpiCStateIdleComplete;
    }
    *(_QWORD *)(a2 + 72) = v8;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155E8,
      0LL);
    v9 = *(_QWORD *)(a1 + 280);
    *(_BYTE *)(a1 + 1169) = 0;
    v10 = v9 & 0x2000007F000LL;
    v11 = 0;
    v12 = AcpiCStateIsHalted;
    if ( v10 )
      v12 = AcpiMwaitStateIsHalted;
    *(_QWORD *)(a2 + 80) = v12;
    v13 = AcpiCStateIsHalted;
    if ( v10 )
      v13 = AcpiWaitStateInitiateWake;
    *(_QWORD *)(a2 + 88) = v13;
    *(_BYTE *)(a2 + 16) = 1;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(v3 + 8);
    if ( *(_DWORD *)(v3 + 16) )
    {
      while ( 1 )
      {
        v25 = 88LL * v11;
        v14 = 80LL * v11;
        v15 = 32LL * v11;
        *(_DWORD *)(v15 + a2 + 108) = 10 * *(_DWORD *)(v3 + v14 + 28);
        v16 = *(_DWORD *)(v3 + v14 + 24);
        *(_DWORD *)(v15 + a2 + 104) |= 0x81u;
        *(_DWORD *)(v15 + a2 + 112) = 10 * v16;
        *(_OWORD *)(v15 + a2 + 120) = *(_OWORD *)(v3 + v14 + 88);
        v17 = DecodeAcpiIdleState(
                a1,
                (char *)(v14 + v3 + 48),
                0xFFFFFFFF,
                *(unsigned int *)(v3 + v14 + 36),
                v26,
                (char *)&v27,
                &v28,
                v25 + a3 + 56);
        if ( v17 < 0 )
          break;
        v18 = (*(_DWORD *)(v15 + a2 + 104) & 0x7FFFFFFF | (v27 << 31)) ^ (*(_BYTE *)(v15 + a2 + 104) ^ (unsigned __int8)(2 * v28)) & 2;
        v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(4 * v28)) & 4;
        v20 = 88LL * v11;
        *(_DWORD *)(v15 + a2 + 104) = v19;
        v21 = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)(*(unsigned __int8 *)(v25 + a3 + 138) << 9)) & 0x200;
        v22 = (_QWORD *)(a3 + v25 + 96);
        *(_DWORD *)(v15 + a2 + 104) = v21;
        if ( *(_BYTE *)(v25 + a3 + 138) )
          *(_QWORD *)(a3 + 40) = *v22;
        if ( byte_140015F02 )
        {
          v23 = v11 + 1;
          if ( v11 >= 3 )
            v23 = 3;
          *(_DWORD *)v22 = v23;
LABEL_19:
          if ( byte_140015F02 )
            goto LABEL_21;
        }
        *(_QWORD *)(v20 + a3 + 112) = *(_QWORD *)(v3 + v14 + 52);
LABEL_21:
        if ( v17 < 0 || (*(_DWORD *)(v3 + v14 + 32) & 1) == 0 )
          *(_DWORD *)(v15 + a2 + 104) |= 0x40000000u;
        if ( ++v11 >= *(_DWORD *)(v3 + 16) )
          goto LABEL_25;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
      v20 = 88LL * v11;
      goto LABEL_19;
    }
LABEL_25:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400155E8);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
