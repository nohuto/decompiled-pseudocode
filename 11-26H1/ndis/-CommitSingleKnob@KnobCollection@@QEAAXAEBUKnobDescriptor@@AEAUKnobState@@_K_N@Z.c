/*
 * XREFs of ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x14014FDB4
 * Callers:
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x14014F8A4 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x14014FB2C (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x140165290 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 * Callees:
 *     ?SetCurrentValue@KnobDescriptor@@QEBAX_K@Z @ 0x1400776D0 (-SetCurrentValue@KnobDescriptor@@QEBAX_K@Z.c)
 *     WPP_RECORDER_SF_Sii @ 0x1400E6378 (WPP_RECORDER_SF_Sii.c)
 *     WPP_RECORDER_SF_SiiD @ 0x1400E6500 (WPP_RECORDER_SF_SiiD.c)
 *     WPP_RECORDER_SF_Siid @ 0x1400E66B0 (WPP_RECORDER_SF_Siid_ea_1400E66B0.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall KnobCollection::CommitSingleKnob(
        KnobCollection *this,
        struct KnobDescriptor *a2,
        struct KnobState *a3,
        __int64 a4,
        bool a5)
{
  __int64 (__fastcall *v7)(_QWORD, struct KnobDescriptor *, _QWORD); // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]

  if ( (a2->Flags & 0x20) == 0 && !a5 )
  {
    *((_DWORD *)a3 + 2) = -1073741102;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sii(*((_QWORD *)WPP_GLOBAL_Control + 8), 3u, (__int64)a3, 0x11u, v12, a2->Name);
    return;
  }
  v7 = (__int64 (__fastcall *)(_QWORD, struct KnobDescriptor *, _QWORD))*((_QWORD *)this + 5);
  if ( !v7 )
  {
    KnobDescriptor::SetCurrentValue(a2, *(_QWORD *)a3);
    *(_DWORD *)(v10 + 8) = 0;
    goto LABEL_14;
  }
  v8 = v7(*((_QWORD *)this + 6), a2, *(_QWORD *)a3);
  if ( v8 != 255 )
  {
    if ( v8 )
      goto LABEL_10;
    KnobDescriptor::SetCurrentValue(a2, *(_QWORD *)a3);
  }
  v8 = 0;
LABEL_10:
  *((_DWORD *)a3 + 2) = v8;
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Siid(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, v11, v12, a2->Name);
    return;
  }
LABEL_14:
  *((_DWORD *)a3 + 3) = *((_DWORD *)a3 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_SiiD(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, v11, v12, a2->Name);
}
