/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1401113F0
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x140111118 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x14005B780 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1401114E4 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x14011153C (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?GetDispatcherHandleByIndex@CRIMBase@@IEBAPEAXIW4HandleAccessMode@1@@Z @ 0x1401115D8 (-GetDispatcherHandleByIndex@CRIMBase@@IEBAPEAXIW4HandleAccessMode@1@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // rbp
  unsigned int i; // edi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE v12[16]; // [rsp+30h] [rbp-638h] BYREF
  _QWORD v13[192]; // [rsp+40h] [rbp-628h] BYREF

  v2 = 0LL;
  for ( i = 0; i < 0x13; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v13[3 * v2] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v13[3 * v2 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      v13[3 * v2 + 1] = CRIMBase::GetDispatcherHandleByIndex(this, i);
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
           v13);
    if ( v6 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v12);
      CBaseInput::OnPnpNotification(this);
      if ( !v12[0] )
        UserSessionSwitchLeaveCritWithNonPaged(v8, v7, v9, v10);
    }
  }
  return (unsigned int)v6;
}
