/*
 * XREFs of StorpGetSystemAddress @ 0x140049794
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetSystemAddress(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  PVOID v12; // rax

  v4 = 0;
  if ( !a4 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 42LL;
LABEL_6:
    WPP_SF_(v8->AttachedDevice, v9, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    return (unsigned int)-1056964602;
  }
  *a4 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    v10 = 96LL;
    if ( *(_BYTE *)(a2 + 2) != 40 )
      v10 = 48LL;
    v11 = *(_QWORD *)((a3 != 0 ? 0x20 : 0) + *(_QWORD *)(v10 + a2) + 104LL);
    if ( !v11 )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return (unsigned int)-1056964602;
      }
      v9 = 44LL;
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
      v12 = *(PVOID *)(v11 + 24);
    else
      v12 = MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000010u);
    *a4 = v12;
    if ( !v12 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 45LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
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
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 43LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  return v4;
}
