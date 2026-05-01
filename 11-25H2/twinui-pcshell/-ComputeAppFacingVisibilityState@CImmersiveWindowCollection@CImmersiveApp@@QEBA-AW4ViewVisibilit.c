/*
 * XREFs of ?ComputeAppFacingVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ViewVisibilityState@@XZ @ 0x18004236C
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180042250 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ComputeAppFacingVisibilityState(_BYTE *a1)
{
  _BYTE *v1; // rdx
  _BYTE *v2; // rax
  _BYTE *v3; // r8
  __int64 result; // rax

  v1 = a1 + 208;
  v2 = a1 + 208;
  v3 = a1 + 240;
  while ( 1 )
  {
    if ( v2 == v3 )
      return a1[192] != 0 ? 2 : 0;
    if ( *v2 )
      break;
    v2 += 8;
  }
  result = 2LL;
  while ( v1 != v3 )
  {
    if ( *v1 )
    {
      if ( !*((_DWORD *)v1 + 1) )
        return 0LL;
      if ( *((_DWORD *)v1 + 1) == 1 )
        result = 1LL;
    }
    v1 += 8;
  }
  return result;
}
