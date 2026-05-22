/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x18000A9A4
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18000A684 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall InputETW::Win32kInterop::ProcessDeviceArrival(unsigned int a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+60h] [rbp-18h]

  v2 = a1;
  if ( InputETW::IsEnabled(a1, a2) )
  {
    v3 = InputETW::Provider();
    if ( *(_DWORD *)v3 > 5u && (*((_BYTE *)v3 + 16) & 1) != 0 && (*((_QWORD *)v3 + 3) & 1LL) == *((_QWORD *)v3 + 3) )
    {
      v4 = v2;
      v6 = &v4;
      v7 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v3, &unk_180217207, 0LL, 0LL, 3, v5);
    }
  }
}
