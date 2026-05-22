/*
 * XREFs of ?GetDeviceNode@winpnp@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAK@Z @ 0x18010E160
 * Callers:
 *     ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C98D0 (-GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z.c)
 *     ?IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z @ 0x18019C134 (-IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winpnp::GetDeviceNode(WCHAR *pDeviceID, PDEVINST pdnDevInst)
{
  CONFIGRET DevNodeW; // eax
  signed int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)pDeviceID + 3) > 7uLL )
    pDeviceID = *(WCHAR **)pDeviceID;
  DevNodeW = CM_Locate_DevNodeW(pdnDevInst, pDeviceID, 0);
  if ( !DevNodeW )
    return 0LL;
  *pdnDevInst = 0;
  v4 = CM_MapCrToWin32Err(DevNodeW, 0x507u);
  v5 = v4;
  if ( v4 > 0 )
    v5 = (unsigned __int16)v4 | 0x80070000;
  result = 2147943568LL;
  if ( v5 != -2147023728 )
  {
    if ( (v5 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C3,
        (int)"onecore\\drivers\\winpnp\\winpnp.cpp",
        (const char *)v5);
      return v5;
    }
    return 0LL;
  }
  return result;
}
