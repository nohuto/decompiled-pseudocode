/*
 * XREFs of ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x140243FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A50 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char v1; // di

  *((_DWORD *)this + 4) &= 0xE40407FF;
  v1 = 0;
  *((_BYTE *)this + 428) |= 4u;
  *((_DWORD *)this + 95) = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || *((float *)this + 20) != 0.0
    || *((float *)this + 21) != 0.0
    || *((float *)this + 42) != 1.0
    || *((_DWORD *)this + 94)
    || *((_QWORD *)this + 51)
    || *((_QWORD *)this + 29)
    || *((_QWORD *)this + 30)
    || *((_QWORD *)this + 43)
    || *((_QWORD *)this + 44)
    || *((_QWORD *)this + 31)
    || *((_QWORD *)this + 32)
    || *((_QWORD *)this + 33)
    || *((_QWORD *)this + 34) )
  {
    return 1;
  }
  return v1;
}
