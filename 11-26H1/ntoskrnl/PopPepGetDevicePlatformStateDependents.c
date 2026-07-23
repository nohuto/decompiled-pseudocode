/*
 * XREFs of PopPepGetDevicePlatformStateDependents @ 0x1404CBBA4
 * Callers:
 *     PopDiagTraceDeviceVerboseRundown @ 0x140AD81C0 (PopDiagTraceDeviceVerboseRundown.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetDevicePlatformStateDependents(__int64 a1, int *a2)
{
  KIRQL v4; // r11
  int v6; // ecx
  _DWORD *v7; // rdx
  __int64 v8; // r8
  unsigned int i; // edx
  __int64 v10; // r10
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // rcx

  *a2 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v6 = *a2;
    v7 = (_DWORD *)(a1 + 144);
    v8 = 3LL;
    do
    {
      v6 |= *v7++;
      *a2 = v6;
      --v8;
    }
    while ( v8 );
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v10 = 0LL;
      v11 = 208LL * i;
      if ( *(_DWORD *)(v11 + a1 + 380) )
      {
        v12 = *a2;
        do
        {
          v13 = 3 * v10;
          v10 = (unsigned int)(v10 + 1);
          v12 |= *(_DWORD *)(*(_QWORD *)(v11 + a1 + 392) + 8 * v13 + 16);
          *a2 = v12;
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v11 + a1 + 380) );
      }
    }
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v4);
  return 0;
}
