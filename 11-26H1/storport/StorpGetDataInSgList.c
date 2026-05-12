/*
 * XREFs of StorpGetDataInSgList @ 0x14005B91C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetDataInSgList(__int64 a1, __int64 a2, _QWORD *a3)
{
  int **v3; // rax
  unsigned int v4; // r9d
  int *v6; // rcx
  int v7; // edx
  __int64 v9; // rcx

  v3 = *(int ***)(a1 - 16);
  v4 = 0;
  if ( !v3 )
    return 3238002694LL;
  v6 = *v3;
  if ( !*v3 )
    return 3238002694LL;
  v7 = *v6;
  if ( ((_DWORD)v3[31] & 1) != 0 )
  {
    if ( v7 != 1314275652 )
      return 3238002694LL;
  }
  else
  {
    if ( v7 != 1094997074 )
      return 3238002694LL;
    if ( (*((_BYTE *)v6 + 4435) & 4) != 0 )
      return (unsigned int)-1056964602;
  }
  if ( a3 )
  {
    v9 = 96LL;
    if ( *(_BYTE *)(a2 + 2) != 40 )
      v9 = 48LL;
    *a3 = *(_QWORD *)(*(_QWORD *)(v9 + a2) + 152LL);
    return v4;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 47LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
  }
  return (unsigned int)-1056964602;
}
