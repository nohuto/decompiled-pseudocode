/*
 * XREFs of EditionCreateWindowStationEntryPoint @ 0x140293CC0
 * Callers:
 *     <none>
 * Callees:
 *     EditionCreateWindowStationEntryPointEx @ 0x140293D10 (EditionCreateWindowStationEntryPointEx.c)
 */

__int64 __fastcall EditionCreateWindowStationEntryPoint(
        struct _OBJECT_ATTRIBUTES *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        void *Src,
        __int64 a7,
        int a8)
{
  return EditionCreateWindowStationEntryPointEx(a1, a5, Src, a7, a8, 0);
}
