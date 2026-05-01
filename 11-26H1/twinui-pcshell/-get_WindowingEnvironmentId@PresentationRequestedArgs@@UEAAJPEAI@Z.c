/*
 * XREFs of ?get_WindowingEnvironmentId@PresentationRequestedArgs@@UEAAJPEAI@Z @ 0x1802E9550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PresentationRequestedArgs::get_WindowingEnvironmentId(
        PresentationRequestedArgs *this,
        unsigned int *a2)
{
  if ( !*((_BYTE *)this + 76) )
    return 2147943568LL;
  *a2 = *((_DWORD *)this + 18);
  return 0LL;
}
