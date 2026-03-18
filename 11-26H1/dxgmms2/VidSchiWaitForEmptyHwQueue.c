/*
 * XREFs of VidSchiWaitForEmptyHwQueue @ 0x14012733C
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x14003C870 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForEmptyHwQueue(__int64 a1)
{
  __int64 i; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rsi
  __int64 result; // rax
  _DWORD v6[40]; // [rsp+40h] [rbp-A8h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 88); i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 **)(a1 + 696);
    if ( (unsigned int)i < *(_DWORD *)(a1 + 768) )
      v3 += i;
    v4 = *v3;
    memset(v6, 0, sizeof(v6));
    v6[8] |= 0x40u;
    v6[5] = 1;
    v6[12] = i;
    *(_QWORD *)(v4 + 280) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 240));
    while ( 1 )
    {
      result = *(unsigned int *)(v4 + 3016);
      if ( !(_DWORD)result )
        break;
      VidSchiProfilePerformanceTick(16LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent(a1, (__int64)v6, 0xFFFFFFFFLL);
      VidSchiProfilePerformanceTick(17LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
