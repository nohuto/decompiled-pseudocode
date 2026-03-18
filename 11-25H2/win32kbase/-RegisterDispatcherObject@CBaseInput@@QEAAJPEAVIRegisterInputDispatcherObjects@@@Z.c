/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1400E1830
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1400E12CC (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 * Callees:
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x140039DB0 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28 (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?GetDispatcherHandleByIndex@CRIMBase@@IEBAPEAXIW4HandleAccessMode@1@@Z @ 0x14020F740 (-GetDispatcherHandleByIndex@CRIMBase@@IEBAPEAXIW4HandleAccessMode@1@@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x14020F7D8 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x140210150 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // rbp
  unsigned int i; // edi
  int v6; // ebx
  _BYTE v8[16]; // [rsp+30h] [rbp-638h] BYREF
  _QWORD v9[192]; // [rsp+40h] [rbp-628h] BYREF

  v2 = 0LL;
  for ( i = 0; i < 0x13; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v9[3 * v2] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v9[3 * v2 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      v9[3 * v2 + 1] = CRIMBase::GetDispatcherHandleByIndex(this, i);
      v2 = (unsigned int)(v2 + 1);
    }
  }
  v6 = 0;
  if ( (_DWORD)v2 )
  {
    v6 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, CBaseInput *, _QWORD, _QWORD *))a2)(
           a2,
           this,
           (unsigned int)v2,
           v9);
    if ( v6 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v8);
      CBaseInput::OnPnpNotification(this);
      ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)v8);
    }
  }
  return (unsigned int)v6;
}
