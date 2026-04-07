/*
 * XREFs of ?Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180076D0C
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x180076DB0 (--0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLegacyNonClientBackground::Create(struct CWindowData *a1, struct CLegacyNonClientBackground **a2)
{
  CLegacyNonClientBackground *v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (CLegacyNonClientBackground *)DefaultHeap::AllocClear(0x138uLL);
  if ( v4 )
    v5 = CLegacyNonClientBackground::CLegacyNonClientBackground(v4, a1);
  else
    v5 = 0LL;
  v6 = (*(__int64 (__fastcall **)(CBaseObject *))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v6,
      v9);
    if ( v5 )
      CBaseObject::Release(v5);
    return v7;
  }
  else
  {
    *a2 = v5;
    return 0LL;
  }
}
