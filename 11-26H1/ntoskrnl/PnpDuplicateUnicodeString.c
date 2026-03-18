/*
 * XREFs of PnpDuplicateUnicodeString @ 0x1404F5F44
 * Callers:
 *     PiDevCfgAppendMultiSz @ 0x1407A8AFC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AA380 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AA688 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgBuildIndirectString @ 0x14098838C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryDriverNode @ 0x140AD009C (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AD1378 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AD3638 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B393C0 (PiDevCfgConfigureDeviceLocation.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char __fastcall PnpDuplicateUnicodeString(__int64 a1, __int64 a2)
{
  void *Pool2; // rax

  if ( !*(_QWORD *)(a2 + 8) )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    goto LABEL_4;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  *(_QWORD *)(a1 + 8) = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, *(const void **)(a2 + 8), *(unsigned __int16 *)(a2 + 2));
LABEL_4:
    *(_WORD *)a1 = *(_WORD *)a2;
    *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
    LOBYTE(Pool2) = 1;
  }
  return (char)Pool2;
}
