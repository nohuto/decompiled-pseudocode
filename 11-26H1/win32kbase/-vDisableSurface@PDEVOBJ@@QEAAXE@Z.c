/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140
 * Callers:
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEBAHXZ @ 0x14017F310 (-bAllowDDICall@PDEVOBJ@@QEBAHXZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140181878 (-bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z.c)
 *     vDisableSynchronize @ 0x140185E78 (vDisableSynchronize.c)
 *     IsvDisableSynchronizeSupported @ 0x140187324 (IsvDisableSynchronizeSupported.c)
 *     ?vUnreference@SURFREF@@QEAAXXZ @ 0x14018C740 (-vUnreference@SURFREF@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x140195780 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall PDEVOBJ::vDisableSurface(PDEVOBJ *this, char a2)
{
  __int64 v2; // rbx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  void (__fastcall *v8)(__int64); // rax
  struct SURFACE *v9; // rdx
  __int64 v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rsi
  void (__fastcall *v12)(_QWORD); // rax
  __int64 *v13[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = *(_QWORD *)this;
  v2 = v14;
  if ( (*(_DWORD *)(v14 + 40) & 0x80000) == 0 && (int)IsvDisableSynchronizeSupported((__int64)this) >= 0 )
    vDisableSynchronize(*(_QWORD *)this);
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 24) + 1776LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(_QWORD *)this;
      v8 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24) + 1784LL);
      if ( v8 )
        v8(v7);
    }
  }
  v9 = *(struct SURFACE **)(*(_QWORD *)this + 2544LL);
  if ( v9 && a2 )
  {
    SURFREF::SURFREF((SURFREF *)v13, v9);
    v11 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v10) + 88);
    HmgDecrementShareReferenceCount((__int64)v11, *(unsigned int **)(*(_QWORD *)this + 2544LL));
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = 0LL;
    if ( (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v14) )
    {
      SURFREF::vUnreference((unsigned int **)v13);
      v12 = *(void (__fastcall **)(_QWORD))(v2 + 2712);
      if ( v12 )
        v12(*(_QWORD *)(*(_QWORD *)this + 1784LL));
    }
    else
    {
      SURFREF::bDeleteSurface(v13, v11, 0);
    }
    SURFREF::~SURFREF((unsigned int **)v13);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = 0LL;
  }
}
