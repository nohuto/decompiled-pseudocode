/*
 * XREFs of ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x14034A168
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1401A1378 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     DxgkInvalidateQdcCacheOnlyDatabase @ 0x14034A144 (DxgkInvalidateQdcCacheOnlyDatabase.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

void __fastcall QDC_CACHE::InvalidateCache(QDC_CACHE *this, __int64 a2)
{
  char v2; // di
  char *v4; // rcx
  __int64 v5; // rdx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( *(_BYTE *)this )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    WdLogGlobalForLineNumber = 188;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (QDC_CACHE *)((char *)this + 8), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    v4 = (char *)this + 56;
    v5 = 18LL;
    do
    {
      if ( !v2 || (*((_DWORD *)v4 + 1) & 4) != 0 )
        *v4 = 0;
      v4 += 32;
      --v5;
    }
    while ( v5 );
    ++*((_DWORD *)this + 158);
    WdLogNewEntry5_WdTrace(v4, 0LL);
    WdLogGlobalForLineNumber = 214;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  }
}
