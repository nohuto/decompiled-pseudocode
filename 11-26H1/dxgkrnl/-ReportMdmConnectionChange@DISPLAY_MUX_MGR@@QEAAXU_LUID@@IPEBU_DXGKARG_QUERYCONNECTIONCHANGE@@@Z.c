/*
 * XREFs of ?ReportMdmConnectionChange@DISPLAY_MUX_MGR@@QEAAXU_LUID@@IPEBU_DXGKARG_QUERYCONNECTIONCHANGE@@@Z @ 0x14008ED60
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x14008CDC4 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 */

void __fastcall DISPLAY_MUX_MGR::ReportMdmConnectionChange(
        DISPLAY_MUX_MGR *this,
        struct _LUID a2,
        unsigned int a3,
        const struct _DXGKARG_QUERYCONNECTIONCHANGE *a4)
{
  __int64 v5; // rbp
  bool v8; // si
  int v9; // eax
  _BYTE v10[56]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 v11; // [rsp+70h] [rbp+8h] BYREF
  struct _LUID v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v5 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DISPLAY_MUX_MGR *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v8 = 0;
  if ( __PAIR64__(v12.HighPart, a2.LowPart) == *((_QWORD *)this + 17) )
    v8 = (_DWORD)v5 == *((_DWORD *)this + 36);
  if ( (a4->ConnectionChange.TargetConnect.NewTargetId & 2) != 0 )
  {
    if ( !v8 && !byte_1401694F1 )
    {
      WdLogSingleEntry4(2LL, a2.LowPart, v5, *((unsigned int *)this + 34), *((unsigned int *)this + 36));
      WdLogGlobalForLineNumber = 3336;
      WdLogSingleEntry5(0LL, 484LL, 52LL, 9LL, HIBYTE(*((_DWORD *)&a4->ConnectionChange + 2)) & 0xF, 0LL);
      WdLogGlobalForLineNumber = 3341;
    }
    *(struct _LUID *)((char *)this + 116) = a2;
    *((_DWORD *)this + 31) = v5;
    v9 = *((_DWORD *)&a4->ConnectionChange + 2) & 0xF000000;
    if ( v9 == 167772160 )
    {
      ++*((_DWORD *)this + 32);
    }
    else if ( v9 == 0x8000000 )
    {
      ++*((_DWORD *)this + 33);
    }
    else
    {
      WdLogSingleEntry1(1LL);
      WdLogGlobalForLineNumber = 3360;
    }
  }
  else
  {
    LOBYTE(v12.LowPart) = 0;
    DISPLAY_MUX_MGR::IsTargetPartOfMux(this, a2, v5, &v11, (unsigned __int8 *)&v12);
    if ( v8 )
    {
      if ( !byte_1401694F1 )
      {
        WdLogSingleEntry5(0LL, 484LL, 52LL, 10LL, a2.LowPart, v5);
        WdLogGlobalForLineNumber = 3379;
      }
    }
    else if ( LOBYTE(v12.LowPart)
           && (*((_DWORD *)&a4->ConnectionChange + 2) & 0xF000000) != 0x8000000
           && !byte_1401694F1 )
    {
      WdLogSingleEntry5(0LL, 484LL, 52LL, 8LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 3393;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
}
