/*
 * XREFs of VidMmResizeBuffersInPool @ 0x1400A4950
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     RemoveDmaBufferFromPool @ 0x1400EB6EC (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 */

__int64 __fastcall VidMmResizeBuffersInPool(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // ebp
  unsigned int i; // esi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v8 = -1073741811;
  if ( a2 < *(_DWORD *)(a1 + 48) || a3 < *(_DWORD *)(a1 + 60) || a4 < *(_DWORD *)(a1 + 72) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2739;
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
  }
  else
  {
    if ( a2 == *(_DWORD *)(a1 + 44) && a3 == *(_DWORD *)(a1 + 56) && a4 == *(_DWORD *)(a1 + 68) )
      return 0LL;
    for ( i = 0; i < 2; ++i )
    {
      v8 = AddDmaBufferToPool(a1, a2, a3, a4);
      if ( v8 < 0 )
      {
        if ( i )
        {
          v11 = i;
          do
          {
            RemoveDmaBufferFromPool(a1, *(_QWORD *)(a1 + 88));
            --v11;
          }
          while ( v11 );
        }
        return (unsigned int)v8;
      }
    }
    if ( v8 >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 96);
      *(_DWORD *)(a1 + 44) = a2;
      *(_DWORD *)(a1 + 56) = a3;
      *(_DWORD *)(a1 + 68) = a4;
      do
      {
        while ( 1 )
        {
          v13 = v12;
          v14 = v12;
          v12 = *(_QWORD *)(v12 + 8);
          if ( *(_DWORD *)(v13 + 36) == *(_DWORD *)(a1 + 44)
            && *(_DWORD *)(v13 + 40) == *(_DWORD *)(a1 + 56)
            && *(_DWORD *)(v13 + 44) == *(_DWORD *)(a1 + 68) )
          {
            break;
          }
          if ( *(_BYTE *)(v13 + 24) )
            *(_BYTE *)(v13 + 25) = 1;
          else
            RemoveDmaBufferFromPool(a1, v14);
        }
      }
      while ( *(_BYTE *)(v13 + 25) );
    }
  }
  return (unsigned int)v8;
}
