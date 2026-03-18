/*
 * XREFs of WheapAddErrorSource @ 0x1406D4BB8
 * Callers:
 *     WheaAddErrorSource @ 0x140847770 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140CE8128 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140EEEDD8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140EEEDC0;
  v3 = (__int64 *)qword_140EEEDD0;
  if ( *(__int64 **)qword_140EEEDD0 != &qword_140EEEDC8 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140EEEDC8;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140EEEDD0 = a2;
  _InterlockedIncrement(&dword_140EEEDBC);
  _InterlockedIncrement(&dword_140EEEDC0);
  return KeSetEvent(&stru_140EEEDD8, 0, 0);
}
