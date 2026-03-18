/*
 * XREFs of NtDxgkCreateNativeFence @ 0x140200CB0
 * Callers:
 *     <none>
 * Callees:
 *     NtDxgkCreateNativeFenceInternal @ 0x140200CD8 (NtDxgkCreateNativeFenceInternal.c)
 */

__int64 __fastcall NtDxgkCreateNativeFence(void *a1)
{
  return NtDxgkCreateNativeFenceInternal(a1);
}
