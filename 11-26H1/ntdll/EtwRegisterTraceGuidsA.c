/*
 * XREFs of EtwRegisterTraceGuidsA @ 0x18005AD40
 * Callers:
 *     <none>
 * Callees:
 *     EtwRegisterTraceGuidsW @ 0x180058E60 (EtwRegisterTraceGuidsW.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsA(
        _SLIST_ENTRY *a1,
        int a2,
        struct _SLIST_ENTRY *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  return EtwRegisterTraceGuidsW(a1, a2, a3, a4, a5, 0, 0, a8);
}
