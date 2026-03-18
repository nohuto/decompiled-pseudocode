/*
 * XREFs of ?GetPrimaryYUVRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAPEAVIYUVSwapChainRealization@@XZ @ 0x1801D4BF8
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129AD8 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IYUVSwapChainRealization *__fastcall CGlobalCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  _QWORD *v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 9);
  v2 = 0LL;
  v3 = *((_QWORD *)this + 10) - (_QWORD)v1;
  v5 = 0LL;
  if ( v3 >> 3 )
  {
    (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v1)(*v1, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v5);
    v2 = v5;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (struct IYUVSwapChainRealization *)v2;
}
