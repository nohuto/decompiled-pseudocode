/*
 * XREFs of StorpAllocatePool @ 0x140037660
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall StorpAllocatePool(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 Pool2; // rax

  if ( !a4 )
    return 3238002694LL;
  *a4 = 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return 3238002696LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, a2, a3);
    *a4 = Pool2;
    if ( Pool2 )
    {
      return 0LL;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 31LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
      }
      return 3238002691LL;
    }
  }
}
