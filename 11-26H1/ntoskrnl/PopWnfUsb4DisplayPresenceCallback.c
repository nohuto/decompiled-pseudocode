/*
 * XREFs of PopWnfUsb4DisplayPresenceCallback @ 0x1407DA420
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopDiagTraceExternalDisplayState @ 0x1407D668C (PopDiagTraceExternalDisplayState.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopWnfUsb4DisplayPresenceCallback(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  int v4; // esi
  char v5; // di
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  __int64 v21; // [rsp+20h] [rbp-E0h]
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-90h] BYREF
  int *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  int *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  unsigned int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  int *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  char *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  int *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  int *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  int *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  __int64 *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]

  v25 = a4;
  v23 = 0;
  v4 = 0;
  v24 = 0;
  v5 = 0;
  v6 = 0;
  if ( !a2 || *a2 != WNF_USB_USB4_DISPLAY_PRESENCE )
  {
    v4 = 1;
    goto LABEL_16;
  }
  v24 = 4;
  v9 = ExQueryWnfStateData(a1, &v25, &v23, &v24);
  if ( v9 < 0 )
  {
    v4 = 2;
    goto LABEL_17;
  }
  if ( v24 < 4 )
  {
    v4 = 3;
LABEL_16:
    v9 = 0;
    goto LABEL_17;
  }
  if ( (_BYTE)v23 != 1 )
  {
    v6 = (unsigned __int8)v23;
    v4 = 4;
    goto LABEL_16;
  }
  PopAcquirePolicyLock(v8, v7);
  v5 = BYTE1(v23) != 0;
  if ( PopUsb4DisplayPresent == (BYTE1(v23) != 0) )
  {
    PopReleasePolicyLock(v11, v10, v12, v13, v21);
  }
  else
  {
    v14 = PopConsoleExternalDisplayConnected;
    PopUsb4DisplayPresent = BYTE1(v23) != 0;
    PopQueueWorkItem((__int64)&PopUsb4DisplayPresenceUpdatedWorkItem, DelayedWorkQueue);
    PopReleasePolicyLock(v16, v15, v17, v18, v21);
    v19 = 2;
    if ( v5 && v14 )
      v19 = 3;
    PopDiagTraceExternalDisplayState(v5, v19);
  }
LABEL_17:
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v26 = v9;
    v35 = &v26;
    v36 = 4LL;
    v37 = &v27;
    v28 = v24;
    v27 = v4;
    v39 = &v28;
    v41 = &v29;
    v43 = &v22;
    v45 = &v30;
    v47 = &v31;
    v32 = v25;
    v49 = &v32;
    v51 = &v33;
    v38 = 4LL;
    v40 = 4LL;
    v29 = 4;
    v42 = 4LL;
    v22 = v5;
    v44 = 1LL;
    v30 = v6;
    v46 = 4LL;
    v31 = 1;
    v48 = 4LL;
    v50 = 4LL;
    v33 = 0x1000000LL;
    v52 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07560,
      (unsigned __int8 *)&word_14004D7B6,
      0LL,
      0LL,
      0xBu,
      &v34);
  }
  return (unsigned int)v9;
}
