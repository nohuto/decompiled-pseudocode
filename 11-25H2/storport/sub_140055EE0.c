/*
 * XREFs of sub_140055EE0 @ 0x140055EE0
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_14005DAC0 @ 0x14005DAC0 (sub_14005DAC0.c)
 *     sub_14005E1B0 @ 0x14005E1B0 (sub_14005E1B0.c)
 *     sub_1400A6658 @ 0x1400A6658 (sub_1400A6658.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140055EE0(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int i; // r10d

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 968); ++i )
    v1 += _InterlockedCompareExchange((volatile signed __int32 *)(320LL * i + *(_QWORD *)(a1 + 960) + 192), 0, 0);
  return v1;
}
