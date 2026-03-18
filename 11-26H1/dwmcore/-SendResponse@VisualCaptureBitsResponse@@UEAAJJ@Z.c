/*
 * XREFs of ?SendResponse@VisualCaptureBitsResponse@@UEAAJJ@Z @ 0x1801CDE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VisualCaptureBitsResponse::SendResponse(HANDLE *this)
{
  if ( !*((_BYTE *)this + 1552) )
  {
    SetEvent(this[193]);
    *((_BYTE *)this + 1552) = 1;
  }
  *((_BYTE *)this + 33) = 1;
  return 0LL;
}
