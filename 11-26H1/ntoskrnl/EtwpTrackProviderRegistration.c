/*
 * XREFs of EtwpTrackProviderRegistration @ 0x140912B20
 * Callers:
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
 * Callees:
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpTrackProviderRegistration(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  bool v4; // si
  __int64 v5; // r13
  unsigned int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rbp

  result = *(unsigned __int16 *)(a1 + 98);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (*(_WORD *)(a1 + 98) & 1) == 0;
  v5 = *(_QWORD *)(v3 + 648);
  if ( (result & 8) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 91) & 1) != 0 )
    {
      result = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v3 + 648), *(unsigned __int16 *)(v3 + 88), 0LL);
      v9 = result;
      if ( result )
      {
        LOBYTE(v8) = v4;
        EtwpProviderArrivalCallback(result, v8, a1);
        return EtwpReleaseLoggerContext(v9, 0LL);
      }
    }
  }
  else
  {
    v6 = 0;
    v7 = 0LL;
    do
    {
      if ( (*(unsigned __int16 *)(a1 + 100) & (1 << v6)) != 0 )
      {
        v11 = EtwpAcquireLoggerContextByLoggerId(v5, *(unsigned __int16 *)(v3 + v7 + 134), 0LL);
        if ( v11 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0
            || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
            && _bittest16((const signed __int16 *)(a1 + 98), 0xAu)
            || (*(_DWORD *)(v11 + 816) & 0x2000000) != 0 )
          {
            LOBYTE(v10) = v4;
            EtwpProviderArrivalCallback(v11, v10, a1);
          }
          EtwpReleaseLoggerContext(v11, 0LL);
        }
      }
      result = *(unsigned __int16 *)(a1 + 104);
      if ( ((unsigned int)result & (1 << v6)) != 0 )
      {
        result = EtwpAcquireLoggerContextByLoggerId(
                   EtwpHostSiloState,
                   *(unsigned __int16 *)(*(_QWORD *)(v3 + 656) + v7 + 134),
                   0LL);
        v13 = result;
        if ( result )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0
            || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
            && _bittest16((const signed __int16 *)(a1 + 98), 0xAu)
            || (*(_DWORD *)(v13 + 816) & 0x2000000) != 0 )
          {
            LOBYTE(v12) = v4;
            EtwpProviderArrivalCallback(v13, v12, a1);
          }
          result = EtwpReleaseLoggerContext(v13, 0LL);
        }
      }
      ++v6;
      v7 += 32LL;
    }
    while ( v6 < 0x10 );
  }
  return result;
}
