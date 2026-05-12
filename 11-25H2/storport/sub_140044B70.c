/*
 * XREFs of sub_140044B70 @ 0x140044B70
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 *     sub_1401B43C0 @ 0x1401B43C0 (sub_1401B43C0.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14013CEA0 @ 0x14013CEA0 (sub_14013CEA0.c)
 */

__int64 __fastcall sub_140044B70(struct _DEVICE_OBJECT *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  __int128 PropertyBuffer; // [rsp+38h] [rbp-20h] BYREF

  ResultLength = 0;
  PropertyBuffer = 0LL;
  if ( IoGetDeviceProperty(a1, DevicePropertyBusTypeGuid, 0x10u, &PropertyBuffer, &ResultLength) < 0 )
    return 0xFFFFFFFFLL;
  v1 = PropertyBuffer - 0x11D0AF9F09343630LL;
  if ( (_QWORD)PropertyBuffer == 0x11D0AF9F09343630LL )
    v1 = *((_QWORD *)&PropertyBuffer + 1) - 0x301B1EF80000E992LL;
  if ( !v1 )
    return 1LL;
  v2 = PropertyBuffer - 0x11D0B510C8EBDFB0LL;
  if ( (_QWORD)PropertyBuffer == 0x11D0B510C8EBDFB0LL )
    v2 = *((_QWORD *)&PropertyBuffer + 1) + 0x1CBDDA365FFF1A80LL;
  if ( !v2 )
    return 5LL;
  v4 = PropertyBuffer - 0x11D0D87DE676F854LL;
  if ( (_QWORD)PropertyBuffer == 0x11D0D87DE676F854LL )
    v4 = *((_QWORD *)&PropertyBuffer + 1) + 0x3AA0FA365FFF4D6ELL;
  if ( !v4 )
    return 1LL;
  v5 = PropertyBuffer - 0x11D0F3FCDDC35509LL;
  if ( (_QWORD)PropertyBuffer == 0x11D0F3FCDDC35509LL )
    v5 = *((_QWORD *)&PropertyBuffer + 1) + 0x2EC18A07FFFFC85BLL;
  if ( v5 )
    return (unsigned int)sub_14013CEA0(&PropertyBuffer, &unk_14014C4C8, 16LL) != 0 ? -1 : 17;
  else
    return 2LL;
}
