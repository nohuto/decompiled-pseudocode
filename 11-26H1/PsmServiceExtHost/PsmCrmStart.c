/*
 * XREFs of PsmCrmStart @ 0x180074520
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsInitialize @ 0x180075428 (CrmGlobalsInitialize.c)
 *     CrmGlobalsStart @ 0x1800755E8 (CrmGlobalsStart.c)
 */

__int64 PsmCrmStart()
{
  int v0; // ecx
  __int64 result; // rax

  CrmGlobalsInitialize();
  v0 = CrmGlobalsStart();
  result = 0LL;
  if ( v0 < 0 )
    return (unsigned int)v0;
  return result;
}
