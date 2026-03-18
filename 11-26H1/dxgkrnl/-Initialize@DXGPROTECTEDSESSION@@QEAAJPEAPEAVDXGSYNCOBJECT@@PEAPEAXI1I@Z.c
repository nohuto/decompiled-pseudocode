/*
 * XREFs of ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1401F99DC
 * Callers:
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401F94C4 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetInitialFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x14006CC6C (-GetInitialFenceValue@DXGSYNCOBJECT@@QEBA_KXZ.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x14007F750 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z @ 0x1401ACC0C (-DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Initialize(
        DXGPROTECTEDSESSION *this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        UINT a4,
        void **a5,
        unsigned int a6)
{
  void *v10; // rax
  ADAPTER_DISPLAY *v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  _DXGKARG_CREATEPROTECTEDSESSION v15; // [rsp+50h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 996;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      996LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 37) = 0;
  *((_QWORD *)this + 16) = DXGSYNCOBJECT::GetInitialFenceValue(*a2);
  *((_QWORD *)this + 15) = *a2;
  *((_QWORD *)this + 11) = *a3;
  *((_DWORD *)this + 24) = a4;
  *((_QWORD *)this + 13) = *a5;
  *((_DWORD *)this + 28) = a6;
  *a2 = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  DXGPROTECTEDSESSION::AddReference(this, 1);
  v10 = (void *)*((_QWORD *)this + 11);
  v11 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 2);
  v15.PrivateDriverDataSize = a4;
  *(&v15.PrivateDriverDataSize + 1) = 0;
  v15.hProtectedSession = this;
  v15.pPrivateDriverData = v10;
  v12 = *((_QWORD *)v11 + 2);
  if ( *(_QWORD *)(v12 + 1240) && *(_QWORD *)(v12 + 1248) )
  {
    v13 = ADAPTER_DISPLAY::DdiCreateProtectedSession(v11, &v15);
    if ( v13 >= 0 )
    {
      *((_QWORD *)this + 19) = v15.hProtectedSession;
      return (unsigned int)v13;
    }
  }
  else
  {
    v13 = -1073741637;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1047;
  }
  *((_DWORD *)this + 6) = 3;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 20, 0xFFFFFFFF) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1064;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"c == 0", 1064LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v13;
}
