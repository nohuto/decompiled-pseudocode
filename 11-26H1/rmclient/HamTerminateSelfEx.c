/*
 * XREFs of HamTerminateSelfEx @ 0x180011350
 * Callers:
 *     HamTerminateSelf @ 0x180019BB0 (HamTerminateSelf.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateSelfEx(_QWORD *a1, int a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DF70, 0xAu, 0LL, *a1, a2);
}
