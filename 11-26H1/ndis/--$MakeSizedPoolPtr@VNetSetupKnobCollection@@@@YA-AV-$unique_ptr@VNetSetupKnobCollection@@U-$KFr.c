/*
 * XREFs of ??$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA?AV?$unique_ptr@VNetSetupKnobCollection@@U?$KFreePool@VNetSetupKnobCollection@@@@@wistd@@K_K@Z @ 0x14014FCDC
 * Callers:
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x140165090 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14000AC20 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14008E040 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<NetSetupKnobCollection>(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, a3, 1651197006LL);
  if ( Pool2 )
  {
    *(_OWORD *)(Pool2 + 72) = 0LL;
    *(_QWORD *)(Pool2 + 88) = 0LL;
    *(_OWORD *)(Pool2 + 8) = 0LL;
    *(_QWORD *)Pool2 = &NetSetupKnobCollection::`vftable';
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      (__int64)a1,
      Pool2);
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(a1);
  }
  return a1;
}
