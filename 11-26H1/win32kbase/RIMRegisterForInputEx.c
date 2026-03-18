/*
 * XREFs of RIMRegisterForInputEx @ 0x140191BF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 */

__int64 __fastcall RIMRegisterForInputEx(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        HANDLE *a7)
{
  return RIMRegisterForInputWithCallbacks(
           a1,
           0LL,
           0,
           0LL,
           (__int64)gpWin32kDriverObject,
           a2,
           a3,
           a4,
           a5,
           a6,
           0LL,
           0,
           a7);
}
