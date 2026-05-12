/*
 * XREFs of StorpGetDeviceObjects @ 0x140047F90
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetDeviceObjects(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  PDEVICE_OBJECT v6; // rcx
  __int64 v7; // rdx
  int **v9; // rax
  int *v10; // rcx
  int v11; // edx

  v4 = 0;
  if ( !a1 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v7 = 48LL;
    goto LABEL_6;
  }
  if ( !a2 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v7 = 49LL;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v7 = 50LL;
    goto LABEL_6;
  }
  if ( !a4 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v7 = 51LL;
LABEL_6:
    WPP_SF_(v6->AttachedDevice, v7, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    return (unsigned int)-1056964602;
  }
  v9 = *(int ***)(a1 - 16);
  if ( v9 )
  {
    v10 = *v9;
    if ( *v9 )
    {
      v11 = *v10;
      if ( ((_DWORD)v9[31] & 1) != 0 ? v11 == 1314275652 : v11 == 1094997074 )
      {
        *a2 = *((_QWORD *)v10 + 1);
        *a3 = *((_QWORD *)v10 + 4);
        *a4 = *((_QWORD *)v10 + 3);
        return v4;
      }
    }
  }
  return (unsigned int)-1056964602;
}
