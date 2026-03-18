/*
 * XREFs of NtDxgkOpenNativeFenceFromNtHandle @ 0x1401EC940
 * Callers:
 *     <none>
 * Callees:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E9FAC (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 */

__int64 __fastcall NtDxgkOpenNativeFenceFromNtHandle(struct _D3DKMT_OPENNATIVEFENCEFROMNTHANDLE *a1)
{
  return NtDxgkOpenNativeFenceFromNtHandleInternal(a1);
}
