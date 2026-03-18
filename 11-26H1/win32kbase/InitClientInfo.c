/*
 * XREFs of InitClientInfo @ 0x1401A686C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1401B5410 (InitSystemThread.c)
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401CAC44 (Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 512) + 16LL) = *(_DWORD *)(a1 + 664);
  *(_DWORD *)(*(_QWORD *)(a1 + 512) + 28LL) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0);
  *(_QWORD *)(*(_QWORD *)(a1 + 512) + 208LL) = 0LL;
  v2 = *(_QWORD *)(a1 + 472);
  v3 = *(_QWORD *)(a1 + 512);
  if ( v2 )
  {
    *(_WORD *)(v3 + 152) = *(_WORD *)(v2 + 72);
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 40LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 512) + 144LL) = v2;
  }
  else
  {
    *(_WORD *)(v3 + 152) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 512) + 144LL) = 0LL;
  }
  v4 = 0;
  if ( (unsigned int)IsCurrentProcessDwm(v2) )
    v4 = 36;
  if ( *(int *)(*(_QWORD *)(a1 + 456) + 12LL) < 0 )
  {
    if ( (unsigned int)Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline(36LL) )
      v4 |= 4u;
    else
      v4 |= 2u;
  }
  v5 = *(_QWORD *)(a1 + 456);
  if ( (*(_DWORD *)(v5 + 808) & 0x800LL) != 0 )
    v4 |= 4u;
  if ( (*(_DWORD *)(v5 + 12) & 0x20000000) != 0 )
    v4 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 512) + 224LL) |= v4;
  *(_DWORD *)(*(_QWORD *)(a1 + 512) + 232LL) = *(_DWORD *)(a1 + 392);
  *(_DWORD *)(*(_QWORD *)(a1 + 512) + 236LL) = 0;
  *(_QWORD *)(a1 + 400) = *(_QWORD *)(a1 + 512) + 232LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 512) + 240LL) = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(*(_QWORD *)(a1 + 512) + 244LL) = 0;
  *(_QWORD *)(a1 + 408) = *(_QWORD *)(a1 + 512) + 240LL;
  return 1LL;
}
