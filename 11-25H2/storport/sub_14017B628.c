/*
 * XREFs of sub_14017B628 @ 0x14017B628
 * Callers:
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void sub_14017B628()
{
  struct _DEVICE_OBJECT *v0; // rbx
  void (__fastcall *v1)(struct _DRIVER_OBJECT *, _QWORD, void (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *); // rax

  v0 = &stru_1401692A0;
  if ( off_140168120 != &stru_1401692A0 )
  {
    off_140168120 = &stru_1401692A0;
    if ( dword_140168640 == 4 )
    {
      do
      {
        v1 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, void (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *))qword_140168568;
        v0->Vpb = 0LL;
        v1(v0->DriverObject, 0LL, sub_140071610, v0, &v0->Vpb);
        v0 = v0->NextDevice;
      }
      while ( v0 );
    }
    else if ( dword_140168640 == 2 )
    {
      *(_QWORD *)&stru_1401692A0.Type = &sub_14017B800;
      IoWMIRegistrationControl(&stru_1401692A0, 0x80010001);
    }
  }
}
