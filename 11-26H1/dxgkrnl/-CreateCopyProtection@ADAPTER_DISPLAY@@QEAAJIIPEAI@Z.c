/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1401A23B0
 * Callers:
 *     DxgkHandleVideoParameters @ 0x140235530 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x140045F64 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x140070094 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x140070128 (-AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402DD6F0 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  struct DXGPROCESS *Current; // r14
  NTSTATUS v9; // eax
  const wchar_t *v10; // r9
  int v11; // edx
  unsigned int Data1; // ebp
  char *v13; // rsi
  char v14; // dl
  DXGADAPTER *i; // rcx
  DXGADAPTER *v16; // rax
  DXGADAPTER *v17; // rax
  __int64 v18; // rax
  struct DXGCOPYPROTECTION *v19; // rbx
  __int64 v20; // rax
  int v21; // esi
  struct DXGCOPYPROTECTION *v22; // rdx
  struct DXGCOPYPROTECTION **v23; // rcx
  _BYTE v25[16]; // [rsp+50h] [rbp-68h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp-58h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-50h] BYREF

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5593;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 5593LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5594;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProtectionKey != NULL", 5594LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5597;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 5597LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGFASTMUTEX::IsOwner((struct DXGPROCESS *)((char *)Current + 360)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5598;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pProcess->IsCopyProtectionMutexOwner()",
      5598LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  _InterlockedAdd64((volatile signed __int64 *)this[2] + 3, 1uLL);
  Uuid = 0LL;
  while ( 1 )
  {
    v9 = ExUuidCreate(&Uuid);
    if ( v9 >= 0 )
      break;
    if ( v9 != -1073741267 )
    {
      WdLogSingleEntry1(2LL);
      v10 = L"ExUuidCreate failed, returning 0x%I64x";
      WdLogGlobalForLineNumber = 5636;
      v11 = 0x40000;
      goto LABEL_35;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v13 = (char *)(this + 10);
  do
  {
    v14 = 1;
    for ( i = this[10]; ; i = *(DXGADAPTER **)i )
    {
      v16 = 0LL;
      if ( i != (DXGADAPTER *)v13 )
        v16 = i;
      if ( !v16 )
        break;
      v17 = i;
      if ( i == (DXGADAPTER *)v13 )
        v17 = 0LL;
      if ( *((_DWORD *)v17 + 12) == Data1 )
      {
        v14 = 0;
        ++Data1;
      }
    }
  }
  while ( !v14 );
  v18 = operator new(0x40uLL, 0x4B677844u, 256LL);
  v19 = (struct DXGCOPYPROTECTION *)v18;
  if ( v18 )
  {
    *(_QWORD *)(v18 + 16) = this;
    *(_OWORD *)v18 = 0LL;
    *(_QWORD *)(v18 + 40) = Current;
    *(_OWORD *)(v18 + 24) = 0LL;
    *(_DWORD *)(v18 + 48) = Data1;
    *(_DWORD *)(v18 + 52) = a2;
    *(_DWORD *)(v18 + 56) = a3;
    v20 = *(_QWORD *)v13;
    if ( *(char **)(*(_QWORD *)v13 + 8LL) == v13 )
    {
      *(_QWORD *)v19 = v20;
      *((_QWORD *)v19 + 1) = v13;
      *(_QWORD *)(v20 + 8) = v19;
      *(_QWORD *)v13 = v19;
      v21 = ADAPTER_DISPLAY::SetCopyProtection((ADAPTER_DISPLAY *)this, a2);
      if ( v21 >= 0 )
      {
        DXGPROCESS::AddCopyProtection(Current, v19);
        *a4 = Data1;
        goto LABEL_31;
      }
      v22 = *(struct DXGCOPYPROTECTION **)v19;
      if ( *(struct DXGCOPYPROTECTION **)(*(_QWORD *)v19 + 8LL) == v19 )
      {
        v23 = (struct DXGCOPYPROTECTION **)*((_QWORD *)v19 + 1);
        if ( *v23 == v19 )
        {
          *v23 = v22;
          *((_QWORD *)v22 + 1) = v23;
          DXGCOPYPROTECTION::`scalar deleting destructor'(v19);
          DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_31:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
          return (unsigned int)v21;
        }
      }
    }
    __fastfail(3u);
  }
  WdLogSingleEntry1(6LL);
  v10 = L"Out of memory allocating DXGCOPYPROTECTION class, returning 0x%I64x";
  WdLogGlobalForLineNumber = 5680;
  v11 = 262145;
LABEL_35:
  DxgkLogInternalTriageEvent(0LL, v11, -1, (__int64)v10, -1073741801LL, 0LL, 0LL, 0LL, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
  return 3221225495LL;
}
