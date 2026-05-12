/*
 * XREFs of StorpGetOriginalMdl @ 0x140001290
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetOriginalMdl(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( a4 )
  {
    v4 = 96LL;
    if ( *(_BYTE *)(a2 + 2) != 40 )
      v4 = 48LL;
    v5 = *(_QWORD *)(v4 + a2);
    if ( a3 )
      *a4 = *(_QWORD *)(v5 + 136);
    else
      *a4 = *(_QWORD *)(v5 + 104);
    return 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 46LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return 3238002694LL;
  }
}
