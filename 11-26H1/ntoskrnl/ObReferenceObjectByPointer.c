/*
 * XREFs of ObReferenceObjectByPointer @ 0x140458E50
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140786454 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140786890 (HalpDmaAllocateChildAdapterV2.c)
 *     EtwpRegisterPrivateSession @ 0x140833120 (EtwpRegisterPrivateSession.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObpParseSymbolicLinkEx @ 0x140930290 (ObpParseSymbolicLinkEx.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     WmipQuerySetExecuteSI @ 0x140A0D9D4 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x140A0DCD8 (WmipQueryAllData.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 *     WmipRegisterDevice @ 0x140ACFB28 (WmipRegisterDevice.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
