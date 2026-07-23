/*
 * XREFs of WheapAddErrorSource @ 0x1406D8C98
 * Callers:
 *     WheaAddErrorSource @ 0x14084D9D0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140CEE4C8 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140EEF0E8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140EEF0D0;
  v3 = (__int64 *)qword_140EEF0E0;
  if ( *(__int64 **)qword_140EEF0E0 != &qword_140EEF0D8 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140EEF0D8;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140EEF0E0 = a2;
  _InterlockedIncrement(&dword_140EEF0CC);
  _InterlockedIncrement(&dword_140EEF0D0);
  return KeSetEvent(&stru_140EEF0E8, 0, 0);
}
