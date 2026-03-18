/*
 * XREFs of ACPIEjectPnpLocationInterface @ 0x1400A8DD8
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x14005A800 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1400CC6A0 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1400CF900 (ACPIFilterIrpQueryPnpLocationInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIEjectPnpLocationInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 DeviceExtension; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 Pool2; // rax
  __int64 v8; // rcx
  void (*v9)(void); // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) >= 0x28u && *(_WORD *)(v2 + 18) )
  {
    v6 = *(_QWORD *)(v2 + 24);
    Pool2 = ExAllocatePool2(256LL, 56LL, 1181770561LL);
    v5 = 0;
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = DeviceExtension;
      *(_DWORD *)(Pool2 + 48) = 0;
      if ( *(_DWORD *)(a2 + 48) )
      {
        *(_OWORD *)(Pool2 + 8) = 0LL;
        *(_OWORD *)(Pool2 + 24) = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
      }
      else
      {
        *(_OWORD *)(Pool2 + 8) = *(_OWORD *)v6;
        *(_OWORD *)(Pool2 + 24) = *(_OWORD *)(v6 + 16);
        *(_QWORD *)(Pool2 + 40) = *(_QWORD *)(v6 + 32);
      }
      *(_OWORD *)v6 = PnpLocationInterface;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)&off_14008BE60;
      *(_QWORD *)(v6 + 32) = off_14008BE70;
      v9 = *(void (**)(void))(v6 + 16);
      *(_QWORD *)(v6 + 8) = v8;
      v9();
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
