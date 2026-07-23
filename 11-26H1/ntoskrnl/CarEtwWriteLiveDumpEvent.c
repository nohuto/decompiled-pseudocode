/*
 * XREFs of CarEtwWriteLiveDumpEvent @ 0x14064C978
 * Callers:
 *     CarLiveDump @ 0x140650740 (CarLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     McTemplateK0dszud_EtwWriteTransfer @ 0x14064D0C0 (McTemplateK0dszud_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall CarEtwWriteLiveDumpEvent(int *a1, int a2, int a3)
{
  char CurrentIrql; // di
  const CHAR *v5; // rdx
  int v6; // ecx
  int v7; // [rsp+40h] [rbp-69h] BYREF
  int v8; // [rsp+44h] [rbp-65h] BYREF
  int v9; // [rsp+48h] [rbp-61h] BYREF
  int v10; // [rsp+4Ch] [rbp-5Dh] BYREF
  int v11; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-49h] BYREF
  int *v13; // [rsp+80h] [rbp-29h]
  __int64 v14; // [rsp+88h] [rbp-21h]
  int *v15; // [rsp+90h] [rbp-19h]
  __int64 v16; // [rsp+98h] [rbp-11h]
  _BYTE v17[16]; // [rsp+A0h] [rbp-9h] BYREF
  int *v18; // [rsp+B0h] [rbp+7h]
  __int64 v19; // [rsp+B8h] [rbp+Fh]
  _BYTE v20[16]; // [rsp+C0h] [rbp+17h] BYREF
  int *v21; // [rsp+D0h] [rbp+27h]
  __int64 v22; // [rsp+D8h] [rbp+2Fh]
  int *v23; // [rsp+E0h] [rbp+37h]
  __int64 v24; // [rsp+E8h] [rbp+3Fh]

  if ( a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (unsigned int)dword_140E08E50 > 5 && tlgKeywordOn((__int64)&dword_140E08E50, 0x800000000000LL) )
    {
      v5 = (const CHAR *)*((_QWORD *)a1 + 139);
      v7 = *a1;
      v13 = &v7;
      v8 = a1[280];
      v15 = &v8;
      v14 = 4LL;
      v16 = 4LL;
      tlgCreate1Sz_char((__int64)v17, v5);
      v9 = a1[21];
      v18 = &v9;
      v19 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v20, (const WCHAR *)a1 + 2);
      v6 = a1[17];
      v21 = &v10;
      v11 = a1[281];
      v10 = v6;
      v23 = &v11;
      v22 = 4LL;
      v24 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08E50,
        (unsigned __int8 *)&dword_140053BDC,
        0LL,
        0LL,
        9u,
        &v12);
    }
    if ( (Microsoft_Windows_Kernel_XDVEnableBits & 4) != 0 )
      McTemplateK0dszud_EtwWriteTransfer(
        (_DWORD)a1,
        a2,
        a3,
        a1[280],
        (__int64)"This event is sent whenever CAR attempts                                      to write a live kernel dump.",
        (__int64)L"CAR_LIVE_DUMP_EVENT",
        CurrentIrql,
        a1[281]);
  }
}
