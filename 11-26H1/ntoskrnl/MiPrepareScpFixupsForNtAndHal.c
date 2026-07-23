/*
 * XREFs of MiPrepareScpFixupsForNtAndHal @ 0x140D01134
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140CFFBC8 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     RtlLookupImageSectionByName @ 0x1404DE250 (RtlLookupImageSectionByName.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140D008A8 (MiApplyDynamicFixupsToKernelAndHal.c)
 */

__int64 __fastcall MiPrepareScpFixupsForNtAndHal(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  char *v4; // rsi
  const char *v5; // rax
  unsigned int v6; // edx
  char *v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 240);
  v9 = 0LL;
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[72] = *(_DWORD *)(v2 + 3500) >> 12;
  v4 = *(char **)(v1 + 48);
  RtlImageNtHeaderEx(1u, v4, 0LL, (PIMAGE_NT_HEADERS *)&v9);
  v5 = RtlLookupImageSectionByName(v9, "KSCP");
  v6 = ((*((_DWORD *)v5 + 2) & 0xFFF) != 0) + (*((_DWORD *)v5 + 2) >> 12);
  if ( v6 > *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[72] )
    return 3221225485LL;
  v8 = &v4[*((unsigned int *)v5 + 3)];
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] = v6;
  *(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[64] = v8;
  return MiApplyDynamicFixupsToKernelAndHal(a1);
}
