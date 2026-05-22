/*
 * XREFs of ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18008F760
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x180048768 (-IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x180048AF8 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall GameInputProcessor::OnDeviceRemoval(GameInputProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  _DWORD *v5; // r8
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = GameInputProcessor::LazyInitialize(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      (const char *)(unsigned int)v4,
      v7);
  if ( GameInputProcessor::IsLegacyPnpDevice(a2) && (*((_DWORD *)a2 + 1) == 4 || *((_DWORD *)a2 + 1) == 2) )
  {
    v5 = (_DWORD *)*((_QWORD *)this + 21);
    v6 = *((_QWORD *)this + 22);
    while ( v5 != (_DWORD *)v6 )
    {
      if ( *v5 == *(_DWORD *)a2 )
      {
        std::_Copy_memmove<enum _Button *,enum _Button *>(v5 + 1, v6, v5);
        *((_QWORD *)this + 22) -= 4LL;
        return;
      }
      ++v5;
    }
  }
}
