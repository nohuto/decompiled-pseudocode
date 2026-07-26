/*
 * XREFs of ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1401626D0
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x14006E060 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1401627C0 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x140162920 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 */

bool __fastcall ndisPcwMatchInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        const struct _UNICODE_STRING *a3)
{
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r8
  struct _UNICODE_STRING v10; // [rsp+20h] [rbp-248h] BYREF
  char v11; // [rsp+30h] [rbp-238h] BYREF

  *(_QWORD *)&v10.Length = 33685504LL;
  v10.Buffer = (wchar_t *)&v11;
  if ( ndisPcwGetInstanceName(a1, a2, &v10) >= 0 )
  {
    if ( ndisWildCardStringMatch(a3, &v10, v6) )
      return 1;
    if ( !a2 )
    {
      v10.Length = 0;
      if ( ndisPcwGetInstanceName(a1, 0xFFFu, &v10) >= 0 )
      {
        if ( !ndisWildCardStringMatch(a3, &v10, v7) )
        {
          v10.Length = 0;
          if ( ndisPcwGetInstanceName(0LL, 0xFFFFFFFE, &v10) >= 0 )
            return ndisWildCardStringMatch(a3, &v10, v8) != 0;
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}
