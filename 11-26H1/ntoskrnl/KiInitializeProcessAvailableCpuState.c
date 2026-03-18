/*
 * XREFs of KiInitializeProcessAvailableCpuState @ 0x1404D61F4
 * Callers:
 *     KeInitializeProcess @ 0x140963BE4 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeProcessAvailableCpuState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  result = a1 + 56;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 72) = KiAvailableCpusWorkItemCallbackWrapper;
  *(_QWORD *)(a1 + 80) = a1 + 56;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 104) = KiAvailableCpusProcessWorkItemCallback;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = a3;
  return result;
}
