/*
 * XREFs of ??1InteractiveControlManager@@AEAA@XZ @ 0x1402DFB10
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     IsCurrentSessionHostServiceSession @ 0x1401FCC60 (IsCurrentSessionHostServiceSession.c)
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x14020E218 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     Feature_DialTracing__private_IsEnabledDeviceUsageNoInline @ 0x14028D6F8 (Feature_DialTracing__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall InteractiveControlManager::~InteractiveControlManager(InteractiveControlManager *this)
{
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx

  InteractiveControlManager::Deinitialize(this);
  if ( !(unsigned int)Feature_DialTracing__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( IsCurrentSessionHostServiceSession() )
    {
      v1 = qword_14039BC18;
      qword_14039BC18 = 0LL;
      dword_14039BBF8 = 0;
      EtwUnregister(v1);
    }
    if ( IsCurrentSessionHostServiceSession() )
    {
      v2 = qword_14039BC50;
      qword_14039BC50 = 0LL;
      dword_14039BC30 = 0;
      EtwUnregister(v2);
    }
  }
}
