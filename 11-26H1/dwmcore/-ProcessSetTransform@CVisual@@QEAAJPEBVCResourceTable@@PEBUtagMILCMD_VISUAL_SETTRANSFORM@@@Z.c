/*
 * XREFs of ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1801B01D4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransform@CVisual@@QEAAXPEAVCTransform3D@@@Z @ 0x1801B0288 (-SetTransform@CVisual@@QEAAXPEAVCTransform3D@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetTransform(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTRANSFORM *a3)
{
  unsigned int v3; // eax
  struct CTransform3D *v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  v6 = 0;
  if ( !v3
    || v3 < *((_DWORD *)a2 + 7)
    && (v8 = *((_DWORD *)a2 + 6) * v3, v9 = *((_QWORD *)a2 + 5), v10 = (unsigned int)v8, *(_DWORD *)(v8 + v9))
    && (v11 = *(_QWORD *)(v8 + v9 + 8)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL))(v11, 148LL)
    && (v5 = *(struct CTransform3D **)(v10 + v9 + 8)) != 0LL )
  {
    CVisual::SetTransform(this, v5);
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x950u, 0LL);
  }
  return v6;
}
