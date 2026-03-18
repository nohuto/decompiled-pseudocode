/*
 * XREFs of ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403DBCBC
 * Callers:
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1402204F0 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403DBBA8 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004D2D8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x14005F9C8 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJI@Z @ 0x1403DBEE0 (-Initialize@DXGKEYEDMUTEX@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a3,
        unsigned int a4,
        struct DXGKEYEDMUTEX **a5)
{
  __int64 v9; // rax
  DXGKEYEDMUTEX *v10; // rdi
  DXGKEYEDMUTEX *v11; // rcx
  _QWORD *v12; // rax
  int v13; // ebx
  DXGKEYEDMUTEX **v14; // rax
  __int64 v15; // rcx

  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5070;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppKeyedMutex != NULL", 5070LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a5 = 0LL;
  v9 = operator new(0xB8uLL, 0x4B677844u, 64LL);
  v10 = (DXGKEYEDMUTEX *)v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 16) = this;
    *(_OWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_DWORD *)(v9 + 32) = 0;
    v11 = (DXGKEYEDMUTEX *)v9;
    *(_QWORD *)(v9 + 56) = 1LL;
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_QWORD *)(v9 + 72) = a2;
    *(_QWORD *)(v9 + 80) = a2;
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_QWORD *)(v9 + 120) = 0LL;
    *(_QWORD *)(v9 + 128) = 0LL;
    *(_QWORD *)(v9 + 136) = 0LL;
    *(_DWORD *)(v9 + 144) = 0;
    *(_DWORD *)(v9 + 148) = 34;
    *(_DWORD *)(v9 + 152) = 76;
    *(_QWORD *)(v9 + 160) = 0LL;
    *(_DWORD *)(v9 + 168) = 0;
    *(struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS *)(v9 + 172) = a3;
    *(_BYTE *)(v9 + 176) = 0;
    v12 = (_QWORD *)(v9 + 96);
    v12[1] = v12;
    *v12 = v12;
    *((_QWORD *)v10 + 6) = (char *)v10 + 40;
    *((_QWORD *)v10 + 5) = (char *)v10 + 40;
    v13 = DXGKEYEDMUTEX::Initialize(v11, a4);
    if ( v13 < 0 )
    {
      DXGKEYEDMUTEX::`scalar deleting destructor'(v10);
    }
    else
    {
      DXGKEYEDMUTEX::AcquireReference(v10);
      DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 616));
      v14 = (DXGKEYEDMUTEX **)((char *)this + 664);
      v15 = *((_QWORD *)this + 83);
      if ( *(DXGGLOBAL **)(v15 + 8) != (DXGGLOBAL *)((char *)this + 664) )
        __fastfail(3u);
      *(_QWORD *)v10 = v15;
      *((_QWORD *)v10 + 1) = v14;
      *(_QWORD *)(v15 + 8) = v10;
      *v14 = v10;
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 77);
      *a5 = v10;
    }
  }
  else
  {
    v13 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 5085;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGKEYEDMUTEX class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v13;
}
