/*
 * XREFs of UsbhFdoSuccess @ 0x140032A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhFdoSuccess(__int64 a1, IRP *a2)
{
  __int64 v3; // rcx
  signed __int32 v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdx

  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 880), 0xFFFFFFFF);
        v5 = *(_DWORD *)(v3 + 884);
        v6 = *(_QWORD *)(v3 + 888);
        v7 = 32LL * ((v4 - 1) & v5);
        *(_DWORD *)(v7 + v6) = 1667461958;
        *(_QWORD *)(v7 + v6 + 8) = 0LL;
        *(_QWORD *)(v7 + v6 + 16) = 0LL;
        *(_QWORD *)(v7 + v6 + 24) = a2;
      }
    }
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
