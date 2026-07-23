/*
 * XREFs of KeStartProfile @ 0x1405F5C68
 * Callers:
 *     EtwpTimeProfileStart @ 0x14082E308 (EtwpTimeProfileStart.c)
 *     EtwpCoverageSamplerStart @ 0x14083773C (EtwpCoverageSamplerStart.c)
 *     NtStartProfile @ 0x14084B8E0 (NtStartProfile.c)
 *     EtwpEnableKernelTrace @ 0x140A00560 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeStopProfile @ 0x1404A4318 (KeStopProfile.c)
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     KiStartProfileTarget @ 0x1404C89E0 (KiStartProfileTarget.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeStartProfile(ULONG_PTR a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  PVOID v6; // rcx
  ULONG_PTR Context; // [rsp+28h] [rbp-E0h] BYREF
  int v9; // [rsp+30h] [rbp-D8h]
  int v10; // [rsp+34h] [rbp-D4h]
  __int64 v11; // [rsp+38h] [rbp-D0h]
  __int64 v12; // [rsp+40h] [rbp-C8h]
  _BYTE v13[256]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+148h] [rbp+40h]
  char v15; // [rsp+158h] [rbp+50h]

  memset_0(&Context, 0, 0x138uLL);
  v10 = KeNumberProcessors_0;
  v9 = KeNumberProcessors_0;
  v12 = 2097153LL;
  Context = a1;
  memset_0(v13, 0, sizeof(v13));
  KeQueryMaximumProcessorCountEx(0xFFFFu);
  P = (PVOID)ExAllocatePool2(0x40uLL);
  if ( P )
  {
    v4 = guard_dispatch_icall_no_overrides(v3, v2);
    if ( v4 < 0 )
      return (unsigned int)v4;
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
      KiStartProfileTarget(&Context);
    else
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiStartProfileTarget, (ULONG_PTR)&Context);
    v6 = P;
    if ( P )
      ExFreePoolWithTag(P, 0x666F7250u);
    if ( !(_DWORD)v11 )
    {
      if ( !v15 )
        v4 = 255;
      goto LABEL_17;
    }
    if ( (v11 & 2) != 0 )
    {
      v4 = -1073741637;
    }
    else
    {
      if ( (v11 & 1) == 0 )
      {
LABEL_17:
        guard_dispatch_icall_no_overrides(v6, v5);
        return (unsigned int)v4;
      }
      v4 = -2147483631;
    }
    KeStopProfile(a1);
    goto LABEL_17;
  }
  return (unsigned int)-1073741670;
}
