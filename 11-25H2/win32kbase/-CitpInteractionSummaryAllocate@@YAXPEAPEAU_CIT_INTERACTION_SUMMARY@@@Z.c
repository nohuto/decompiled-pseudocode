/*
 * XREFs of ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x140134AB8
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14004A560 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401A17C0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpInteractionSummaryAllocate(struct _CIT_INTERACTION_SUMMARY **a1, __int64 a2)
{
  unsigned __int16 v3; // bx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int16 v6; // ax

  v3 = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912) + 28LL);
  v4 = Win32AllocPoolZInitImpl(256LL, v3, 0x49637355u);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 8) = v4;
    *(_QWORD *)v4 = v4;
    v6 = *(_WORD *)(v4 + 100);
    *a1 = (struct _CIT_INTERACTION_SUMMARY *)v5;
    *(_WORD *)(v5 + 100) = v6 ^ (v6 ^ (4 * v3)) & 0x7FFC;
    *(_QWORD *)(v5 + 160) = v5 + 176;
    *(_QWORD *)(v5 + 168) = v3 - 176LL;
  }
  else
  {
    CitpLogFailureWorker(-1073741670, 0LL, 0x7F1u);
  }
}
