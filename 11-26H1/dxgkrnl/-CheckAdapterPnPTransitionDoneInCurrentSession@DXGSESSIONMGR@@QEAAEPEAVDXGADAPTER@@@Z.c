/*
 * XREFs of ?CheckAdapterPnPTransitionDoneInCurrentSession@DXGSESSIONMGR@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1404403F0
 * Callers:
 *     DxgkCheckAdapterPnPTransitionDoneInSession @ 0x1404404D4 (DxgkCheckAdapterPnPTransitionDoneInSession.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

char __fastcall DXGSESSIONMGR::CheckAdapterPnPTransitionDoneInCurrentSession(
        DXGSESSIONMGR *this,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int CurrentProcessSessionId; // ebx
  __int64 v7; // rdx
  char v8; // bl
  unsigned int v9; // ecx
  __int64 v10; // r8
  unsigned int v11; // r9d
  __int64 v12; // rdx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v7 = CurrentProcessSessionId;
  if ( CurrentProcessSessionId < *((_DWORD *)this + 20) && (v8 = 0, *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7)) )
  {
    _mm_lfence();
    v9 = 0;
    v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7);
    v11 = *(_DWORD *)(v10 + 18776);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(32LL * v9 + *(_QWORD *)(v10 + 18784) + 8);
        if ( v12 )
        {
          if ( *(_QWORD *)(v12 + 48) == *((_QWORD *)a2 + 31) )
            break;
        }
        if ( ++v9 >= v11 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v8 = 1;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
    return v8;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6026;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
    return 1;
  }
}
