/*
 * XREFs of VrpPreFlushKey @ 0x140B63FF4
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall VrpPreFlushKey(__int64 a1, __int64 a2)
{
  GUID ActivityId; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5[2]; // [rsp+40h] [rbp-38h] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    if ( (unsigned int)dword_140E0A5C0 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E0A5C0,
        (unsigned __int8 *)&byte_14005B897,
        &ActivityId,
        0LL,
        2u,
        v5);
    return 3221226755LL;
  }
  else
  {
    if ( (unsigned int)dword_140E0A5C0 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E0A5C0,
        (unsigned __int8 *)&word_14005BBA6,
        &ActivityId,
        0LL,
        2u,
        v5);
    return 0LL;
  }
}
