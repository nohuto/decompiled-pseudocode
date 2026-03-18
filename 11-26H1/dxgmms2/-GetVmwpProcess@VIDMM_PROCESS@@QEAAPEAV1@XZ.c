/*
 * XREFs of ?GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ @ 0x140122B74
 * Callers:
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@IPEAX@Z @ 0x140110710 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVI.c)
 * Callees:
 *     <none>
 */

struct VIDMM_PROCESS *__fastcall VIDMM_PROCESS::GetVmwpProcess(VIDMM_PROCESS *this)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rcx
  struct VIDMM_PROCESS *result; // rax

  v1 = *((_QWORD *)this + 9);
  v2 = *(_DWORD *)(v1 + 408);
  if ( (v2 & 0x100) != 0 )
    v3 = *(_QWORD *)(v1 + 592);
  else
    v3 = v1 & -(__int64)((v2 & 0x80u) != 0);
  v4 = *(_QWORD *)(v3 + 64);
  result = 0LL;
  if ( v4 )
    return *(struct VIDMM_PROCESS **)(v4 + 8);
  return result;
}
