/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EAC98
 * Callers:
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1400E97D0 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1400EA20C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400EAFD0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

__int64 __fastcall DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // esi
  tagDomLock *v11; // rcx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = UserSessionState + 42376;
  v8 = W32GetUserSessionState(v6, v5, v7);
  *(_BYTE *)(a1 + 24) = 0;
  v9 = a1;
  *(_QWORD *)(a1 + 16) = v8 + 42384;
  *(_QWORD *)(a1 + 32) = 0LL;
  v10 = 0;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v11 = *(tagDomLock **)v9;
    if ( *(_QWORD *)v9 )
    {
      if ( *(_BYTE *)(v9 + 8) )
        tagDomLock::LockExclusive(v11);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v11);
    }
    ++v10;
    v9 += 16LL;
  }
  while ( !v10 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
