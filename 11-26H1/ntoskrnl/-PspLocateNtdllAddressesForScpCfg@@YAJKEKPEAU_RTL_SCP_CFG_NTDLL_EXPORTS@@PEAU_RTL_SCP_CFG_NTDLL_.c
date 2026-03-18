/*
 * XREFs of ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140CD9680
 * Callers:
 *     PsInitializeScpCfgPages @ 0x140CD989C (PsInitializeScpCfgPages.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PsQuerySystemDllInfo @ 0x1409EBB38 (PsQuerySystemDllInfo.c)
 *     MmGetScpCfgFunctionOffset @ 0x140AEB8CC (MmGetScpCfgFunctionOffset.c)
 *     ?PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEBDPEAX_K@Z @ 0x140CD938C (-PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEBDPEAX_K@Z.c)
 */

__int64 __fastcall PspLocateNtdllAddressesForScpCfg(
        __int64 a1,
        char a2,
        __int64 a3,
        struct _RTL_SCP_CFG_NTDLL_EXPORTS *a4,
        struct _RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC *a5)
{
  __int64 SystemDllInfo; // rsi
  unsigned int v8; // ebx
  __int64 v9; // r14
  __int64 result; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r10
  unsigned int i; // r11d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int ScpCfgFunctionOffset; // eax
  __int64 v20; // r9
  int v21; // edx
  unsigned int v22; // eax
  __int64 v23; // r9
  int v24; // edx
  unsigned int v25; // eax
  __int64 v26; // r9
  int v27; // edx
  unsigned int v28; // eax
  __int64 v29; // r9
  __int64 v30; // [rsp+30h] [rbp-68h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h]
  _QWORD v32[9]; // [rsp+48h] [rbp-50h]

  memset_0(a5, 0, 0x40uLL);
  SystemDllInfo = PsQuerySystemDllInfo(a2 == 0 ? 3 : 0);
  v8 = 0;
  v30 = 0LL;
  RtlImageNtHeaderEx(1, *(_QWORD *)(SystemDllInfo + 32), 0LL, &v30);
  v9 = v30;
  result = PspCopyNtdllExport(
             (const struct _PS_SYSTEM_DLL_INFO *)SystemDllInfo,
             *(_DWORD *)(v30 + 80),
             "RtlpScpCfgNtdllExports",
             a4,
             0x68uLL);
  if ( (int)result >= 0 )
  {
    v11 = *(_QWORD *)(SystemDllInfo + 24);
    v12 = *(unsigned int *)(v9 + 80);
    for ( i = 0; i < 4; ++i )
    {
      v14 = *((_QWORD *)a4 + 2 * i);
      v15 = *((_QWORD *)a4 + 2 * i + 1);
      if ( v15 <= v14 )
        return 3221225485LL;
      if ( v15 - v14 > 0x1000 )
        return 3221225485LL;
      v16 = *(_QWORD *)(SystemDllInfo + 24);
      if ( v16 + v12 <= v16 || v14 < v16 || v15 > v16 + v12 )
        return 3221225485LL;
      *((_QWORD *)a4 + 2 * i) = *(_QWORD *)(SystemDllInfo + 32) + v14 - v16;
      *((_QWORD *)a4 + 2 * i + 1) = *(_QWORD *)(SystemDllInfo + 32) + v15 - *(_QWORD *)(SystemDllInfo + 24);
    }
    v31 = *((_QWORD *)a4 + 8);
    v32[0] = 8LL;
    v32[1] = *((_QWORD *)a4 + 9);
    v32[2] = 8LL;
    v32[3] = *((_QWORD *)a4 + 10);
    v32[4] = 8LL;
    v32[5] = *((_QWORD *)a4 + 11);
    v32[6] = 8LL;
    v32[7] = *((_QWORD *)a4 + 12);
    v32[8] = 1LL;
    while ( v8 < 5 )
    {
      v17 = v32[2 * v8 - 1];
      v18 = v17 + v32[2 * v8];
      if ( v12 + v11 <= v11 || v18 <= v17 || v17 < v11 || v18 > v12 + v11 )
        return 3221225485LL;
      ++v8;
    }
    ScpCfgFunctionOffset = MmGetScpCfgFunctionOffset(320, v12);
    PspNtdllScpFunctions = v20 + ScpCfgFunctionOffset;
    v22 = MmGetScpCfgFunctionOffset(448, v21);
    qword_140FC07B8 = v23 + v22;
    v25 = MmGetScpCfgFunctionOffset(64, v24);
    qword_140FC07C0 = v26 + v25;
    v28 = MmGetScpCfgFunctionOffset(192, v27);
    qword_140FC07C8 = v29 + v28;
    return 0LL;
  }
  return result;
}
