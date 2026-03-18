/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1400BE668
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1400D0C00 (IrqArbFindSuitableRange.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x140046DEC (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x140055CB8 (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     IcGetPossibleInput @ 0x1400A88FC (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1400BEC5C (IcIsInputValid.c)
 *     IrqArbGsivFromIrq @ 0x1400C4EA4 (IrqArbGsivFromIrq.c)
 *     IcIsInterruptTypeSecondary @ 0x1400D3968 (IcIsInterruptTypeSecondary.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1400D39C0 (IrqArbpLookupIsaOverrideByGsiv.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  ULONG v5; // r12d
  __int16 v6; // di
  unsigned int v7; // r15d
  __int64 v8; // rdx
  char v9; // r11
  char v10; // r11
  int v11; // r10d
  unsigned __int8 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rdx
  ULONG Flags; // edi
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rdx
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rcx
  char result; // al
  _BYTE v24[4]; // [rsp+50h] [rbp-19h] BYREF
  int v25; // [rsp+54h] [rbp-15h] BYREF
  int v26; // [rsp+58h] [rbp-11h] BYREF
  int v27; // [rsp+5Ch] [rbp-Dh]
  __int128 v28; // [rsp+60h] [rbp-9h]
  __int128 v29; // [rsp+70h] [rbp+7h]

  v2 = *(_DWORD *)a2;
  v26 = 0;
  v24[0] = 0;
  v25 = 0;
  v5 = 0;
  v28 = 0LL;
  v29 = 0LL;
  while ( v2 <= *(_DWORD *)(a2 + 8) )
  {
    v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 1;
    v7 = IrqArbGsivFromIrq(v2);
    if ( !(unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v2, &v25) || (v9 = byte_14008E0C4[8 * v25], v9 == -1) )
    {
      if ( (unsigned __int8)IcIsInterruptTypeSecondary(v7) )
      {
        if ( (int)AcpiIrqTranslateSecondaryInterruptToNtResources() < 0 )
          goto LABEL_23;
      }
      else
      {
        ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v26);
      }
    }
    else if ( (v9 & 1) != 0 )
    {
      if ( v6 )
        goto LABEL_23;
    }
    else if ( !v6 )
    {
      goto LABEL_23;
    }
    if ( ((int)IcGetPossibleInput(v7, v8, v24) < 0 || v10 == v24[0]) && (unsigned __int8)IcIsInputValid(v7) )
    {
      v13 = *(_QWORD *)(a2 + 56);
      v14 = *(_QWORD *)(a2 + 40);
      Flags = v5 | 1;
      v16 = *(_QWORD *)(a2 + 72);
      v27 = v11;
      v17 = *(_QWORD *)(v13 + 40);
      v18 = *(_DWORD *)(v14 + 36);
      v19 = *(_QWORD *)(v14 + 40);
      v20 = v18 & 1;
      if ( !v20 )
        Flags = v5;
      v5 = Flags;
      v21 = v20 | 2;
      LOBYTE(v27) = *(_WORD *)(v17 + 4) & 1 | (v12 >> 2) & 2;
      if ( (*(_BYTE *)(v17 + 4) & 8) == 0 )
        v21 = v20;
      if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, unsigned int, int, int, int))ProcessorFindIdtEntries)(
                  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL),
                  v19,
                  v16,
                  1LL,
                  v7,
                  v27,
                  v21,
                  1) >= 0
        && RtlFindRange(
             *(PRTL_RANGE_LIST *)(a1 + 48),
             v2,
             v2,
             1u,
             1u,
             Flags,
             *(_BYTE *)(a2 + 67),
             0LL,
             0LL,
             (PULONGLONG)a2) >= 0 )
      {
        v22 = *(_QWORD *)(a2 + 40);
        result = 1;
        *(_QWORD *)a2 = v2;
        *(_QWORD *)(a2 + 8) = v2;
        *(_QWORD *)(v22 + 16) = 1LL;
        return result;
      }
    }
LABEL_23:
    ++v2;
  }
  return 0;
}
