/*
 * XREFs of ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401CF45C
 * Callers:
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401CEE80 (-AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401D885C (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1400494CC (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401CEF44 (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 */

void __fastcall Win32JobObject::HandleConvertToGui(Win32JobObject *this, struct tagPROCESSINFO *a2)
{
  int v3; // edx
  int ProcessEffectiveUILimits; // edi
  int v5; // r8d
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  ProcessEffectiveUILimits = KfGetProcessEffectiveUILimits(*(_QWORD *)this);
  if ( ProcessEffectiveUILimits )
  {
    v6[0] = 0;
    v7 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v6, v3, v5);
    Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions((__int64)this, ProcessEffectiveUILimits);
    if ( v6[0] )
      --*(_DWORD *)(v7 + 28);
  }
}
