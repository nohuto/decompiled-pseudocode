/*
 * XREFs of ?GetProcessId@InputSite@@QEBAIXZ @ 0x180132DE8
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000E0B0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180085630 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ @ 0x180135DA0 (-GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ.c)
 *     ?OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x1801367A0 (-OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 *     ?OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180136800 (-OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

__int64 __fastcall InputSite::GetProcessId(InputSite *this)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *((unsigned int *)this + 10);
  if ( !(_DWORD)result )
  {
    v3 = *((_QWORD *)this + 61);
    if ( v3 != *((_QWORD *)this + 62) )
    {
      result = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)v3 + 32LL)
                                                                                             + 16LL));
      *((_DWORD *)this + 10) = result;
    }
  }
  return result;
}
