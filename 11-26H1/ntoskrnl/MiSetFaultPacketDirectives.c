/*
 * XREFs of MiSetFaultPacketDirectives @ 0x1403A981C
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiValidVirtualizationFault @ 0x140527ED0 (MiValidVirtualizationFault.c)
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
