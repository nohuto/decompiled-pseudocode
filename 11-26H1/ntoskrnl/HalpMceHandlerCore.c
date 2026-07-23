/*
 * XREFs of HalpMceHandlerCore @ 0x14057D890
 * Callers:
 *     HalpMceHandler @ 0x14057D774 (HalpMceHandler.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 *     HalpMcaReadErrorPresence @ 0x14044B924 (HalpMcaReadErrorPresence.c)
 *     HalpGetMcaPcrContext @ 0x14044BB84 (HalpGetMcaPcrContext.c)
 *     HalpMcaReadError @ 0x14044BC70 (HalpMcaReadError.c)
 *     HalpMcaClearError @ 0x14044BFF4 (HalpMcaClearError.c)
 *     HalpMcaReportError @ 0x14044C030 (HalpMcaReportError.c)
 *     WheaIsAltContextAllocPossible @ 0x1406D9E90 (WheaIsAltContextAllocPossible.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpMceHandlerCore(__int64 a1, char a2, unsigned __int64 a3)
{
  _BYTE *v6; // r15
  char v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 v14; // rsi
  __int64 *McaPcrContext; // rax
  void *v16; // rbp
  __int64 v17; // rdx
  int v19; // [rsp+68h] [rbp+10h] BYREF
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0;
  v20 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = guard_dispatch_icall_no_overrides(a3, 378LL);
  if ( !a2 || (v10 = v8, LOBYTE(v10) = v8 & 3, (v8 & 3) != 1) && (v8 & 4) != 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    if ( !HalpMcaWheaReady
      || (McaPcrContext = (__int64 *)HalpGetMcaPcrContext(a3, v9), (v13 = McaPcrContext) == 0LL)
      || (v14 = *McaPcrContext, v6 = (_BYTE *)McaPcrContext[4], v16 = (void *)(*McaPcrContext + 80), !*McaPcrContext) )
    {
      v16 = &HalpMceBackupErrorBuffer;
    }
    while ( (int)HalpMcaReadErrorPresence(v10, a3, v11, v12) >= 0 )
    {
      while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLock) )
        _mm_pause();
      if ( (int)HalpMcaReadError(16, v16, &v19, a1, a3) < 0 )
      {
        KxReleaseSpinLock(&HalpMceLock);
        return v7;
      }
      if ( v14 )
      {
        *(_DWORD *)(v14 + 20) = v19;
        *(_DWORD *)(v14 + 12) = 0;
      }
      if ( a1 )
      {
        if ( v6 )
        {
          if ( v13 )
          {
            LOBYTE(v17) = *v6 & 0x10;
            *((_DWORD *)v13 + 10) = 0;
            if ( !(unsigned __int8)WheaIsAltContextAllocPossible(a1, v17, &v20) )
              *((_DWORD *)v13 + 10) = v20;
          }
        }
      }
      HalpProcessorInMceHandler = KeGetPcr()->Prcb.Number;
      HalpMcaReportError(v14, (__int64)v16, a3);
      if ( v13 )
        *((_DWORD *)v13 + 10) = 0;
      HalpProcessorInMceHandler = 2048;
      HalpMcaClearError((__int64)v16, a3);
      if ( McaWmiCallback )
        LOBYTE(HalpClockWorkUnion) = 1;
      KxReleaseSpinLock(&HalpMceLock);
      v7 = 1;
    }
  }
  return v7;
}
