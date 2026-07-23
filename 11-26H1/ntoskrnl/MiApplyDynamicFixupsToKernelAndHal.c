/*
 * XREFs of MiApplyDynamicFixupsToKernelAndHal @ 0x140D008A8
 * Callers:
 *     MiPrepareScpFixupsForNtAndHal @ 0x140D01134 (MiPrepareScpFixupsForNtAndHal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     RtlLookupImageSectionByName @ 0x1404DE250 (RtlLookupImageSectionByName.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140504A94 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlCopyKernelScpUnwindInfo @ 0x140625E94 (RtlCopyKernelScpUnwindInfo.c)
 *     RtlUpdateImportRelocationsInImage @ 0x14072558C (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlInitializeKscpCfgFunctions @ 0x140CE052C (RtlInitializeKscpCfgFunctions.c)
 */

__int64 __fastcall MiApplyDynamicFixupsToKernelAndHal(__int64 a1)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(); // r12
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  void *v6; // rdx
  PIMAGE_NT_HEADERS v7; // rsi
  const char *v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  unsigned int v11; // r15d
  __int64 v12; // rbx
  const char *v13; // rax
  __int64 v14; // r9
  unsigned int v15; // r8d
  int v16; // ecx
  __int64 *v17; // rbx
  unsigned int i; // edi
  int v19; // [rsp+28h] [rbp-91h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-69h] BYREF
  __int64 v21; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-59h]
  _BYTE v23[8]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v24; // [rsp+78h] [rbp-41h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0LL;
  v22[0] = v1;
  if ( (MiFlags & 0x10000) == 0 )
  {
    result = RtlCopyKernelScpUnwindInfo(
               *(_QWORD *)(v1 + 48),
               *(_QWORD *)(v1 + 48),
               *(unsigned int **)&stru_140E2D2D0.WaitBlockFill11[64],
               *(int *)&stru_140E2D2D0.WaitBlockFill11[64]);
    if ( (int)result < 0 )
      return result;
    goto LABEL_7;
  }
  v4 = ((unsigned __int64)KiSpeculationFeatures >> 41) & 1;
  if ( (KiFeatureSettings & 0x20000) == 0 )
    LODWORD(v4) = v4 | 2;
  if ( !(_DWORD)v4 )
  {
LABEL_7:
    if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
      goto LABEL_13;
    v6 = *(void **)(v1 + 48);
    OutHeaders = 0LL;
    v2 = MiIsBootImageTargetFullyRetpolined;
    RtlImageNtHeaderEx(1u, v6, 0LL, &OutHeaders);
    v7 = OutHeaders;
    v8 = RtlLookupImageSectionByName((__int64)OutHeaders, "INITKDBG");
    v9 = 0LL;
    v10 = *((_DWORD *)v8 + 3);
    v11 = 1;
    LODWORD(OutHeaders) = *((_DWORD *)v8 + 2);
    LODWORD(v21) = v10;
    while ( !(_DWORD)v9 )
    {
      v12 = v22[v9];
      v13 = RtlLookupImageSectionByName((__int64)v7, "MINIEX");
      v14 = *(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[64];
      v15 = *(_DWORD *)(v12 + 64);
      v16 = *((_DWORD *)v13 + 3);
      *((_DWORD *)&OutHeaders + v11) = *((_DWORD *)v13 + 2);
      *((_DWORD *)&v22[-1] + v11) = v16;
      result = RtlPerformRetpolineRelocationsOnImageEx(
                 *(char **)(v12 + 48),
                 *(_QWORD *)(v12 + 48),
                 v15,
                 v14,
                 v14 + 4,
                 v19,
                 (__int64)&v21,
                 (__int64)&OutHeaders,
                 v11 + 1);
      if ( (int)result < 0 )
        goto LABEL_21;
      v11 = 0;
      v9 = 1LL;
    }
    result = RtlInitializeKscpCfgFunctions(
               *(_DWORD **)&stru_140E2D2D0.WaitBlockFill11[64],
               *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12);
    if ( (int)result >= 0 )
    {
LABEL_13:
      if ( (KiFeatureSettings & 0x20000) == 0 )
      {
        v17 = *(__int64 **)(a1 + 16);
        for ( i = 0; i < 2; ++i )
        {
          result = RtlUpdateImportRelocationsInImage(
                     (char *)v17[6],
                     v17[6],
                     *((_DWORD *)v17 + 16),
                     (__int64)v2,
                     *(__int64 *)&stru_140E2D2D0.WaitBlockFill11[64],
                     (unsigned int *)(*(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 4LL),
                     1,
                     (KiSpeculationFeatures & 0x20000000000LL) == 0);
          if ( (int)result < 0 )
          {
            if ( (_DWORD)result != -1073741637 )
              goto LABEL_21;
          }
          else
          {
            *((_DWORD *)v17 + 26) |= 0x80u;
          }
          v17 = (__int64 *)*v17;
        }
      }
      result = 0LL;
    }
    goto LABEL_21;
  }
  memset_0(v23, 0, 0x68uLL);
  v24 = (unsigned int)v4;
  result = VslpEnterIumSecureMode(2u, 0xE0u, 0, (__int64)v23);
LABEL_21:
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[88] = result;
  return result;
}
