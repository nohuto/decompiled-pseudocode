/*
 * XREFs of ??1?$AutoPtrAriHeap@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@QEAA@XZ @ 0x18019356C
 * Callers:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1806539C8 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ARI::AutoPtrAriHeap<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>::~AutoPtrAriHeap<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(
        PVOID *a1)
{
  BOOLEAN result; // al

  if ( *a1 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a1);
  return result;
}
