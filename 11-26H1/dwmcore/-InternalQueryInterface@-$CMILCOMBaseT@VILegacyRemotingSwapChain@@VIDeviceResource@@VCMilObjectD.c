/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A2DE0
 * Callers:
 *     ?QueryInterface@CLegacyRemotingSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A3150 (-QueryInterface@CLegacyRemotingSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<ILegacyRemotingSwapChain,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  int v5; // edi
  __int64 v6; // rax

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 264LL))(a1);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = a1;
      v5 = 0;
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 16));
  }
  return (unsigned int)v5;
}
