/*
 * XREFs of ExWaitForRundownProtectionReleaseCacheAware @ 0x140484BD0
 * Callers:
 *     RawVerifyVolume @ 0x14061A588 (RawVerifyVolume.c)
 *     MiDrainCrossPartitionUsage @ 0x1406F51F0 (MiDrainCrossPartitionUsage.c)
 *     PfDeletePartition @ 0x1407C9F70 (PfDeletePartition.c)
 *     PfpPartitionAllocateState @ 0x1407CA0C4 (PfpPartitionAllocateState.c)
 *     RawUserFsCtrl @ 0x140919C34 (RawUserFsCtrl.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 */

void __stdcall ExWaitForRundownProtectionReleaseCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRef)
{
  unsigned int Number; // r10d
  unsigned __int64 v2; // r8
  unsigned int v3; // r11d
  int v4; // edx
  __int64 v5; // rdx
  signed __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v8; // [rsp+48h] [rbp-18h]

  Number = RunRef->Number;
  v2 = 0LL;
  v3 = 0;
  v6 = 0LL;
  Object = 0LL;
  v8 = 0LL;
  if ( Number )
  {
    do
    {
      v4 = v3 % Number;
      ++v3;
      v5 = _InterlockedExchange64(
             (volatile __int64 *)((char *)RunRef->RunRefs + RunRef->RunRefSize * v4),
             (__int64)&v6 + 1);
      Number = RunRef->Number;
      v2 += v5;
    }
    while ( v3 < Number );
    if ( v2 )
    {
      *(_QWORD *)&v8 = (char *)&Object + 8;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      LOWORD(Object) = 1;
      BYTE2(Object) = 6;
      DWORD1(Object) = 0;
      if ( _InterlockedExchangeAdd64(&v6, v2 >> 1) != -(__int64)(v2 >> 1) )
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    }
  }
}
