/*
 * XREFs of KeVerifyContextRecord @ 0x1403DA340
 * Callers:
 *     KyRaiseException @ 0x1403D6E5C (KyRaiseException.c)
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 * Callees:
 *     KiVerifyContextIpForUserCet @ 0x1403DA4D0 (KiVerifyContextIpForUserCet.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403DA6D0 (KiLogUserCetSetContextIpValidationFailure.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 *     RtlGuardIsValidStackPointer @ 0x140A82CB4 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140AA5DB0 (RtlGuardIsValidWow64StackPointer.c)
 */

__int64 __fastcall KeVerifyContextRecord(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v14; // rbp
  unsigned int v15; // esi
  unsigned int v16; // esi
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int16 v22; // ax

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(v4 + 136) & 0x20) == 0
    || (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001
    || (v9 = *(_QWORD *)(a2 + 152), v10 = *(_QWORD *)(a1 + 240), (unsigned int)RtlGuardIsValidStackPointer(v9, v10))
    || *(_QWORD *)(v4 + 784)
    && ((v22 = *(_WORD *)(v4 + 1772), v22 == 332) || v22 == 452)
    && v9 < 0xFFFFFFFF
    && (unsigned int)RtlGuardIsValidWow64StackPointer((unsigned int)v9, v10, v11) )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x100001) == 0x100001 )
    {
      v12 = *(_QWORD *)(a1 + 544);
      if ( (unsigned __int16)PsWow64GetProcessMachine(v12) != 332
        && (!*(_QWORD *)(v12 + 1600) || *(_WORD *)(a2 + 56) != 35) )
      {
        *(_WORD *)(a2 + 56) = 51;
      }
      if ( a3 )
      {
        if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
        {
          v14 = *(_QWORD *)(a1 + 184);
          v15 = *(_DWORD *)(v14 + 1876);
          if ( (v15 & 0x20000) != 0 )
          {
            v16 = v15 >> 31;
            v17 = KiVerifyContextIpForUserCet(a1, a2, (_DWORD)a3, (unsigned __int8)v16, a4);
            v18 = v17;
            if ( v17 == -1073740278 )
            {
              v19 = *(_QWORD *)(a2 + 248);
              v20 = (unsigned __int8)v16 ^ 1u;
              v21 = *a3;
              if ( (*(_DWORD *)(v14 + 1876) & 0x40000) != 0 )
              {
                KiLogUserCetSetContextIpValidationFailure(1LL, v21, v19, v20);
                return 0LL;
              }
              KiLogUserCetSetContextIpValidationFailure(2LL, v21, v19, v20);
              return v18;
            }
            if ( v17 < 0 )
              return v18;
          }
        }
      }
    }
    return 0LL;
  }
  return 3221225485LL;
}
