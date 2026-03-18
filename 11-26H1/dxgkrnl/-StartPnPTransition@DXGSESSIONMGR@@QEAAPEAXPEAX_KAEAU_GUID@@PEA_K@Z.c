/*
 * XREFs of ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_KAEAU_GUID@@PEA_K@Z @ 0x140204300
 * Callers:
 *     DxgkStartPnPTransition @ 0x14020531C (DxgkStartPnPTransition.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x140204500 (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

char *__fastcall DXGSESSIONMGR::StartPnPTransition(
        DXGSESSIONMGR *this,
        char *a2,
        __int64 a3,
        struct _GUID *a4,
        unsigned __int64 *a5)
{
  char *v9; // rax
  __int64 v11; // rax
  DXGSESSIONMGR *v12; // rax
  DXGSESSIONMGR **v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdi
  DXGSESSIONDATA *v18; // rcx
  DXGSESSIONDATA *v19; // rcx
  _BYTE v20[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  if ( !a2 )
  {
    v9 = (char *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
    a2 = v9;
    if ( !v9 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 5704;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate a new PnP transition token.",
        5704LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
      return 0LL;
    }
    *(_QWORD *)v9 = 1349407855LL;
    *((_QWORD *)v9 + 5) = 0x300000000LL;
    v11 = qword_140168C58 + 1;
    *((_WORD *)a2 + 36) = 0;
    *((_QWORD *)a2 + 6) = v11;
    qword_140168C58 = v11;
    *((_QWORD *)a2 + 4) = a2 + 24;
    *((_QWORD *)a2 + 3) = a2 + 24;
    v12 = (DXGSESSIONMGR *)(a2 + 8);
    v13 = (DXGSESSIONMGR **)*((_QWORD *)this + 41);
    if ( *v13 != (DXGSESSIONMGR *)((char *)this + 320) )
      __fastfail(3u);
    *(_QWORD *)v12 = (char *)this + 320;
    *((_QWORD *)a2 + 2) = v13;
    *v13 = v12;
    *((_QWORD *)this + 41) = v12;
  }
  *(struct _GUID *)(a2 + 56) = *a4;
  if ( a3 != 0x300000000LL )
  {
    if ( a3 == 0x200000000LL )
    {
      v14 = *((_DWORD *)this + 36);
      a3 = 0x100000000LL;
      if ( v14 != -1 )
        a3 = v14;
    }
    v15 = *((_QWORD *)a2 + 5);
    if ( v15 == 0x300000000LL )
    {
      *((_QWORD *)a2 + 5) = a3;
    }
    else if ( v15 != a3 )
    {
      *((_QWORD *)a2 + 5) = 0x100000000LL;
    }
    v16 = *((_DWORD *)this + 20);
    if ( a3 == 0x100000000LL )
    {
      v17 = 0LL;
      if ( v16 )
      {
        do
        {
          v18 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * v17);
          if ( v18 )
            DXGSESSIONDATA::StartPnPTransitionOnSession(v18, (struct _PNP_TRANS_TOKEN *)a2);
          v17 = (unsigned int)(v17 + 1);
        }
        while ( (unsigned int)v17 < *((_DWORD *)this + 20) );
      }
    }
    else if ( (unsigned int)a3 < v16 )
    {
      v19 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)a3);
      if ( v19 )
        DXGSESSIONDATA::StartPnPTransitionOnSession(v19, (struct _PNP_TRANS_TOKEN *)a2);
    }
  }
  if ( a5 )
    *a5 = *((_QWORD *)a2 + 6);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  return a2;
}
