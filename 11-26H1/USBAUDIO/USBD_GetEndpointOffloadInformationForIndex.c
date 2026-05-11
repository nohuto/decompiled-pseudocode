/*
 * XREFs of USBD_GetEndpointOffloadInformationForIndex @ 0x14001A24C
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035C6C (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall USBD_GetEndpointOffloadInformationForIndex(__int64 a1, unsigned int a2)
{
  unsigned int *v3; // rcx
  unsigned int i; // edx
  __int64 v5; // rax

  if ( a2 >= *(_DWORD *)(a1 + 32) )
    return 0LL;
  v3 = *(unsigned int **)(a1 + 40);
  for ( i = 1; i <= a2; ++i )
  {
    v5 = *v3;
    if ( !(_DWORD)v5 )
      return 0LL;
    v3 = (unsigned int *)((char *)v3 + v5);
  }
  return v3;
}
