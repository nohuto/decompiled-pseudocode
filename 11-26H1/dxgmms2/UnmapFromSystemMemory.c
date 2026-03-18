/*
 * XREFs of UnmapFromSystemMemory @ 0x1400F5810
 * Callers:
 *     ?UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z @ 0x1400F51E0 (-UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?Unlock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1400F5558 (-Unlock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UnmapFromSystemMemory(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = *(unsigned int *)(*a1 + 28LL);
  if ( (result & 0x30) == 0 )
  {
    result = *(_QWORD *)(v1 + 368);
    if ( (*(_DWORD *)result & 0x40000) != 0 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v1 + 216) + 64LL))(
                 *(_QWORD *)(v1 + 216),
                 *(_QWORD *)(v1 + 224),
                 a1[2]);
      a1[2] = 0LL;
    }
  }
  return result;
}
