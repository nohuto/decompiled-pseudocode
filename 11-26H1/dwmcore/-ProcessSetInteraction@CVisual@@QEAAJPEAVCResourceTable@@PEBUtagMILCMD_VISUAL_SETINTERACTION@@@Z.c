/*
 * XREFs of ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x1800E4368
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x1800E4340 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E4D30 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     McTemplateU0qqqxxpp_EventWriteTransfer @ 0x1801D63BC (McTemplateU0qqqxxpp_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetInteraction(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETINTERACTION *a3)
{
  unsigned int v3; // r9d
  struct CInteraction *v4; // rbx
  int v8; // r9d
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0LL;
  if ( v3 )
  {
    if ( HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), v3)
      && (v9 = (unsigned int)(*((_DWORD *)a2 + 6) * v8),
          v10 = *((_QWORD *)a2 + 5),
          v11 = (unsigned int)v9,
          (v12 = *(_QWORD *)(v9 + v10 + 8)) != 0)
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 65LL) )
    {
      v4 = *(struct CInteraction **)(v11 + v10 + 8);
    }
    else
    {
      v4 = 0LL;
    }
  }
  v13 = CVisual::SetInteraction(this, v4);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xC38u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800000) != 0 )
  {
    McTemplateU0qqqxxpp_EventWriteTransfer(
      *((_DWORD *)a3 + 2),
      0,
      *((_DWORD *)a2 + 12),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      (char)v4,
      (char)v4);
  }
  return v14;
}
