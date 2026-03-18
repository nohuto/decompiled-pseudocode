/*
 * XREFs of RtlInitMinimalBarrier @ 0x140C7B89C
 * Callers:
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C62010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitMinimalBarrier(_DWORD *a1, int a2)
{
  __int64 result; // rax

  a1[1] = a2;
  result = 0LL;
  *a1 = a2;
  return result;
}
