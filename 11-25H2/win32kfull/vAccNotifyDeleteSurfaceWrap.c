/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x14016A050
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1401CC3AC (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x1402FDBCC (-bIsDefault@SURFACE@@QEBA_NXZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1402FDBF8 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(SURFACE *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // ecx
  _BYTE v6[152]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v7; // [rsp+C8h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  if ( *(_QWORD *)(v3 + 8) || *(_QWORD *)(v3 + 4728) )
  {
    v4 = *((_QWORD *)this + 6);
    v7 = v4;
    if ( v4 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v6, (struct PDEVOBJ *)&v7);
      v5 = *(_DWORD *)(v4 + 40);
      if ( (v5 & 0x20000000) == 0 && !_bittest((const signed __int32 *)(v4 + 2112), 0xFu)
        || (v5 & 0x20000) == 0
        && _bittest((const signed __int32 *)(v4 + 2112), 0xFu)
        && (*((_DWORD *)this + 28) & 0x400000) != 0
        && *((_QWORD *)this + 3) )
      {
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v6);
        return;
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v6);
    }
    else if ( SURFACE::bIsDefault(this)
           || (unsigned int)SURFACE::bStockSurface(this)
           || (*((_DWORD *)this + 28) & 0x4040000) != 0x4000000 )
    {
      return;
    }
    vAccNotify((struct _SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)), 8u, 0LL);
  }
}
