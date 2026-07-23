/*
 * XREFs of KeSetIntervalProfile @ 0x1407BDF28
 * Callers:
 *     EtwpTimeProfileStart @ 0x14082E308 (EtwpTimeProfileStart.c)
 *     EtwpCoverageSamplerStart @ 0x14083773C (EtwpCoverageSamplerStart.c)
 *     NtSetIntervalProfile @ 0x14084B880 (NtSetIntervalProfile.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KeQueryIntervalProfile @ 0x1407BDE5C (KeQueryIntervalProfile.c)
 */

void __fastcall KeSetIntervalProfile(int a1, int a2)
{
  int IntervalProfile; // edi
  int v5; // eax
  unsigned __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v7[4]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v8[2]; // [rsp+48h] [rbp-18h] BYREF

  IntervalProfile = 0;
  v6 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x402) != 0 )
    IntervalProfile = KeQueryIntervalProfile(a2);
  if ( a2 == 1 )
  {
    KiProfileAlignmentFixupInterval = a1;
  }
  else
  {
    v6 = __PAIR64__(a1, a2);
    KeGenericProcessorCallback((__int64 *)&stru_140FC11F0.WaitRegister, (__int64)KiSetIntervalWorker, (__int64)&v6, 1);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x402) != 0 )
  {
    v5 = KeQueryIntervalProfile(a2);
    if ( v5 != IntervalProfile )
    {
      v7[1] = v5;
      v7[0] = a2;
      v8[0] = v7;
      v7[2] = IntervalProfile;
      v8[1] = 12LL;
      EtwTraceKernelEvent((int)v8, 1, 0x20000402u, 3912, 5249282);
    }
  }
}
