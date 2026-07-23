/*
 * XREFs of SdbpCheckDll @ 0x140C81440
 * Callers:
 *     KiSwInterruptDispatch @ 0x1405430B0 (KiSwInterruptDispatch.c)
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C7FA90 @ 0x140C7FA90 (sub_140C7FA90.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckDll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  return a6(a1);
}
