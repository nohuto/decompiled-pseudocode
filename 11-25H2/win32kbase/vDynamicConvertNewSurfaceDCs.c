/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x140071D90
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140071620 (bDynamicProcessAllDriverRealizations.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     HmgQueryAltLock @ 0x14006F190 (HmgQueryAltLock.c)
 *     HmgSafeNextObjt @ 0x1400726E0 (HmgSafeNextObjt.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14007553C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // esi
  DC *v5; // rdi
  __int64 v6; // rbx
  struct _BASEOBJECT *v7; // rbp
  DC *v8; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v9; // [rsp+58h] [rbp+20h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v9);
  v4 = 0;
  v8 = 0LL;
  while ( 1 )
  {
    LOBYTE(v3) = 1;
    v4 = HmgSafeNextObjt(v4, v3, &v8);
    if ( !v4 )
      break;
    v5 = v8;
    v6 = *((_QWORD *)v8 + 62);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 112) & 0x40000) == 0 )
      {
        v7 = *(struct _BASEOBJECT **)(v6 + 560);
        if ( v7 )
        {
          DC::pSurface(v8, *(struct SURFACE **)(v6 + 560));
          *((_DWORD *)v5 + 79) |= 0xFu;
          HmgIncrementShareReferenceCount(v7);
          if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)v6) == 1 )
          {
            *(_QWORD *)(v6 + 560) = 0LL;
            SURFACE::bDeleteSurface(v6, 0LL, 0LL);
            if ( v6 == a2 )
              break;
          }
          else
          {
            HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v6, 0LL);
          }
        }
      }
    }
  }
  SEMOBJ<20>::vUnlock(&v9);
}
