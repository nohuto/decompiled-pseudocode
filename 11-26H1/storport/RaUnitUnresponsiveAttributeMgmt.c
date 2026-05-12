/*
 * XREFs of RaUnitUnresponsiveAttributeMgmt @ 0x1400A66AC
 * Callers:
 *     RaUnitAttributeManagement @ 0x1400991B0 (RaUnitAttributeManagement.c)
 * Callees:
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x14009A0D8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1400A13C0 (RaUnitSetUnresponsiveAttribute.c)
 */

__int64 __fastcall RaUnitUnresponsiveAttributeMgmt(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // rax
  char v4; // al
  PDEVICE_OBJECT v5; // r10
  unsigned __int16 v6; // dx

  v2 = -1073741811;
  if ( *(_DWORD *)(a1 + 1036) || *(_DWORD *)(a1 + 1044) || *(_DWORD *)(a1 + 1040) || (*(_BYTE *)(a1 + 506) & 1) != 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1073741637;
    }
    v6 = 52;
    goto LABEL_21;
  }
  v3 = *(_BYTE **)(a1 + 112);
  if ( v3 )
  {
    v4 = *v3 & 0x1F;
    if ( v4 )
    {
      if ( v4 != 20 )
      {
        v5 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          return (unsigned int)-1073741637;
        }
        v6 = 53;
LABEL_21:
        WPP_SF_q((__int64)v5->AttachedDevice, v6, (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids, a1);
        return (unsigned int)-1073741637;
      }
    }
  }
  if ( a2 == 1 )
  {
    return (unsigned int)RaUnitSetUnresponsiveAttribute(a1);
  }
  else
  {
    if ( a2 )
      return v2;
    return (unsigned int)RaUnitClearUnresponsiveAttribute(a1);
  }
}
