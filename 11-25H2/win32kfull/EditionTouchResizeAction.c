/*
 * XREFs of EditionTouchResizeAction @ 0x1402AC2C0
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x140209FAC (DwmAsyncNotifyIsInMoveSizeChange.c)
 */

__int64 __fastcall EditionTouchResizeAction(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  BOOL v5; // ebx
  void *v6; // rax

  v3 = a2;
  v5 = a3 == 0;
  v6 = (void *)ReferenceDwmApiPort(a1, a2);
  return DwmAsyncNotifyIsInMoveSizeChange(v6, a1, 4, v5, v3);
}
