/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x14010EAB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v4; // rdi
  char v5; // bp
  int v7; // esi
  __int64 v8; // rcx

  v3 = *(_DWORD *)(a1 + 1224);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = a2;
  if ( v3 == 1 )
  {
    *a3 = 0;
  }
  else if ( v3 == 2 )
  {
    *a3 = 1;
  }
  if ( !*a3 )
    return *(unsigned int *)(v4 + 2828);
  if ( (unsigned int)(*a3 - 1) <= 3 )
  {
    if ( *(int *)(v4 + 2832) < 4 && !*(_BYTE *)(v4 + 164) )
      return *(unsigned int *)(v4 + 2832);
    if ( a2 >= *(_DWORD *)(v4 + 48) )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 9999;
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
    }
    else
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1360), 1u);
      v7 = *(_DWORD *)(v4 + 2496) & (1 << v5);
      ExReleaseResourceLite((PERESOURCE)(v4 + 1360));
      if ( v7 )
        return *(unsigned int *)(v4 + 2832);
    }
    return *(unsigned int *)(v4 + 2828);
  }
  return 0LL;
}
