/*
 * XREFs of InitClientInfo @ 0x140162A98
 * Callers:
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1401AA850 (InitSystemThread.c)
 * Callees:
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline @ 0x1401A712C (Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A723C (Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 16LL) = *(_DWORD *)(a1 + 672);
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 28LL) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0);
  *(_QWORD *)(*(_QWORD *)(a1 + 520) + 208LL) = 0LL;
  v3 = *(_QWORD *)(a1 + 480);
  if ( v3 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 520) + 152LL) = *(_WORD *)(v3 + 72);
    *(_QWORD *)(*(_QWORD *)(a1 + 520) + 144LL) = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 40LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 520) + 152LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 520) + 144LL) = 0LL;
  }
  if ( (unsigned int)IsCurrentProcessDwm() )
    v2 = (unsigned int)Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline(v4) != 0 ? 36 : 1;
  if ( *(int *)(*(_QWORD *)(a1 + 464) + 12LL) < 0 )
  {
    if ( (unsigned int)Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline(v4) )
      v2 |= 4u;
    else
      v2 |= 2u;
  }
  v5 = *(_QWORD *)(a1 + 464);
  if ( (*(_DWORD *)(v5 + 808) & 0x800LL) != 0 )
    v2 |= 4u;
  if ( (*(_DWORD *)(v5 + 12) & 0x20000000) != 0 )
    v2 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 520) + 224LL) |= v2;
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 232LL) = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 236LL) = 0;
  *(_QWORD *)(a1 + 408) = *(_QWORD *)(a1 + 520) + 232LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 240LL) = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 244LL) = 0;
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(a1 + 520) + 240LL;
  return 1LL;
}
