/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x180101A34
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800833B0 (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpSetModuleSigningLevel @ 0x180101B34 (LdrpSetModuleSigningLevel.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015D848 (LdrpLogIntegrityContinuityTelemetry.c)
 *     NtCompareSigningLevels @ 0x180160330 (NtCompareSigningLevels.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  bool v5; // zf
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // rcx
  char v12; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a3;
  v3 = 0;
  v4 = a2;
  v5 = (*(_DWORD *)(a1 + 32) & 0x400000) == 0;
  v12 = 0;
  v13 = 0;
  if ( !v5
    || (v7 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v7 + 280) & 0x8000) != 0
     || (LOBYTE(v7) = *(_BYTE *)(v7 + 284), LOBYTE(a2) = 12, (int)NtCompareSigningLevels(v7, a2) >= 0)) )
  {
    v9 = LdrpSetModuleSigningLevel(v4, *(_QWORD *)(a1 + 56), (unsigned int)&v13, 12, (__int64)&v12);
    if ( v9 >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 56);
      LOBYTE(v8) = 12;
      LOBYTE(v10) = *(_BYTE *)(v10 + 284);
      v3 = NtCompareSigningLevels(v10, v8);
      if ( (v3 & 0x80000000) == 0 )
        return v3;
LABEL_13:
      LdrpLogIntegrityContinuityTelemetry(a1, v9, v13, v3, v12);
      return v3;
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
    v3 = v9;
    goto LABEL_13;
  }
  return v3;
}
