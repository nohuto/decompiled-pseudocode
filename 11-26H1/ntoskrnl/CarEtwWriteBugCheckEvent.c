/*
 * XREFs of CarEtwWriteBugCheckEvent @ 0x14064C808
 * Callers:
 *     CarHandleEtwEvent @ 0x14064CC58 (CarHandleEtwEvent.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140650230 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     McTemplateK0dszud_EtwWriteTransfer @ 0x14064D0C0 (McTemplateK0dszud_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VfUtilGetDriverFullName @ 0x140C27770 (VfUtilGetDriverFullName.c)
 */

__int64 __fastcall CarEtwWriteBugCheckEvent(__int64 a1, const WCHAR *a2, int a3, const CHAR *a4, char a5, int a6)
{
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // ecx
  __int64 DriverFullName; // rdi
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r9
  char v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+60h] [rbp-A0h] BYREF
  int *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  char *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  _BYTE v29[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v30[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]

  v9 = 0;
  DriverFullName = VfUtilGetDriverFullName();
  if ( !DriverFullName )
    DriverFullName = (__int64)a2;
  LOBYTE(v14) = 4;
  if ( (unsigned int)dword_140E08E50 > 5 && tlgKeywordOn((__int64)&dword_140E08E50, 0x800000000000LL) )
  {
    v18 = 0;
    v23 = &v18;
    v19 = CarTipTag;
    v25 = &v19;
    v27 = &v17;
    v24 = v14;
    v26 = v14;
    v17 = a5;
    v28 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v29, a2);
    tlgCreate1Sz_char((__int64)v30, a4);
    v32 = v15;
    v31 = &v20;
    v34 = v15;
    v33 = &v21;
    v20 = a3;
    v21 = a6;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E08E50, (unsigned __int8 *)byte_140053D58, 0LL, 0LL, 9u, &v22);
    LOBYTE(v14) = 4;
  }
  if ( ((unsigned __int8)v14 & (unsigned __int8)Microsoft_Windows_Kernel_XDVEnableBits) != 0 )
    return (unsigned int)McTemplateK0dszud_EtwWriteTransfer(v11, v10, v13, a3, (__int64)a4, DriverFullName, a5, a6);
  return v9;
}
