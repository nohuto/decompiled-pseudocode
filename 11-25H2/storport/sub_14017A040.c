/*
 * XREFs of sub_14017A040 @ 0x14017A040
 * Callers:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 * Callees:
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_1400425B8 @ 0x1400425B8 (sub_1400425B8.c)
 *     sub_140045120 @ 0x140045120 (sub_140045120.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400540D4 @ 0x1400540D4 (sub_1400540D4.c)
 *     sub_1400A6008 @ 0x1400A6008 (sub_1400A6008.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401782E0 @ 0x1401782E0 (sub_1401782E0.c)
 */

__int64 __fastcall sub_14017A040(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int v5; // esi
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-50h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-50h]
  union _LARGE_INTEGER v12; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  GUID v14; // [rsp+50h] [rbp-20h] BYREF

  memset(&Event, 0, sizeof(Event));
  _InterlockedExchange((volatile __int32 *)(a1 + 88), 8);
  v4 = *(_QWORD *)(a1 + 4960);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 20) |= 4u;
    sub_1400212C0(a1, 0LL, 1LL);
  }
  sub_1400099A0(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  sub_1400540D4(*(_QWORD *)(a1 + 960), &Event);
  v12.QuadPart = -1200000000LL;
  v5 = KeWaitForSingleObject(&Event, Executive, 0, 0, &v12);
  if ( v5 >= 0 )
    v5 = sub_1400A6008(a1, 0x1D4C0u);
  if ( v5 )
  {
    v6 = byte_140168DAA == 0;
    a2->IoStatus.Status = -1073741823;
    if ( !v6 )
    {
      v14 = 0LL;
      IoGetActivityIdIrp(a2, &v14);
      if ( (byte_1401694F2 & 0x20) != 0 )
      {
        LODWORD(Timeout) = a2->IoStatus.Status;
        sub_140052F3C(v7, &stru_140149FE8, &v14, a2, Timeout);
      }
    }
  }
  else
  {
    v5 = sub_140016AA8(*(_QWORD *)(a1 + 8), 4u, 0LL, 0LL, 0);
    if ( v5 >= 0 )
    {
      sub_140045120(a1);
      sub_1400425B8(a1);
      sub_1401782E0(a1 + 360);
      if ( byte_140168DAA )
      {
        v14 = 0LL;
        IoGetActivityIdIrp(a2, &v14);
        if ( (byte_1401694F2 & 0x20) != 0 )
        {
          LODWORD(Timeouta) = a2->IoStatus.Status;
          sub_140052F3C(v8, &stru_140149FE8, &v14, a2, Timeouta, 0);
        }
      }
      a2->IoStatus.Status = 0;
      return (unsigned int)sub_14001B0D0(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
    }
  }
  return (unsigned int)v5;
}
