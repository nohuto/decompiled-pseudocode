/*
 * XREFs of ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180178B70
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceManager::HardwareProtectionRequired(CDeviceManager *this, struct _LUID a2)
{
  unsigned __int8 v2; // di
  DWORD LowPart; // ebx
  __int64 i; // rcx
  __int64 v5; // rdx
  LONG HighPart; // [rsp+3Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v2 = 0;
  LowPart = a2.LowPart;
  EnterCriticalSection(&CriticalSection);
  for ( i = qword_1803DE688; i != (_QWORD)xmmword_1803DE690; i += 16LL )
  {
    v5 = *(_QWORD *)i;
    if ( __PAIR64__(HighPart, LowPart) == *(_QWORD *)(*(_QWORD *)i + 944LL) )
    {
      if ( !byte_1803DE6A0 && !*(_BYTE *)(v5 + 444) && *(_DWORD *)(v5 + 440) )
        v2 = 1;
      break;
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v2;
}
