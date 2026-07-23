/*
 * XREFs of PiIommuAllocateExtension @ 0x140B21D08
 * Callers:
 *     PipDmgInitializeIommuExtension @ 0x140B21C1C (PipDmgInitializeIommuExtension.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpTraceIommuDeviceProperties @ 0x1407B4C28 (PnpTraceIommuDeviceProperties.c)
 *     PiIommuFreeExtension @ 0x1407B7A28 (PiIommuFreeExtension.c)
 *     PipIommuRetrieveDeviceId @ 0x140B21E80 (PipIommuRetrieveDeviceId.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiIommuAllocateExtension(__int64 a1, ULONG_PTR a2, __int64 *a3)
{
  __int64 Pool2; // rbx
  int DeviceId; // edi
  char v7; // cl
  char v8; // al
  char v9; // cl
  char v10; // al
  char v11; // dl
  char v12; // cl
  char v14; // [rsp+60h] [rbp+40h] BYREF
  int v15; // [rsp+68h] [rbp+48h] BYREF

  v14 = 0;
  v15 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    DeviceId = -1073741670;
    goto LABEL_10;
  }
  DeviceId = PipIommuRetrieveDeviceId(a2);
  if ( DeviceId < 0 )
    goto LABEL_13;
  if ( !*(_QWORD *)(a2 + 56) )
  {
    DeviceId = -1073741637;
    goto LABEL_13;
  }
  DeviceId = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8), (__int64)&v15);
  if ( DeviceId < 0 )
  {
LABEL_13:
    PiIommuFreeExtension((_BYTE *)Pool2);
    Pool2 = 0LL;
    goto LABEL_10;
  }
  v7 = *(_BYTE *)(Pool2 + 16) & 0xF7 | (8 * ((v15 & 2) != 0));
  *(_BYTE *)(Pool2 + 16) = v7;
  v8 = v7 & 0xFB | (4 * (v15 & 1));
  *(_BYTE *)(Pool2 + 16) = v8;
  v9 = v8 & 0xDF | (32 * ((v15 & 8) != 0));
  v10 = *(_BYTE *)(Pool2 + 17);
  *(_BYTE *)(Pool2 + 16) = v9;
  v11 = v9 & 0xEF | (16 * ((v15 & 4) != 0));
  *(_BYTE *)(Pool2 + 16) = v11;
  *(_BYTE *)(Pool2 + 17) = v10 & 0xFD | (2 * ((v15 & 0x10) != 0));
  if ( (v11 & 0x24) != 0 )
    PnpTraceIommuDeviceProperties();
  DeviceId = guard_dispatch_icall_no_overrides(*(_QWORD *)Pool2, (__int64)&v14);
  if ( DeviceId < 0 )
  {
    DeviceId = 0;
  }
  else
  {
    v12 = *(_BYTE *)(Pool2 + 16) & 0xBF | (32 * (v14 & 2));
    *(_BYTE *)(Pool2 + 16) = v12;
    *(_BYTE *)(Pool2 + 16) = (v14 << 7) | v12 & 0x7F;
  }
  *(_DWORD *)(Pool2 + 20) = 2;
LABEL_10:
  *a3 = Pool2;
  return (unsigned int)DeviceId;
}
