/*
 * XREFs of PfSnReferenceProcessTrace @ 0x1403769CC
 * Callers:
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     PfSnAsyncContextInitialize @ 0x1409CFE74 (PfSnAsyncContextInitialize.c)
 *     PfSnLogHelper @ 0x1409D2D44 (PfSnLogHelper.c)
 *     PfSnLogStreamCreate @ 0x1409D2DB8 (PfSnLogStreamCreate.c)
 *     PfSnEndProcessTrace @ 0x140ACAE28 (PfSnEndProcessTrace.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtectionEx @ 0x140376EB0 (ExAcquireRundownProtectionEx.c)
 *     ExpReleaseRundownProtection @ 0x14045CF10 (ExpReleaseRundownProtection.c)
 */

__int64 __fastcall PfSnReferenceProcessTrace(__int64 a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned int v6; // edx
  BOOLEAN v7; // si
  signed __int64 v8; // rax
  KIRQL v9; // di
  unsigned __int64 v10; // rbx
  signed __int64 v11; // rtt

  _m_prefetchw((const void *)(a1 + 912));
  v2 = *(_QWORD *)(a1 + 912);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 912), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v6 = v2 & 0xF;
    v7 = 1;
    if ( v6 <= 1 )
    {
      if ( v6 )
      {
        if ( ExAcquireRundownProtectionEx(v4 + 45, 0xFu) )
        {
          _m_prefetchw((const void *)(a1 + 912));
          v8 = *(_QWORD *)(a1 + 912);
          while ( (v8 & 0xF) == 0 && v4 == (struct _EX_RUNDOWN_REF *)(v8 & 0xFFFFFFFFFFFFFFF0uLL) )
          {
            v11 = v8;
            v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 912), v8 + 15, v8);
            if ( v11 == v8 )
              return (__int64)v4;
          }
          ExpReleaseRundownProtection(v4 + 45, 0xFu);
        }
      }
      else
      {
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E67200.StateSaveArea);
        v10 = *(_QWORD *)(a1 + 912) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v10 )
          v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v10 + 360));
        KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E67200.StateSaveArea, v9);
        return v10 & -(__int64)(v7 != 0);
      }
    }
  }
  return (__int64)v4;
}
