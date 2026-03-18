/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x1409A7EF4
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 * Callees:
 *     PiDcHandleObjectEvent @ 0x1409A8638 (PiDcHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1409A8688 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1409A86E8 (PiDqObjectManagerHandleObjectEvent.c)
 */

__int64 __fastcall PiPnpRtlObjectEventDispatch(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    PiDcHandleObjectEvent();
    result = PiDqGetObjectManagerForPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( result )
      return PiDqObjectManagerHandleObjectEvent(result, a1);
  }
  return result;
}
