/*
 * XREFs of PfSnReferenceProcessTrace @ 0x140374C1C
 * Callers:
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 *     PfSnLogHelper @ 0x1409E9924 (PfSnLogHelper.c)
 *     PfSnLogStreamCreate @ 0x1409E9998 (PfSnLogStreamCreate.c)
 *     PfSnEndProcessTrace @ 0x140A43CB4 (PfSnEndProcessTrace.c)
 *     PfSnAsyncContextInitialize @ 0x140AE075C (PfSnAsyncContextInitialize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtectionEx @ 0x140375100 (ExAcquireRundownProtectionEx.c)
 *     ExpReleaseRundownProtection @ 0x140463F50 (ExpReleaseRundownProtection.c)
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
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea);
        v10 = *(_QWORD *)(a1 + 912) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v10 )
          v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v10 + 360));
        KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea, v9);
        return v10 & -(__int64)(v7 != 0);
      }
    }
  }
  return (__int64)v4;
}
