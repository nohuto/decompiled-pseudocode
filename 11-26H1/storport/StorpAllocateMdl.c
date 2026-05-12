/*
 * XREFs of StorpAllocateMdl @ 0x140059DA4
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall StorpAllocateMdl(__int64 a1, void *a2, ULONG a3, PMDL *a4)
{
  unsigned int v4; // ebx
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // rdx
  PMDL Mdl; // rax

  v4 = 0;
  if ( !a2 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 34LL;
LABEL_6:
    WPP_SF_(v8->AttachedDevice, v9, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    return (unsigned int)-1056964602;
  }
  if ( !a4 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 35LL;
    goto LABEL_6;
  }
  *a4 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
    *a4 = Mdl;
    if ( !Mdl )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 37LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
      }
      return (unsigned int)-1056964605;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 36LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  return v4;
}
