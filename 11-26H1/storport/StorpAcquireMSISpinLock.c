/*
 * XREFs of StorpAcquireMSISpinLock @ 0x140001320
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall StorpAcquireMSISpinLock(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  int **v5; // rax
  int *v6; // rcx
  int v7; // r8d
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax

  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 58LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
      return 3238002694LL;
    }
    return 3238002694LL;
  }
  v5 = *(int ***)(a1 - 16);
  if ( !v5 )
    return 3238002694LL;
  v6 = *v5;
  if ( !*v5 )
    return 3238002694LL;
  v7 = *v6;
  if ( ((_DWORD)v5[31] & 1) != 0 )
  {
    if ( v7 != 1314275652 )
      return 3238002694LL;
    if ( (v6[36] & 0x800LL) != 0 )
    {
      v10 = *((_QWORD *)v6 + 75);
      if ( v10 )
      {
        v8 = *(_QWORD *)(v10 + 120);
LABEL_10:
        if ( a2 < *(_DWORD *)(v8 + 4) )
        {
          v9 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v8 + 48LL * a2 + 24));
          result = 0LL;
          *a3 = v9;
          return result;
        }
        return 3238002694LL;
      }
    }
  }
  else
  {
    if ( v7 != 1094997074 )
      return 3238002694LL;
    if ( *((_BYTE *)v6 + 4433) )
    {
      v8 = *((_QWORD *)v6 + 552);
      goto LABEL_10;
    }
  }
  return 3238002695LL;
}
