/*
 * XREFs of ?GetSyncLockGroupId@CDDisplayRenderTarget@@UEBAIXZ @ 0x1801B36D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetSyncLockGroupId(CDDisplayRenderTarget *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 4045);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
