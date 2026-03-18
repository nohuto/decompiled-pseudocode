/*
 * XREFs of PopRunMaximumIrpWorkers @ 0x1403B7600
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopCreateDynamicIrpWorker @ 0x1403B64AC (PopCreateDynamicIrpWorker.c)
 */

int PopRunMaximumIrpWorkers()
{
  __int64 v0; // rbx
  unsigned int v1; // edi
  _QWORD *v2; // rax
  unsigned int v3; // ecx
  __int64 v4; // rbx
  _BYTE Object[4]; // [rsp+30h] [rbp-20h] BYREF
  int v7; // [rsp+34h] [rbp-1Ch]
  _QWORD v8[2]; // [rsp+38h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp-8h]
  int v10; // [rsp+4Ch] [rbp-4h]

  Object[1] = 0;
  Object[3] = 0;
  v10 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&PopWeakChargerLock.WaitBlockFill11[112]);
  PopWeakChargerLock.WaitBlockFill6[72] = 0;
  v0 = (unsigned int)(15
                    - *(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[84]
                    - *(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[80]);
  *(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[84] += v0;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&PopWeakChargerLock.WaitBlockFill11[112]);
  Object[0] = 5;
  v8[1] = v8;
  v1 = 0;
  Object[2] = 8;
  v2 = v8;
  v8[0] = v8;
  v7 = 0;
  v9 = v0;
  if ( (_DWORD)v0 )
  {
    do
    {
      LODWORD(v2) = PopCreateDynamicIrpWorker((__int64)Object);
      v3 = v1 + 1;
      if ( (int)v2 < 0 )
        v3 = v1;
      v1 = v3;
      --v0;
    }
    while ( v0 );
    if ( v3 )
    {
      v4 = v3;
      do
      {
        LODWORD(v2) = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
        --v4;
      }
      while ( v4 );
    }
  }
  return (int)v2;
}
