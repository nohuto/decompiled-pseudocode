/*
 * XREFs of NvmeAdapterRequestComplete @ 0x1400DC454
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x14000E920 (RaidLogMiniportCompletion.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14003F1BC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall NvmeAdapterRequestComplete(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  const wchar_t *v5; // rdx
  const wchar_t *v6; // rdx
  bool v7; // cf
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-69h]
  int v12; // [rsp+28h] [rbp-61h]
  char v13; // [rsp+40h] [rbp-49h] BYREF
  int v14; // [rsp+44h] [rbp-45h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v17; // [rsp+70h] [rbp-19h]
  __int64 v18; // [rsp+78h] [rbp-11h]
  __int64 v19; // [rsp+80h] [rbp-9h]
  __int64 v20; // [rsp+88h] [rbp-1h]
  int *v21; // [rsp+90h] [rbp+7h]
  __int64 v22; // [rsp+98h] [rbp+Fh]
  char v23[16]; // [rsp+A0h] [rbp+17h] BYREF
  char *v24; // [rsp+B0h] [rbp+27h]
  __int64 v25; // [rsp+B8h] [rbp+2Fh]
  char v26[16]; // [rsp+C0h] [rbp+37h] BYREF

  v3 = a1;
  if ( (qword_140172448 & 8) != 0 )
    RaidLogMiniportCompletion((_QWORD *)a2);
  v4 = *(_QWORD *)(a2 + 160);
  if ( !v4 )
    goto LABEL_7;
  LOBYTE(a1) = *(_BYTE *)(v4 + 141);
  if ( (_BYTE)a1 != 0xAB && (_BYTE)a1 != 0xAC )
  {
    *(_BYTE *)(v4 + 141) = -85;
LABEL_7:
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    if ( KeGetCurrentIrql() > 2u )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 1120), (PSLIST_ENTRY)(a2 + 32));
      LOBYTE(v4) = KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v3 + 8) + 200LL), 0LL, 0LL);
    }
    else
    {
      LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(a2 + 656))(a2);
    }
    return v4;
  }
  if ( (unsigned int)dword_140172178 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v5 = *(const wchar_t **)(v3 + 1032);
      v17 = &v15;
      v15 = 0x1000000LL;
      v19 = v3 + 1048;
      v14 = *(_DWORD *)(v3 + 56);
      v21 = &v14;
      v18 = 8LL;
      v20 = 16LL;
      v22 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v23, v5);
      v6 = *(const wchar_t **)(v3 + 1040);
      v7 = (*(_BYTE *)(v3 + 144) & 1) != 0;
      v25 = 1LL;
      v13 = v7 ? 20 : 17;
      v24 = &v13;
      tlgCreate1Sz_wchar_t((__int64)v26, v6);
      LOBYTE(v4) = tlgWriteEx_EtwWriteEx((__int64)v16, (unsigned __int8 *)dword_140164FF4, v8, v9, v11, v12, 8u, v16);
    }
  }
  return v4;
}
