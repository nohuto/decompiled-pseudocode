/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x14002F1A0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x14002F2C0 (pProcessDfbSurfacesInternal.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140030BE0 (bDynamicProcessAllDriverRealizations.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     HmgQueryAltLock @ 0x140030250 (HmgQueryAltLock.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400392A4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

void __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ebp
  int v7; // r8d
  DC *v8; // rdi
  __int64 *v9; // rbx
  unsigned int *v10; // r14
  DC *v11; // [rsp+60h] [rbp+18h] BYREF
  HSEMAPHORE v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  v12 = (HSEMAPHORE)(*v3 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v4, v12);
  v6 = 0;
  v11 = 0LL;
  while ( 1 )
  {
    LOBYTE(v5) = 1;
    v6 = HmgSafeNextObjt(v6, v5, &v11);
    if ( !v6 )
      break;
    v8 = v11;
    if ( (*((_DWORD *)v11 + 9) & 0x2000000) == 0 || (*((_BYTE *)v11 + 14) & 0x40) == 0 || *((_DWORD *)v11 + 8) )
    {
      v9 = (__int64 *)*((_QWORD *)v11 + 62);
      if ( v9 )
      {
        if ( (v9[14] & 0x40000) == 0 )
        {
          v10 = (unsigned int *)v9[70];
          if ( v10 )
          {
            DC::pSurface(v11, (struct SURFACE *)v9[70]);
            *((_DWORD *)v8 + 79) |= 0xFu;
            HmgIncrementShareReferenceCount((__int64)v3, v10);
            if ( (unsigned int)HmgQueryAltLock(*v9) == 1 )
            {
              v9[70] = 0LL;
              SURFACE::bDeleteSurface(v9, (__int64)v3, 0, 0);
              if ( v9 == a2 )
                break;
            }
            else
            {
              HmgDecrementShareReferenceCount((__int64)v3, (unsigned int *)v9);
            }
          }
        }
      }
    }
  }
  SEMOBJ<20>::vUnlock(&v12, v5, v7);
}
