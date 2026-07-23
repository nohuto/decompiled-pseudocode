/*
 * XREFs of MiCfgMarkValidEntries @ 0x140AA27E4
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     CfgAddressToBitState @ 0x1404EA160 (CfgAddressToBitState.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x14077F558 (MiIsProcessCfgExportSuppressionEnabled.c)
 *     MiPopulateCfgBitMap @ 0x1409993B4 (MiPopulateCfgBitMap.c)
 *     MiSelectCfgBitMap @ 0x140AA2A44 (MiSelectCfgBitMap.c)
 *     MiValidateUserCallTarget @ 0x140AA2AB4 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MiCfgMarkValidEntries(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // r13
  unsigned int v12; // esi
  unsigned int i; // edx
  __int64 v14; // r11
  __int64 v15; // r12
  unsigned int j; // edi
  __int64 v18; // rax
  ULONG_PTR v19; // rax
  __int64 v20; // rdi
  char *v21; // r15
  int v22; // ebx
  __int64 v23; // r8
  unsigned __int64 v24; // r15
  _KPROCESS *Process; // r13
  BOOL IsProcessCfgExportSuppressionEnabled; // eax
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // r8d
  unsigned int SessionId; // eax
  unsigned __int64 v31; // rax
  __int128 v32; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v33; // [rsp+50h] [rbp-10h]
  unsigned int v35; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int *v36; // [rsp+B0h] [rbp+50h] BYREF

  v36 = a3;
  LODWORD(v33) = 0;
  v35 = 0;
  *a6 = 0;
  v11 = a1;
  v32 = 0LL;
  if ( (((unsigned __int16)a2 | (unsigned __int16)a3) & 0xFFF) != 0 )
    return 3221225485LL;
  v12 = a5;
  for ( i = 1; i < a5; ++i )
  {
    if ( *(_QWORD *)(a4 + 16LL * (i - 1)) > *(_QWORD *)(a4 + 16LL * i) )
      return 3221225485LL;
  }
  if ( *(_QWORD *)(a4 + 16LL * (a5 - 1)) >= (unsigned __int64)a3 )
    return 3221225485LL;
  v15 = MiSelectCfgBitMap(a1, a2, 0LL);
  for ( j = v14; j < v12; ++j )
  {
    if ( (*(_DWORD *)(a4 + 16LL * j) & 0xF) != (unsigned __int64)*(unsigned int *)(v15 + 24) )
      return 3221225485LL;
    v18 = *(_QWORD *)(a4 + 16LL * j + 8);
    if ( (v18 & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      return 3221225485LL;
    if ( (v18 & 0x18) != 0 )
      return 3221225659LL;
    if ( (a7 & 1) != 0 && (v18 & 1) != 0 )
      return 3221225506LL;
    if ( (v18 & 4) != 0 )
    {
      if ( !MiIsProcessCfgExportSuppressionEnabled(v11) )
        return 3221225506LL;
      v24 = a2 + *(_QWORD *)(a4 + 8 * v23);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (unsigned int)CfgAddressToBitState(v24, *(const signed __int64 **)v15) != 2
        || (IsProcessCfgExportSuppressionEnabled = MiIsProcessCfgExportSuppressionEnabled((__int64)Process),
            v14 = 0LL,
            !IsProcessCfgExportSuppressionEnabled) )
      {
        v27 = MiValidateUserCallTarget(v24, v15);
        v14 = 0LL;
        if ( !v27 )
          return 3221225506LL;
      }
      v11 = a1;
    }
  }
  if ( *a6 == v12 )
    return 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(v11 + 1040) + 1392LL) == v14 )
    return 3221225541LL;
  v19 = MiObtainReferencedVadEx(a2, 0LL, (int *)&v35);
  v20 = v19;
  if ( !v19 )
    return v35;
  v21 = (char *)v36 + a2 - 1;
  if ( (unsigned __int64)v21 <= (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF)
    && (!a8
     || (v36 = 0LL, (MiReadVadFlags(v19) & 0x80000) == 0)
     && **(_QWORD **)(v20 + 80) == MiSectionControlArea(v28)
     && (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12 == a2
     && (MiGetProtoPteAddress(
           v20,
           *(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32),
           v29,
           &v36),
         SessionId = PsGetSessionIdEx(v11),
         v31 = MiStartingOffset((__int64 *)v36, *(_QWORD *)(v20 + 88), SessionId),
         v31 == a9)) )
  {
    v33 = a6;
    LODWORD(v32) = v12;
    *((_QWORD *)&v32 + 1) = a4;
    v22 = MiPopulateCfgBitMap(
            (__int64 *)v15,
            (unsigned __int64)&v32,
            0LL,
            (struct _KLOCK_ENTRIES *)1,
            a2,
            (unsigned __int64)(v21 + 4095) & 0xFFFFFFFFFFFFF000uLL,
            0LL);
    if ( v22 >= 0 )
      v22 = 0;
  }
  else
  {
    v22 = -1073741811;
  }
  MiUnlockAndDereferenceVad((volatile signed __int32 *)v20);
  return (unsigned int)v22;
}
