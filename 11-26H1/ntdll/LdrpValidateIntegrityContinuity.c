/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x180101184
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpSetModuleSigningLevel @ 0x180101284 (LdrpSetModuleSigningLevel.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015D708 (LdrpLogIntegrityContinuityTelemetry.c)
 *     NtCompareSigningLevels @ 0x180160230 (NtCompareSigningLevels.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int32 v4; // ebx
  bool v6; // zf
  __int64 v8; // rcx
  int v9; // edi
  char v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a3;
  v4 = 0;
  v6 = (*(_DWORD *)(a1 + 32) & 0x400000) == 0;
  v11 = 0;
  v12 = 0;
  if ( !v6
    || (v8 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v8 + 280) & 0x8000) != 0 || NtCompareSigningLevels(*(_BYTE *)(v8 + 284), 0xCu) >= 0) )
  {
    LOBYTE(a4) = 12;
    v9 = LdrpSetModuleSigningLevel(a2, *(_QWORD *)(a1 + 56), &v12, a4, &v11);
    if ( v9 >= 0 )
    {
      v4 = NtCompareSigningLevels(*(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL), 0xCu);
      if ( (v4 & 0x80000000) == 0 )
        return v4;
LABEL_13:
      LdrpLogIntegrityContinuityTelemetry(a1, v9, v12, v4, v11);
      return v4;
    }
    if ( v9 == -1073741701 || v9 == -1073740760 || v9 == -1073740285 || v9 == -1058471934 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
    }
    else
    {
      if ( !LdrpEnforceIntegrityContinuity )
        goto LABEL_13;
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
    }
    v4 = v9;
    goto LABEL_13;
  }
  return v4;
}
