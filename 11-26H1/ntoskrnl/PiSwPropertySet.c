/*
 * XREFs of PiSwPropertySet @ 0x1409DAD84
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14090BA58 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14090C58C (PiSwIrpInterfacePropertySet.c)
 *     PiSwCompleteCreate @ 0x14090F730 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpPropertySet @ 0x140B055EC (PiSwIrpPropertySet.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x14099E110 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiSwPropertySet(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  int v11; // eax
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-28h] BYREF

  P[0] = 0LL;
  Handle = 0LL;
  v8 = PiPnpRtlBeginOperation(P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a1, a2, 7, 0, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (_QWORD *)(a3 + 40);
        do
        {
          v11 = PiPnpRtlSetObjectProperty(
                  *(_QWORD *)&PiPnpRtlCtx,
                  a1,
                  a2,
                  Handle,
                  *(v10 - 2),
                  v10 - 5,
                  *((_DWORD *)v10 - 2),
                  *v10,
                  *((_DWORD *)v10 - 1),
                  0);
          v8 = v11;
          if ( v11 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          else if ( v11 < 0 )
          {
            break;
          }
          ++v9;
          v10 += 6;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P[0] )
    PiPnpRtlEndOperation((char *)P[0]);
  return (unsigned int)v8;
}
