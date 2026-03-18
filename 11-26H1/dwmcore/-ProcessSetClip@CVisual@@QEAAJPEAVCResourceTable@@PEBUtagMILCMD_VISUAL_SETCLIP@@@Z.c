/*
 * XREFs of ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z @ 0x18018BC68
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetClip@CVisual@@QEAAXPEAVCGeometry@@@Z @ 0x18018BD20 (-SetClip@CVisual@@QEAAXPEAVCGeometry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetClip(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCLIP *a3)
{
  unsigned int v3; // eax
  struct CGeometry *v5; // rdx
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  v6 = 0;
  if ( !v3
    || v3 < *((_DWORD *)a2 + 7)
    && (v9 = *((_DWORD *)a2 + 6) * v3, v10 = *((_QWORD *)a2 + 5), v11 = (unsigned int)v9, *(_DWORD *)(v9 + v10))
    && (v12 = *(_QWORD *)(v9 + v10 + 8)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 56LL)
    && (v5 = *(struct CGeometry **)(v11 + v10 + 8)) != 0LL )
  {
    CVisual::SetClip(this, v5);
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xA28u, 0LL);
  }
  return v6;
}
