/*
 * XREFs of SdbpCheckDll @ 0x140C7B440
 * Callers:
 *     KiSwInterruptDispatch @ 0x140540C30 (KiSwInterruptDispatch.c)
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C62010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C79A90 @ 0x140C79A90 (sub_140C79A90.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
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
