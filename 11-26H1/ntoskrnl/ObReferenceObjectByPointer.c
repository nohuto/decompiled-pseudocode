/*
 * XREFs of ObReferenceObjectByPointer @ 0x14045F750
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14078041C (HalpDmaAllocateChildAdapterV3.c)
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140783D5C (HalpDmaAllocateChildAdapterV2.c)
 *     EtwpRegisterPrivateSession @ 0x14082CEE0 (EtwpRegisterPrivateSession.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     ObpParseSymbolicLinkEx @ 0x140900300 (ObpParseSymbolicLinkEx.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     WmipQuerySetExecuteSI @ 0x140A0E7F8 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x140A0EAFC (WmipQueryAllData.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 *     WmipRegisterDevice @ 0x140ACD8E8 (WmipRegisterDevice.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  volatile signed __int64 *v4; // rbx
  signed __int64 BugCheckParameter4; // rdi

  if ( ObjectType )
  {
    v4 = (volatile signed __int64 *)((char *)Object - 48);
    if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != ObjectType->Index )
      return -1073741788;
  }
  else
  {
    if ( AccessMode )
      return -1073741788;
    v4 = (volatile signed __int64 *)((char *)Object - 48);
  }
  ObpTraceObjectReferenceIfActive((__int64)v4, 1, 0x746C6644u);
  BugCheckParameter4 = _InterlockedIncrement64(v4);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v4 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
