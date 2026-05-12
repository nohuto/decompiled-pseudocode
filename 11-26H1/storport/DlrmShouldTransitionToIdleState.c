/*
 * XREFs of DlrmShouldTransitionToIdleState @ 0x14012D3AC
 * Callers:
 *     StorAdapterDlrmSystemThread @ 0x14012DE30 (StorAdapterDlrmSystemThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall DlrmShouldTransitionToIdleState(__int64 a1)
{
  ULONGLONG v1; // rbx
  ULONGLONG UnbiasedInterruptTime; // rax
  bool result; // al

  result = a1
        && (*(_DWORD *)(a1 + 12) & 0xB) == 1
        && (v1 = *(_QWORD *)(a1 + 304)) != 0
        && (UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime(), UnbiasedInterruptTime >= v1)
        && UnbiasedInterruptTime - v1 >= g_DlrmIdleDetectionTimeout100ns;
  return result;
}
