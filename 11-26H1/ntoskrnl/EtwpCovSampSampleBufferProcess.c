/*
 * XREFs of EtwpCovSampSampleBufferProcess @ 0x140942E78
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x140830C70 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     EtwpCovSampContextAddSamples @ 0x14093E870 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampStackHashCheck @ 0x14093ECA8 (EtwpCovSampStackHashCheck.c)
 *     EtwpCovSampContextAddAddresses @ 0x14093F0AC (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140940F74 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140940FE8 (EtwpCovSampAcquireSamplerRundown.c)
 */

__int64 __fastcall EtwpCovSampSampleBufferProcess(unsigned __int64 *a1, _DWORD *a2)
{
  int v4; // ebp
  unsigned __int64 *v5; // rdi
  int i; // r15d
  int v7; // ecx
  unsigned int v8; // r9d
  int v9; // edx
  struct _KTHREAD *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown((_KSCB **)&v11) >= 0 )
  {
    v4 = 0;
    v5 = (unsigned __int64 *)(a2 + 18);
    for ( i = 0; i < a2[14]; v5 = (unsigned __int64 *)((char *)v5 + (unsigned __int16)v9) )
    {
      if ( v4 + 16 > a2[16] )
        break;
      v7 = *((_DWORD *)v5 + 1);
      v8 = HIWORD(v7) & 0x7FFF;
      if ( *(_DWORD *)v5 != v4
        || (unsigned __int16)v7 < 8 * v8
        || *(_DWORD *)v5 + (unsigned int)(unsigned __int16)v7 > a2[15] )
      {
        break;
      }
      if ( v7 >= 0 )
      {
        if ( !(unsigned int)EtwpCovSampStackHashCheck(a1, (unsigned __int16)v7, (unsigned __int8 *)v5 + 8, v8) )
          EtwpCovSampContextAddAddresses(
            v11,
            (__int64)KeGetCurrentThread()->ApcState.Process,
            v5 + 1,
            *((_WORD *)v5 + 3) & 0x7FFF);
      }
      else
      {
        EtwpCovSampContextAddSamples(v11, (__int64)(v5 + 1), v8);
      }
      v9 = *((_DWORD *)v5 + 1);
      ++i;
      v4 += (unsigned __int16)v9;
    }
  }
  return EtwpCovSampReleaseSamplerRundown((__int64)v11);
}
