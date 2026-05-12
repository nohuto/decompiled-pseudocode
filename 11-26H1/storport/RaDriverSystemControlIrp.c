/*
 * XREFs of RaDriverSystemControlIrp @ 0x1401B7620
 * Callers:
 *     <none>
 * Callees:
 *     RaIsDeviceDFxPoweredDown @ 0x14001E5D8 (RaIsDeviceDFxPoweredDown.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     RaInsertDFxQueue @ 0x1400732C0 (RaInsertDFxQueue.c)
 *     RaWmiDispatchIrp @ 0x1401B7718 (RaWmiDispatchIrp.c)
 */

__int64 __fastcall RaDriverSystemControlIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Eu,
      (__int64)&WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
      a1,
      a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  if ( !RaIsDeviceDFxPoweredDown(a1) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
  {
    v5 = RaWmiDispatchIrp(v4, a2);
    v6 = v5;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v8 = v5;
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Fu,
        (__int64)&WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
        a1,
        a2,
        v8);
    }
    return v6;
  }
  else
  {
    result = RaInsertDFxQueue(v4, a2);
    if ( !(_DWORD)result )
      return 259LL;
  }
  return result;
}
