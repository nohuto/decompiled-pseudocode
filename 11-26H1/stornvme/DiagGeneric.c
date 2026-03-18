/*
 * XREFs of DiagGeneric @ 0x14001A1B8
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     DiagAllDiagnosticData @ 0x140019DA0 (DiagAllDiagnosticData.c)
 */

__int64 __fastcall DiagGeneric(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // bl
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  bool v9; // zf

  v2 = 64LL;
  v4 = 1;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v2 = 24LL;
  v5 = *(_QWORD *)(v2 + a2);
  v6 = 60LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v6 = 16LL;
  v7 = *(unsigned int *)(v6 + a2);
  *(_DWORD *)(v5 + 20) = 0;
  if ( (unsigned int)v7 < 0x48 || v7 < (unsigned __int64)*(unsigned int *)(v5 + 24) + 28 )
  {
    *(_DWORD *)(v5 + 20) = 1;
    result = 3238002692LL;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(v5 + 4) != 83
    || *(_BYTE *)(v5 + 5) != 84
    || *(_BYTE *)(v5 + 6) != 79
    || *(_BYTE *)(v5 + 7) != 82
    || *(_BYTE *)(v5 + 8) != 68
    || *(_BYTE *)(v5 + 9) != 73
    || *(_BYTE *)(v5 + 10) != 65
    || *(_BYTE *)(v5 + 11) != 71 )
  {
    *(_DWORD *)(v5 + 20) = 4;
    result = 3238002695LL;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v5 + 28) != 44 )
  {
    *(_DWORD *)(v5 + 20) = 2;
    result = 3238002699LL;
LABEL_28:
    v4 = 6;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(v5 + 32) != *(_DWORD *)(v5 + 60) + 40 )
  {
    *(_DWORD *)(v5 + 20) = 3;
LABEL_19:
    result = 3238002694LL;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v5 + 36) != 2 )
  {
    *(_DWORD *)(v5 + 20) = 5;
    goto LABEL_19;
  }
  v9 = *(_DWORD *)(v5 + 40) == 0;
  *(GUID *)(v5 + 44) = GUID_DIAGNOSTIC_PROVIDER_STORNVME;
  if ( !v9 )
    goto LABEL_19;
  result = DiagAllDiagnosticData(a1, v5 + 28, v5);
  if ( (_DWORD)result && (_DWORD)result != -1056964604 )
    v4 = 4;
LABEL_29:
  *(_BYTE *)(a2 + 3) = v4;
  return result;
}
