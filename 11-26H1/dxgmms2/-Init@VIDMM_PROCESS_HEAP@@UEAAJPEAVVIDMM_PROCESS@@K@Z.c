/*
 * XREFs of ?Init@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_PROCESS@@K@Z @ 0x1400BB3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Init(VIDMM_PROCESS_HEAP *this, struct VIDMM_PROCESS *a2, int a3)
{
  __int64 result; // rax

  *((_QWORD *)this + 1) = a2;
  result = 0LL;
  *((_DWORD *)this + 72) = a3;
  return result;
}
