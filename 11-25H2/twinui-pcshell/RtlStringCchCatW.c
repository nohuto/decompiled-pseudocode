/*
 * XREFs of RtlStringCchCatW @ 0x180650F7C
 * Callers:
 *     AslpEnvResolveVars @ 0x18013D6D0 (AslpEnvResolveVars.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1801AC95C (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1801FA3B4 (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 3221225485LL;
  result = RtlStringLengthWorkerW(a1, a2, &v8);
  if ( (int)result >= 0 )
    return RtlStringCopyWorkerW(&a1[v8], v7 - v8, v6, a3);
  return result;
}
