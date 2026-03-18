/*
 * XREFs of ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140076DCC
 * Callers:
 *     NtGdiSaveDC @ 0x140076BF0 (NtGdiSaveDC.c)
 *     GreSaveDC @ 0x140122524 (GreSaveDC.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077104 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007715C (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x140077198 (-bSavePath@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1400771BC (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?vInc_cRef@SURFACE@@QEAAXXZ @ 0x14007733C (-vInc_cRef@SURFACE@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0N@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B4420 (--$GreAcquireSemaphoreCommon@$0N@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x140114280 (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 *     ?W32PidDCOwner@XDCOBJ@@QEAAKXZ @ 0x14015941C (-W32PidDCOwner@XDCOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall GrepSaveDC(struct XDCOBJ *a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v5; // rdx
  int v6; // r14d
  int v7; // r15d
  struct XDCOBJ *v8; // r14
  __int64 v9; // r12
  int v10; // r13d
  unsigned int v11; // r14d
  SURFACE *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _QWORD v16[4]; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+50h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  if ( !a2 && !XDCOBJ::W32PidDCOwner(a1) )
  {
    EngSetLastError(6u);
    return v3;
  }
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v6 = *(_DWORD *)(v5 + 152);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush(*(_QWORD *)a1, *(_QWORD *)(v5 + 160));
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 168LL));
  v18 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( (*(_DWORD *)(v18 + 40) & 1) != 0 )
    GrepLockVisRgn((struct Gre::Base::SESSION_GLOBALS *)v2);
  v19 = *(_QWORD *)v2 + 312LL;
  GreAcquireSemaphoreCommon<13,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x800;
  if ( v7 )
    DC::bMakeInfoDC(*(DC **)a1, 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v16, a1);
  if ( v16[0] )
  {
    *(_DWORD *)(v16[0] + 36LL) |= 0x2000000u;
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v18, (struct Gre::Base::SESSION_GLOBALS *)v2);
    v8 = a1;
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
    *(_QWORD *)(*(_QWORD *)a1 + 112LL) = *(_QWORD *)v16[0];
    v10 = *(_DWORD *)(v16[0] + 104LL);
    if ( (unsigned int)bSavePath(a1, v10 + 1) )
    {
      v11 = *(_DWORD *)(v16[0] + 104LL);
      if ( (unsigned int)bSaveRegion(a1, v11 + 1) )
      {
        if ( GrepSetDCOwnerEx((struct Gre::Base::SESSION_GLOBALS *)v2, *(struct HOBJ__ **)v16[0], 0x80000012, 0, 0) )
        {
          v17 = 1;
          PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v18, (struct Gre::Base::SESSION_GLOBALS *)v2);
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 )
            *(_DWORD *)(v16[0] + 36LL) |= 0x4000u;
          v12 = *(SURFACE **)(v16[0] + 496LL);
          if ( v12 )
          {
            v13 = *((_DWORD *)v12 + 28);
            if ( (v13 & 0x800) != 0 )
            {
              INC_SHARE_REF_CNT(v2, *(_QWORD *)(v16[0] + 496LL));
            }
            else if ( v13 >= 0 )
            {
              SURFACE::vInc_cRef(v12);
            }
          }
          INC_SHARE_REF_CNT(v2, *(_QWORD *)(*(_QWORD *)a1 + 136LL));
          INC_SHARE_REF_CNT(v2, *(_QWORD *)(*(_QWORD *)a1 + 144LL));
          INC_SHARE_REF_CNT(v2, *(_QWORD *)(*(_QWORD *)a1 + 152LL));
          INC_SHARE_REF_CNT(v2, *(_QWORD *)(*(_QWORD *)a1 + 96LL));
          v14 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
          if ( v14 != *(_QWORD *)(v2 + 3872) )
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 56));
          v3 = *(_DWORD *)(*(_QWORD *)a1 + 104LL);
          *(_DWORD *)(*(_QWORD *)a1 + 104LL) = v3 + 1;
          goto LABEL_28;
        }
        vRestoreRegion(a1, v11);
      }
      v8 = a1;
      vRestorePath(a1, v10);
    }
    if ( v8 )
      *(_QWORD *)(*(_QWORD *)v8 + 112LL) = v9;
    goto LABEL_28;
  }
  EngSetLastError(8u);
LABEL_28:
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v16);
  if ( v7 )
    DC::bMakeInfoDC(*(DC **)a1, 1);
  if ( (*(_DWORD *)(v18 + 40) & 1) != 0 )
    GrepUnlockVisRgn((struct Gre::Base::SESSION_GLOBALS *)v2);
  SEMOBJ<13>::vUnlock((HSEMAPHORE *)&v19);
  return v3;
}
