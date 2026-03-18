/*
 * XREFs of ??0InteractiveControlManager@@AEAA@XZ @ 0x14012FDB0
 * Callers:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 * Callees:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x14012FEFC (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401FCC60 (IsCurrentSessionHostServiceSession.c)
 *     Feature_DialTracing__private_IsEnabledDeviceUsageNoInline @ 0x14028D6F8 (Feature_DialTracing__private_IsEnabledDeviceUsageNoInline.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1403D3280 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

InteractiveControlManager *__fastcall InteractiveControlManager::InteractiveControlManager(
        InteractiveControlManager *this)
{
  unsigned int *v1; // r8
  __int64 v3; // r9
  InteractiveControlSettings *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax

  *(_QWORD *)this = 0LL;
  v1 = (unsigned int *)&unk_14034C028;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  v3 = 29LL;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 1;
  v4 = (InteractiveControlManager *)((char *)this + 84);
  do
  {
    *((_DWORD *)v4 + 2 * *v1) = v1[1];
    v5 = *v1;
    v6 = v1[1];
    v1 += 4;
    *((_DWORD *)v4 + 2 * v5 + 1) = v6;
    --v3;
  }
  while ( v3 );
  InteractiveControlSettings::ReadSettings(v4);
  if ( !(unsigned int)Feature_DialTracing__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned int)IsCurrentSessionHostServiceSession() )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14039BBF8);
    if ( (unsigned int)IsCurrentSessionHostServiceSession() )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14039BC30);
  }
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 7) = *((_DWORD *)this + 27);
  return this;
}
