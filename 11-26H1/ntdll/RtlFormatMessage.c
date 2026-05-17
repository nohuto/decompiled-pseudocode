/*
 * XREFs of RtlFormatMessage @ 0x180147500
 * Callers:
 *     <none>
 * Callees:
 *     RtlFormatMessageEx @ 0x1800BBE30 (RtlFormatMessageEx.c)
 */

__int64 __fastcall RtlFormatMessage(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        wchar_t *a7,
        unsigned int a8,
        _DWORD *a9)
{
  return RtlFormatMessageEx(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL);
}
