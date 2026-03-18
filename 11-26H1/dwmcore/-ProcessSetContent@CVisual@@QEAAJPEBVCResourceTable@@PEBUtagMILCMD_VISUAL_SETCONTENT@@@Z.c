/*
 * XREFs of ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTENT@@@Z @ 0x18019FD60
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTENT *a3)
{
  unsigned int v3; // eax
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  if ( !v3
    || v3 < *((_DWORD *)a2 + 7)
    && (v10 = *((_DWORD *)a2 + 6) * v3, v11 = *((_QWORD *)a2 + 5), v12 = (unsigned int)v10, *(_DWORD *)(v10 + v11))
    && (v13 = *(_QWORD *)(v10 + v11 + 8)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 64LL))(v13, 36LL)
    && (v5 = *(_QWORD *)(v12 + v11 + 8)) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 328LL))(this, v5);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xB0Bu, 0LL);
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xB07u, 0LL);
  }
  return v8;
}
