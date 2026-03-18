/*
 * XREFs of ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400585D4
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpInteractionSummaryAllocate(struct _CIT_INTERACTION_SUMMARY **a1, int a2, int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int16 v7; // ax

  v4 = *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 18952) + 28LL);
  v5 = Win32AllocPoolZInitImpl(256LL, v4, 0x49637355u);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    v7 = *(_WORD *)(v5 + 100);
    *a1 = (struct _CIT_INTERACTION_SUMMARY *)v6;
    *(_WORD *)(v6 + 100) = v7 ^ (v7 ^ (4 * v4)) & 0x7FFC;
    *(_QWORD *)(v6 + 160) = v6 + 176;
    *(_QWORD *)(v6 + 168) = v4 - 176;
  }
  else
  {
    CitpLogFailureWorker(-1073741670, 0LL, 0x7F1u);
  }
}
