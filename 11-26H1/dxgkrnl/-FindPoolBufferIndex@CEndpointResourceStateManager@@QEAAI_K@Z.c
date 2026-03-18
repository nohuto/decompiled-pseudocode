/*
 * XREFs of ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x14004D684
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x14001C354 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointResourceStateManager::FindPoolBufferIndex(CEndpointResourceStateManager **this, __int64 a2)
{
  CEndpointResourceStateManager *v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *this;
  v3 = 0;
  while ( v2 != (CEndpointResourceStateManager *)this )
  {
    v4 = (__int64)v2 + 24;
    if ( !v2 )
      v4 = 32LL;
    if ( (*(_BYTE *)v4 & 2) == 0 )
    {
      v5 = (__int64)v2 + 16;
      if ( !v2 )
        v5 = 24LL;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 40LL) == a2 )
        return v3;
      ++v3;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  return 0LL;
}
