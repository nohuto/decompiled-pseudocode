/*
 * XREFs of ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1404163E0
 * Callers:
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1401D8B50 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x140284168 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x140195854 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT *TdrCreateRecoveryContext(void)
{
  __int64 Pool2; // rax
  struct _TDR_RECOVERY_CONTEXT *v1; // rbx

  Pool2 = ExAllocatePool2(64LL, 2928LL, 1380209782LL);
  v1 = (struct _TDR_RECOVERY_CONTEXT *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 1380209782;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_QWORD *)(Pool2 + 112) = 1380209782LL;
    *(_DWORD *)(Pool2 + 128) = 12;
    *(_DWORD *)(Pool2 + 2784) = g_TdrConfig;
    *(_DWORD *)(Pool2 + 2788) = dword_140168AC4;
    *(_DWORD *)(Pool2 + 2792) = dword_140168AD0;
    *(_QWORD *)(Pool2 + 120) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(Pool2 + 2840) = 1380209782;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2487;
  }
  return TdrReferenceRecoveryContext(v1);
}
