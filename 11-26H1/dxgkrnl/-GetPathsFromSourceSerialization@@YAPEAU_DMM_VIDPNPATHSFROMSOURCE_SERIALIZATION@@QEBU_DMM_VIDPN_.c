/*
 * XREFs of ?GetPathsFromSourceSerialization@@YAPEAU_DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION@@QEBU_DMM_VIDPN_SERIALIZATION@@E@Z @ 0x140097ABC
 * Callers:
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x140384CA4 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     <none>
 */

struct _DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION *__fastcall GetPathsFromSourceSerialization(
        const struct _DMM_VIDPN_SERIALIZATION *const a1,
        unsigned __int8 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rax

  v2 = *(unsigned int *)a1;
  if ( (unsigned int)v2 < 8 )
    return 0LL;
  v3 = *((unsigned __int8 *)a1 + 4);
  if ( a2 >= (unsigned __int8)v3 || v2 < 4 * v3 + 8 )
    return 0LL;
  else
    return (const struct _DMM_VIDPN_SERIALIZATION *const)((char *)a1 + *((unsigned int *)a1 + a2 + 2));
}
