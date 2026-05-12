/*
 * XREFs of sub_14017B33C @ 0x14017B33C
 * Callers:
 *     sub_140041560 @ 0x140041560 (sub_140041560.c)
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void sub_14017B33C()
{
  PDEVICE_OBJECT v0; // rbx

  v0 = off_140168120;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
  {
    if ( dword_140168640 == 4 )
    {
      while ( v0 )
      {
        if ( v0->Vpb )
        {
          ((void (*)(void))qword_1401686F8)();
          v0->Vpb = 0LL;
        }
        v0 = v0->NextDevice;
      }
    }
    else if ( dword_140168640 == 2 )
    {
      IoWMIRegistrationControl(off_140168120, 0x80000002);
    }
    off_140168120 = (PDEVICE_OBJECT)&off_140168120;
  }
}
