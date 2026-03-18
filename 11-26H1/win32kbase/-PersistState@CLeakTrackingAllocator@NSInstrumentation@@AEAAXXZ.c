/*
 * XREFs of ?PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ @ 0x14017CFFC
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x14019B958 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B3978 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?PlatformPersistConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEBIPEA_N_K@Z @ 0x14017D114 (-PlatformPersistConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEBIPEA_N_K@Z.c)
 *     ?GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z @ 0x1401B3A08 (-GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::PersistState(
        NSInstrumentation::CLeakTrackingAllocator *this)
{
  NSInstrumentation *v2; // rcx
  int v3; // edx
  unsigned int v4; // eax
  bool *v5; // [rsp+20h] [rbp-49h]
  unsigned __int64 v6; // [rsp+28h] [rbp-41h]
  unsigned __int16 v7[4]; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v8; // [rsp+38h] [rbp-31h]
  const wchar_t *v9; // [rsp+40h] [rbp-29h]
  const wchar_t *v10; // [rsp+48h] [rbp-21h]
  const wchar_t *v11; // [rsp+50h] [rbp-19h]
  const wchar_t *v12; // [rsp+58h] [rbp-11h]
  const wchar_t *v13; // [rsp+60h] [rbp-9h]
  const wchar_t *v14; // [rsp+68h] [rbp-1h]
  const wchar_t *v15; // [rsp+70h] [rbp+7h]
  const wchar_t *v16; // [rsp+78h] [rbp+Fh]
  unsigned __int16 *v17; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v18[4]; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v19; // [rsp+98h] [rbp+2Fh]
  unsigned int v20[4]; // [rsp+A8h] [rbp+3Fh] BYREF

  v2 = (NSInstrumentation *)*((_QWORD *)this + 15);
  v3 = 0;
  *(_QWORD *)v7 = L"LeakTrackingAllocatorMode";
  v8 = L"PoolLeakedState";
  v9 = L"LeakedPoolTag0";
  v10 = L"LeakedPoolTag1";
  v11 = L"LeakedPoolTag2";
  v12 = L"LeakedPoolTag3";
  v13 = L"LeakedPoolTag4";
  v14 = L"LeakedPoolTag5";
  v15 = L"LeakedPoolTag6";
  v16 = L"LeakedPoolTag7";
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  if ( *((NSInstrumentation **)this + 14) != v2
    || (v2 = (NSInstrumentation *)*((_QWORD *)this + 17), *((NSInstrumentation **)this + 16) != v2) )
  {
    v3 = 1;
  }
  v4 = *(_DWORD *)this;
  v17 = (unsigned __int16 *)__PAIR64__(v3, v4);
  if ( v4 && v4 - 1 <= 1 )
    NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(this, v18, 8uLL, (unsigned __int64 *)v20);
  NSInstrumentation::PlatformPersistConfig32(v2, v7, (const unsigned __int16 *const *const)&v17, v20, v5, v6);
}
