/*
 * XREFs of NvmeAdapterRequestDirectComplete @ 0x1400DC60C
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x14000E920 (RaidLogMiniportCompletion.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14003F1BC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeAdapterRequestDirectComplete(__int64 a1, __int64 a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  ULONG_PTR v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  const wchar_t *v12; // rdx
  const wchar_t *v13; // rdx
  bool v14; // cf
  __int64 v15; // r8
  __int64 v16; // r9
  int BugCheckParameter4; // [rsp+20h] [rbp-89h]
  int v18; // [rsp+28h] [rbp-81h]
  char v19; // [rsp+40h] [rbp-69h] BYREF
  int v20; // [rsp+44h] [rbp-65h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22[2]; // [rsp+60h] [rbp-49h] BYREF
  ULONG_PTR *v23; // [rsp+80h] [rbp-29h]
  __int64 v24; // [rsp+88h] [rbp-21h]
  __int64 v25; // [rsp+90h] [rbp-19h]
  __int64 v26; // [rsp+98h] [rbp-11h]
  int *v27; // [rsp+A0h] [rbp-9h]
  __int64 v28; // [rsp+A8h] [rbp-1h]
  char v29[16]; // [rsp+B0h] [rbp+7h] BYREF
  char *v30; // [rsp+C0h] [rbp+17h]
  __int64 v31; // [rsp+C8h] [rbp+1Fh]
  char v32[16]; // [rsp+D0h] [rbp+27h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  v8 = CurrentIrql;
  if ( CurrentIrql > 2u )
  {
    v9 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)BugCheckParameter2 = 0LL;
    RaidDriverGetName(v9, (__int64)BugCheckParameter2);
    KeBugCheckEx(0xF0u, 5uLL, BugCheckParameter2[1], *(_QWORD *)(a2 + 168), v8);
  }
  if ( (qword_140172448 & 8) != 0 )
    RaidLogMiniportCompletion((_QWORD *)a2);
  v10 = *(_QWORD *)(a2 + 160);
  v11 = 0LL;
  if ( !v10 )
    goto LABEL_9;
  LOBYTE(v6) = *(_BYTE *)(v10 + 141);
  if ( (_BYTE)v6 != 0xAB && (_BYTE)v6 != 0xAC )
  {
    *(_BYTE *)(v10 + 141) = -85;
LABEL_9:
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    if ( *(_QWORD *)(a2 + 656) )
    {
      if ( (unsigned __int8)v8 < 2u )
        LOBYTE(v8) = KfRaiseIrql(2u);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 656))(a2, v5, v7, v11);
      if ( (unsigned __int8)v8 < 2u )
        KeLowerIrql(v8);
    }
    return;
  }
  if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v6, 0x400000000000LL) )
  {
    v12 = *(const wchar_t **)(a1 + 1032);
    v23 = BugCheckParameter2;
    BugCheckParameter2[0] = 0x1000000LL;
    v25 = a1 + 1048;
    v20 = *(_DWORD *)(a1 + 56);
    v27 = &v20;
    v24 = 8LL;
    v26 = 16LL;
    v28 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v29, v12);
    v13 = *(const wchar_t **)(a1 + 1040);
    v14 = (*(_BYTE *)(a1 + 144) & 1) != 0;
    v31 = 1LL;
    v19 = v14 ? 20 : 17;
    v30 = &v19;
    tlgCreate1Sz_wchar_t((__int64)v32, v13);
    tlgWriteEx_EtwWriteEx((__int64)v22, (unsigned __int8 *)dword_140165077, v15, v16, BugCheckParameter4, v18, 8u, v22);
  }
}
