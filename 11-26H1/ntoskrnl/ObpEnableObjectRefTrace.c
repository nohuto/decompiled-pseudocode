/*
 * XREFs of ObpEnableObjectRefTrace @ 0x1407C7B14
 * Callers:
 *     NtSetInformationObject @ 0x1409BA9F0 (NtSetInformationObject.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 */

__int64 __fastcall ObpEnableObjectRefTrace(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx

  v4 = a1 - 48;
  if ( (ObpTraceFlags & 0xF3) == 0 )
    return 3221225473LL;
  if ( (*(_BYTE *)(v4 + 25) & 1) == 0 )
  {
    ObpRegisterObject(a1 - 48, 0, a3, a4);
    ObpPushStackInfo(v4, 1, 0x746C6644u);
  }
  return 0LL;
}
