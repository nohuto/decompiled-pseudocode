/*
 * XREFs of ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x180053F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180070B68 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMeterSoftware::GetPeakValue(struct _RTL_CRITICAL_SECTION *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  ULONG_PTR SpinCount; // rcx
  int v8; // eax
  unsigned int LockSemaphore; // ecx
  float *v10; // rax
  __int64 v11; // rdx
  float v12; // xmm0_4
  float v13; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v16[128]; // [rsp+30h] [rbp-C8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  v6 = this + 1;
  EnterCriticalSection(this + 1);
  SpinCount = this->SpinCount;
  v15 = v6;
  if ( SpinCount )
  {
    if ( LODWORD(this->LockSemaphore) > 0x20 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
      return 2147942487LL;
    }
    v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _BYTE *))(*(_QWORD *)SpinCount + 24LL))(SpinCount, v16);
    v2 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 || v8 == -2147023174 || v8 == -2147023179 )
      {
        ATL::CComPtrBase<IPart>::Release(&this->SpinCount);
        v2 = 0;
      }
    }
    else
    {
      LockSemaphore = (unsigned int)this->LockSemaphore;
      if ( LockSemaphore )
      {
        v10 = (float *)v16;
        v11 = LockSemaphore;
        do
        {
          v12 = *v10++;
          v5 = fmaxf(v12, v5);
          --v11;
        }
        while ( v11 );
      }
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  v13 = fminf(v5, 1.0);
  if ( v13 <= 0.0 )
    v13 = 0.0;
  *a2 = v13;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetPeakValue", 630, v2);
  return (unsigned int)v2;
}
