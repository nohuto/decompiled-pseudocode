/*
 * XREFs of WMsg_midl_user_allocate @ 0x140186340
 * Callers:
 *     WmsgpPostMessage @ 0x1402D31A8 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WMsg_midl_user_allocate(__int64 a1)
{
  return ExAllocatePool2(258LL, a1, 1399025746LL);
}
