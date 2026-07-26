/*
 * XREFs of ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400D44B0
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x140191604 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void __fastcall ndisIfIndexAllocatorSubsystemInitialize(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  int v3; // ecx
  struct _GUID *v4; // [rsp+20h] [rbp-18h]
  char v5[4]; // [rsp+28h] [rbp-10h]

  ndisRegisterKnobs(&stru_14011C760, 1uLL, a3, 0LL, v4);
  v3 = *(_DWORD *)dword_14011F678;
  if ( (unsigned int)(*(_DWORD *)dword_14011F678 - 1) > 0x7FFE )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v5 = *(_DWORD *)dword_14011F678;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x16u,
        0xAu,
        (struct _GUID *)&WPP_08d66058e44c3546dbc094f515ac4e09_Traceguids,
        *(_DWORD *)v5);
    }
    v3 = 1;
    *(_DWORD *)dword_14011F678 = 1;
  }
  dword_14011E9F8 = 1;
  xmmword_14011EA00 = 0LL;
  dword_14011E9FC = v3;
  BitMapHeader = 0LL;
  dword_14011EA10 = v3;
  dword_14011EA14 = 0xFFFF;
}
