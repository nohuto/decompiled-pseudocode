/*
 * XREFs of WheapAddErrorSource @ 0x14064FCA8
 * Callers:
 *     WheaAddErrorSource @ 0x1407B71B0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140C3352C (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140EEEA60, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140EEEA48;
  v3 = (__int64 *)qword_140EEEA58;
  if ( *(__int64 **)qword_140EEEA58 != &qword_140EEEA50 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140EEEA50;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140EEEA58 = a2;
  _InterlockedIncrement(&dword_140EEEA44);
  _InterlockedIncrement(&dword_140EEEA48);
  return KeSetEvent(&stru_140EEEA60, 0, 0);
}
