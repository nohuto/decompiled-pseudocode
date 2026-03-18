/*
 * XREFs of ?Initialize@DXGKEYEDMUTEX@@QEAAJI@Z @ 0x1403DBEE0
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403DBCBC (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x140052F90 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this, int a2)
{
  int v3; // eax
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( a2 )
  {
    *((_DWORD *)this + 8) = a2;
    *((_BYTE *)this + 176) = 1;
    return 0LL;
  }
  if ( (*((_DWORD *)this + 43) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v7);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v3 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9u);
  *((_DWORD *)this + 8) = v3;
  if ( v3 )
  {
    Current = DXGPROCESS::GetCurrent(v4);
    WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 8), Current);
    WdLogGlobalForLineNumber = 4279;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
    return 0LL;
  }
  WdLogSingleEntry2(6LL, this, -1073741801LL);
  WdLogGlobalForLineNumber = 4269;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"KeyedMutex 0x%I64x: Unable to create keyed mutex handle, returning 0x%I64x",
    (__int64)this,
    -1073741801LL,
    0LL,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
  return 3221225495LL;
}
