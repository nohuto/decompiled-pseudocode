/*
 * XREFs of StorpGetExtendedTable @ 0x14003E1A4
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int128 *__fastcall StorpGetExtendedTable(__int64 a1, __int128 **a2)
{
  __int128 *result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int128 *)&retaddr;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u) && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      result = (__int128 *)WPP_SF_(
                             WPP_GLOBAL_Control->AttachedDevice,
                             10LL,
                             &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        result = (__int128 *)WPP_SF_(
                               WPP_GLOBAL_Control->AttachedDevice,
                               11LL,
                               &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          result = (__int128 *)WPP_SF_(
                                 WPP_GLOBAL_Control->AttachedDevice,
                                 12LL,
                                 &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            result = (__int128 *)WPP_SF_(
                                   WPP_GLOBAL_Control->AttachedDevice,
                                   13LL,
                                   &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            result = (__int128 *)WPP_SF_(
                                   WPP_GLOBAL_Control->AttachedDevice,
                                   14LL,
                                   &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
          }
        }
      }
    }
  }
  if ( a2 )
  {
    if ( a1 )
    {
      result = (__int128 *)(a1 + 4632);
      *(_OWORD *)(a1 + 4632) = StorportExtensionTable;
      *(_OWORD *)(a1 + 4648) = xmmword_1401730F0;
      *(_OWORD *)(a1 + 4664) = xmmword_140173100;
      *(_OWORD *)(a1 + 4680) = xmmword_140173110;
      *(_OWORD *)(a1 + 4696) = xmmword_140173120;
      *(_QWORD *)(a1 + 4712) = qword_140173130;
    }
    else
    {
      result = &StorportExtensionTable;
    }
    *a2 = result;
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    return (__int128 *)WPP_SF_(
                         WPP_GLOBAL_Control->AttachedDevice,
                         15LL,
                         &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
  }
  return result;
}
