/*
 * XREFs of ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800E2420
 * Callers:
 *     ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800E2A2C (-PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV-$vector@UTouchInj.c)
 * Callees:
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004AFA0 (--1HitTestResult@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@XZ @ 0x1800E1984 (--$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA-A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InjectionRawInputProvider::HitTest(
        InjectionRawInputProvider *this,
        struct tagPOINT a2,
        int a3,
        struct InputInjectionClientProxy *a4)
{
  unsigned int v5; // ebx
  __int64 *v6; // rdi
  __int64 *v7; // rsi
  struct InputInjectionClientProxy *v8; // rcx
  struct InputInjectionClientProxy *v10; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v11[104]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+A8h] [rbp-40h]

  (*(void (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, __int64, int))(**((_QWORD **)this + 4) + 40LL))(
    *((_QWORD *)this + 4),
    v11,
    a2,
    2LL,
    a3);
  v5 = 0;
  if ( v11[0] )
  {
    v6 = *(__int64 **)(v12 - 24);
    v7 = *(__int64 **)(v12 - 16);
    while ( v6 != v7 )
    {
      InputSite::GetAttachedObject<IInputInjectionClientProxy,InputInjectionClientProxy>(*v6, &v10);
      v8 = v10;
      if ( v10 && v10 == a4 )
      {
        (*(void (**)(void))(*(_QWORD *)v10 + 8LL))();
        goto LABEL_11;
      }
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(struct InputInjectionClientProxy *))(*(_QWORD *)v8 + 8LL))(v8);
      }
      ++v6;
    }
  }
  v5 = -2147467259;
LABEL_11:
  HitTestResult::~HitTestResult((HitTestResult *)v11);
  return v5;
}
