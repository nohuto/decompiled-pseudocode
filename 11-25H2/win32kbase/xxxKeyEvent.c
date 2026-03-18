/*
 * XREFs of xxxKeyEvent @ 0x14019FCA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 */

void __fastcall xxxKeyEvent(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        unsigned __int16 *a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  xxxKeyEventEx(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, 0LL);
}
