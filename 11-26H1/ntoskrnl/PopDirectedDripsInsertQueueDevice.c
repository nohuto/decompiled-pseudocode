/*
 * XREFs of PopDirectedDripsInsertQueueDevice @ 0x14077DA5C
 * Callers:
 *     PopDirectedDripsVisitPs4Device @ 0x1407E7A4C (PopDirectedDripsVisitPs4Device.c)
 *     PopDirectedDripsMarkDfxDevice @ 0x140B0D58C (PopDirectedDripsMarkDfxDevice.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopDirectedDripsInsertQueueDevice(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  _QWORD *result; // rax

  v2 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2
    || (v3 = (_QWORD *)a2[1], (_QWORD *)*v3 != a2)
    || (*v3 = v2, *(_QWORD *)(v2 + 8) = v3, result = *(_QWORD **)(a1 + 8), *result != a1) )
  {
    __fastfail(3u);
  }
  *a2 = a1;
  a2[1] = result;
  *result = a2;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
