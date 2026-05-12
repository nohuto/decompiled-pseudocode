/*
 * XREFs of StorpReleaseMSISpinLock @ 0x140001130
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall StorpReleaseMSISpinLock(__int64 a1, unsigned int a2, KIRQL a3)
{
  int **v4; // rax
  int *v5; // rcx
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a1 )
  {
    v4 = *(int ***)(a1 - 16);
    if ( !v4 )
      return 3238002694LL;
    v5 = *v4;
    if ( !*v4 )
      return 3238002694LL;
    v6 = *v5;
    if ( ((_DWORD)v4[31] & 1) != 0 )
    {
      if ( v6 != 1314275652 )
        return 3238002694LL;
      if ( (v5[36] & 0x800LL) != 0 )
      {
        v8 = *((_QWORD *)v5 + 75);
        if ( v8 )
        {
          v7 = *(_QWORD *)(v8 + 120);
LABEL_10:
          if ( a2 < *(_DWORD *)(v7 + 4) )
          {
            KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v7 + 48LL * a2 + 24), a3);
            return 0LL;
          }
          return 3238002694LL;
        }
      }
    }
    else
    {
      if ( v6 != 1094997074 )
        return 3238002694LL;
      if ( *((_BYTE *)v5 + 4433) )
      {
        v7 = *((_QWORD *)v5 + 552);
        goto LABEL_10;
      }
    }
    return 3238002695LL;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    return 3238002694LL;
  }
  WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 59LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
  return 3238002694LL;
}
