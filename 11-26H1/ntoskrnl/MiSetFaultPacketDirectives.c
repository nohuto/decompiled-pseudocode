/*
 * XREFs of MiSetFaultPacketDirectives @ 0x1403A7ABC
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402D8E50 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1403A7338 (MiValidFault.c)
 *     MiValidVirtualizationFault @ 0x140525860 (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetFaultPacketDirectives(__int64 a1, int a2, __int64 a3)
{
  if ( a2 == -1073741801 )
  {
    if ( a3 )
    {
      *(_QWORD *)(a1 + 128) = a3;
      *(_QWORD *)(a1 + 144) = 1LL;
    }
    else
    {
      *(_DWORD *)(a1 + 80) |= 1u;
    }
  }
  else if ( a2 == -1073740748 )
  {
    *(_DWORD *)(a1 + 80) |= 2u;
  }
}
