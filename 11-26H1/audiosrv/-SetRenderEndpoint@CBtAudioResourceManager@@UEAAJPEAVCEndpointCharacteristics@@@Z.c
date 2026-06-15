/*
 * XREFs of ?SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800DF7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ @ 0x1800DF0E0 (-CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ.c)
 *     ?FindAudioControllerInterface@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800DF218 (-FindAudioControllerInterface@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@@Z.c)
 */

int __fastcall CBtAudioResourceManager::SetRenderEndpoint(
        CBtAudioResourceManager *this,
        struct CEndpointCharacteristics *a2)
{
  if ( (int)CBtAudioResourceManager::FindAudioControllerInterface((void **)this - 1, a2) >= 0
    && (int)CBtAudioResourceManager::CheckBtAudioStreamContextSupported((LPCWSTR *)this - 1) >= 0 )
  {
    *((_DWORD *)this + 127) = 1;
  }
  return CBtAudioResourceManagerBase::SetRenderEndpoint(this, a2);
}
