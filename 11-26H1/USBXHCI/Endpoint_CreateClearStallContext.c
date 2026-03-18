/*
 * XREFs of Endpoint_CreateClearStallContext @ 0x140035AA0
 * Callers:
 *     Endpoint_Create @ 0x1400806CC (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_CreateClearStallContext(__int64 a1)
{
  __int64 Pool2; // rbx
  PIRP Irp; // rax
  int v4; // edi
  __int128 v6; // [rsp+30h] [rbp-40h] BYREF
  __int128 v7; // [rsp+40h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-20h]
  void *v9; // [rsp+60h] [rbp-10h]

  LODWORD(v9) = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 152LL, 1229146200LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  Irp = IoAllocateIrp(4, 0);
  *(_QWORD *)Pool2 = Irp;
  if ( Irp )
  {
    v6 = 0LL;
    v9 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v6) = -1;
      else
        LODWORD(v6) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v6) = 56;
    }
    *((_QWORD *)&v7 + 1) = 0x100000001LL;
    v9 = off_14006AE88;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64))(WdfFunctions_01033 + 1976))(
           WdfDriverGlobals,
           &v6,
           0LL,
           Pool2 + 144);
    if ( v4 >= 0 )
    {
      *(_QWORD *)(a1 + 280) = Pool2;
      return (unsigned int)v4;
    }
  }
  else
  {
    v4 = -1073741670;
  }
  if ( *(_QWORD *)Pool2 )
  {
    IoFreeIrp(*(PIRP *)Pool2);
    *(_QWORD *)Pool2 = 0LL;
  }
  if ( *(_QWORD *)(Pool2 + 144) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
    *(_QWORD *)(Pool2 + 144) = 0LL;
  }
  ExFreePoolWithTag((PVOID)Pool2, 0x49434858u);
  return (unsigned int)v4;
}
