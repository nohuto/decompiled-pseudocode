/*
 * XREFs of ?GetVBlankDuration@CRemoteRenderTarget@@UEBA_KXZ @ 0x180248A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::GetVBlankDuration(CRemoteRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1);
  else
    return 0LL;
}
