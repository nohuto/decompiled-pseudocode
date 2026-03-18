/*
 * XREFs of ?LowerBound@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEBA_KAEBK@Z @ 0x14034E120
 * Callers:
 *     ?IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z @ 0x1401F8A34 (-IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z.c)
 *     ?LookUp@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_NAEBKPEAUSFontReliabilityInfo@UmfdReliabilityManager@@@Z @ 0x1401FBEA0 (-LookUp@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_.c)
 *     ?Insert@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_NAEBKAEBUSFontReliabilityInfo@UmfdReliabilityManager@@@Z @ 0x14034DFD0 (-Insert@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::LowerBound(
        __int64 a1,
        unsigned int *a2)
{
  unsigned __int64 v2; // r8
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0LL;
  v4 = *a2;
  v5 = 0LL;
  do
  {
    v6 = (v2 >> 1) + v5;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 8 * v6) >= v4 )
    {
      v2 >>= 1;
    }
    else
    {
      v5 = v6 + 1;
      v2 += -1LL - (v2 >> 1);
    }
  }
  while ( v2 );
  return v5;
}
