/*
 * XREFs of ?InitializeCSAccounting@DXGGLOBAL@@QEAAX_K@Z @ 0x140419F28
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x140419E20 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall DXGGLOBAL::InitializeCSAccounting(DXGGLOBAL *this, __int64 a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGGLOBAL *)((char *)this + 2112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( a2 != *((_QWORD *)this + 270) )
  {
    if ( *((_DWORD *)this + 526) )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 203;
    }
    *((_QWORD *)this + 270) = a2;
    memset((char *)this + 2280, 0, 0x49C00uLL);
    *(_OWORD *)((char *)this + 304360) = 0LL;
    *((_QWORD *)this + 38047) = 0LL;
    *((_OWORD *)this + 19024) = 0LL;
    *((_QWORD *)this + 38050) = 0LL;
    *((_OWORD *)this + 19026) = 0LL;
    *((_QWORD *)this + 38054) = 0LL;
    memset((char *)this + 304440, 0, 0x180uLL);
    *((_BYTE *)this + 304408) = 1;
    *((_DWORD *)this + 526) = 1;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v4);
}
