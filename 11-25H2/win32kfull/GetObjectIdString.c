/*
 * XREFs of GetObjectIdString @ 0x1402E1B20
 * Callers:
 *     GetWndScrollBarInfoCrossProcess @ 0x14021B954 (GetWndScrollBarInfoCrossProcess.c)
 *     xxxGetScrollBarInfo @ 0x14025E4F4 (xxxGetScrollBarInfo.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetObjectIdString(int a1)
{
  const char *result; // rax

  if ( a1 == -6 )
    return "OBJID_HSCROLL";
  if ( a1 == -5 )
    return "OBJID_VSCROLL";
  result = "OBJID_CLIENT";
  if ( a1 != -4 )
    return "UNKNOWN";
  return result;
}
