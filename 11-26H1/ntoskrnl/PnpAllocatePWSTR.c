/*
 * XREFs of PnpAllocatePWSTR @ 0x140951520
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x1407B3648 (PiSwQueuedCreateInfoCreate.c)
 *     PiDqActionDataCreate @ 0x14095124C (PiDqActionDataCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectCreate @ 0x1409AB728 (PiDmObjectCreate.c)
 *     PiSwPdoPnPDispatch @ 0x1409AE200 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 *     PiSwInterfaceCreate @ 0x140A8C6B4 (PiSwInterfaceCreate.c)
 *     PiSwPnPInfoInit @ 0x140A8D384 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x140A8D448 (PiSwInstanceInfoInit.c)
 *     PiSwBusRelationAdd @ 0x140A8D51C (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x140A8D7A4 (PnpCopyDevProperty.c)
 *     PiSwIrpPropertySet @ 0x140B071FC (PiSwIrpPropertySet.c)
 *     PiSwDeviceInterfaceSetState @ 0x140B1284C (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140B14B14 (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpAllocatePWSTR(_WORD *a1, unsigned __int64 a2, ULONG a3, PVOID *a4)
{
  _WORD *v6; // rdi
  unsigned __int64 v7; // r8
  _WORD *i; // rax
  int v9; // esi
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  _WORD *Pool2; // rax
  _WORD *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rcx

  *a4 = 0LL;
  v6 = a1;
  if ( !a1 )
    return 0LL;
  if ( a2 > 0x7FFFFFFF )
  {
    LODWORD(result) = -1073741811;
LABEL_31:
    v9 = result;
    goto LABEL_24;
  }
  v7 = a2;
  for ( i = a1; v7; --v7 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v9 = -1073741811;
  result = 3221225485LL;
  if ( v7 )
    result = 0LL;
  v11 = a2 - v7;
  if ( !v7 )
    goto LABEL_31;
  if ( !v11 )
    return result;
  v12 = 2 * (v11 + 1);
  if ( is_mul_ok(v11 + 1, 2uLL) )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    *a4 = Pool2;
    v14 = Pool2;
    if ( Pool2 )
    {
      v15 = v12 >> 1;
      if ( v15 && v15 <= 0x7FFFFFFF )
      {
        v9 = 0;
        v16 = 2147483646 - v15;
        while ( v16 + v15 && *v6 )
        {
          *v14++ = *v6++;
          if ( !--v15 )
          {
            --v14;
            v9 = -2147483643;
            break;
          }
        }
        *v14 = 0;
      }
      else if ( v15 )
      {
        *Pool2 = 0;
      }
      if ( v9 >= 0 )
        return (unsigned int)v9;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741675;
  }
LABEL_24:
  if ( *a4 )
  {
    ExFreePoolWithTag(*a4, a3);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
