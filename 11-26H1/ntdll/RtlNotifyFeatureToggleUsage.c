/*
 * XREFs of RtlNotifyFeatureToggleUsage @ 0x180147A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFtQueryConfiguration @ 0x180147B2C (RtlpFtQueryConfiguration.c)
 *     RtlpFtSendUsageNotification @ 0x180147C60 (RtlpFtSendUsageNotification.c)
 *     __ft_has_proxy @ 0x180147DB0 (__ft_has_proxy.c)
 *     __ft_record_impression @ 0x180147FFC (__ft_record_impression.c)
 */

__int64 __fastcall RtlNotifyFeatureToggleUsage(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  int v6; // r8d
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h]

  v8[0] = 0LL;
  HIDWORD(v9) = 0;
  v4 = a1;
  v5 = (unsigned int)(a3 - 1);
  if ( !(_DWORD)v5 || (v5 = (unsigned int)(v5 - 1), !(_DWORD)v5) )
  {
    LODWORD(v9) = 0x20000;
    if ( (unsigned int)_ft_has_proxy(a1, a2, v5, v8) )
      _ft_record_impression(0LL, v8[0], v9);
    _ft_record_impression(v4, a2, v9);
    if ( (a2 & 0x100) == 0 )
      return 0LL;
    a1 = v4;
    goto LABEL_11;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_11:
    RtlpFtSendUsageNotification(a1);
    return 0LL;
  }
  if ( v6 == 1 && (unsigned int)_ft_record_impression(a1, a2, 0x40000LL) )
    return ((unsigned int)RtlpFtQueryConfiguration(41326748LL, 0x800000000000000LL) >> 3) & 4;
  return 0LL;
}
