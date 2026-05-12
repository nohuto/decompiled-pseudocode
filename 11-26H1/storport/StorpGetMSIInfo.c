/*
 * XREFs of StorpGetMSIInfo @ 0x140041758
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetMSIInfo(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r10
  int **v5; // rax
  int *v6; // rcx
  int v7; // edx
  unsigned __int8 *v8; // rdx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx

  v3 = 0;
  v4 = a2;
  if ( !a1 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v12 = 60LL;
LABEL_26:
    WPP_SF_(v10->AttachedDevice, v12, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    return (unsigned int)-1056964602;
  }
  if ( !a3 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v12 = 61LL;
    goto LABEL_26;
  }
  v5 = *(int ***)(a1 - 16);
  if ( !v5 )
    return (unsigned int)-1056964602;
  v6 = *v5;
  if ( !*v5 )
    return (unsigned int)-1056964602;
  v7 = *v6;
  if ( ((_DWORD)v5[31] & 1) == 0 )
  {
    if ( v7 != 1094997074 )
      return (unsigned int)-1056964602;
    if ( *((_BYTE *)v6 + 4433) )
    {
      v8 = (unsigned __int8 *)*((_QWORD *)v6 + 552);
      goto LABEL_9;
    }
    return (unsigned int)-1056964601;
  }
  if ( v7 != 1314275652 )
    return (unsigned int)-1056964602;
  if ( (v6[36] & 0x800LL) == 0 )
    return (unsigned int)-1056964601;
  v11 = *((_QWORD *)v6 + 75);
  if ( !v11 )
    return (unsigned int)-1056964601;
  v8 = *(unsigned __int8 **)(v11 + 120);
LABEL_9:
  if ( (unsigned int)v4 >= *((_DWORD *)v8 + 1) )
    return (unsigned int)-1056964602;
  *(_DWORD *)a3 = v4;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)&v8[48 * v4 + 32];
  *(_QWORD *)(a3 + 8) = *(_QWORD *)&v8[48 * v4 + 8];
  *(_DWORD *)(a3 + 16) = *(_DWORD *)&v8[48 * v4 + 36];
  *(_DWORD *)(a3 + 20) = *v8;
  *(_DWORD *)(a3 + 24) = *(_DWORD *)&v8[48 * v4 + 44];
  return v3;
}
