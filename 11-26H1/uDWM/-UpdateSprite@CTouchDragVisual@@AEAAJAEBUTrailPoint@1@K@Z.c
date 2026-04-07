/*
 * XREFs of ?UpdateSprite@CTouchDragVisual@@AEAAJAEBUTrailPoint@1@K@Z @ 0x1800CC9B0
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800CCA88 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTouchDragVisual::UpdateSprite(
        CTouchDragVisual *this,
        const struct CTouchDragVisual::TrailPoint *a2,
        int a3)
{
  __int64 v4; // r8
  float v5; // xmm6_4
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, int *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*(_QWORD *)a2 )
    return 0LL;
  v4 = (unsigned int)(a3 - *((_DWORD *)a2 + 7));
  v5 = 1.0 - fmaxf(0.0, fminf(1.0, (float)(int)v4 / 200.0));
  CVisual::SetOpacity(*(CVisual **)a2, (float)((float)(v5 * 0.0) + 1.0), v4);
  v6 = *((_QWORD *)a2 + 1);
  v11[2] = 1065353216;
  v7 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 272LL);
  *(float *)v11 = (float)(v5 * 0.69999999) + 0.30000001;
  v11[1] = v11[0];
  v8 = v7(v6, v11);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x189,
    (int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
