/*
 * XREFs of ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180070F50
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180070F00 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::FindStationaryAnimation(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r10d
  __int64 i; // r9
  __int64 v7; // rcx
  __int64 v8; // rax

  v3 = -1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 144); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(a1 + 120);
    if ( *(_DWORD *)(v7 + 24 * i) == a2 )
    {
      v8 = *(_QWORD *)(v7 + 24 * i + 16);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 376) == a3 )
          return (unsigned int)i;
      }
    }
  }
  return v3;
}
