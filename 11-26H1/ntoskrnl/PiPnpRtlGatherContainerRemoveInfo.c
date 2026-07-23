/*
 * XREFs of PiPnpRtlGatherContainerRemoveInfo @ 0x14077B650
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14077DA9C (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherContainerRemoveInfo(__int64 a1, __int64 a2, PVOID *a3)
{
  __int64 Pool2; // rax
  unsigned int Object; // ebx
  int v8; // eax

  Pool2 = ExAllocatePool2(0x100uLL);
  *a3 = (PVOID)Pool2;
  if ( !Pool2 )
  {
    Object = -1073741670;
LABEL_8:
    PiPnpRtlFreePanelRemoveInfo(*a3);
    *a3 = 0LL;
    return Object;
  }
  Object = PiDmGetObject(1LL, a1, Pool2);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_8;
  v8 = PiDmGetObject(5LL, a2, (char *)*a3 + 8);
  Object = v8;
  if ( v8 == -1073741772 )
  {
    return 0;
  }
  else if ( v8 < 0 )
  {
    goto LABEL_8;
  }
  return Object;
}
