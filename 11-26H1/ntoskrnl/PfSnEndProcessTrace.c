/*
 * XREFs of PfSnEndProcessTrace @ 0x140ACAE28
 * Callers:
 *     PfSnFailProcessTrace @ 0x1409D3078 (PfSnFailProcessTrace.c)
 *     PfSnOperationProcess @ 0x140ACAAC0 (PfSnOperationProcess.c)
 *     PfProcessExitNotification @ 0x140ACACC4 (PfProcessExitNotification.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x1403769CC (PfSnReferenceProcessTrace.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall PfSnEndProcessTrace(__int64 a1, signed __int32 a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  char v21[16]; // [rsp+80h] [rbp-80h] BYREF
  int *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  char v24[16]; // [rsp+A0h] [rbp-60h] BYREF
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  unsigned int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  __int64 *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]

  if ( (unsigned int)dword_140E07398 > 4 && (byte_140E073A8 & 1) != 0 && (qword_140E073B0 & 1) == qword_140E073B0 )
  {
    v16 = a1;
    v32 = &v16;
    v33 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)&unk_140049C28, 0LL, 0LL, 3u, &v31);
  }
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( !a3 || !memcmp((const void *)a3, (const void *)(v6 + 24), 0x40uLL) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 400), a2, 0) )
      {
        v8 = -1073741431;
      }
      else
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 368), DelayedWorkQueue);
        v8 = 0;
      }
    }
    else
    {
      v8 = -1073741198;
    }
  }
  else
  {
    v8 = -1073741275;
  }
  if ( (unsigned int)dword_140E07398 > 4 && (byte_140E073A8 & 1) != 0 && (qword_140E073B0 & 1) == qword_140E073B0 )
  {
    v17 = a1;
    v19 = &v17;
    v20 = 8LL;
    tlgCreate1Sz_wchar_t(
      (__int64)v21,
      (const WCHAR *)((v7 + 24) & -(__int64)(v7 != 0) & ((unsigned __int128)-(__int128)((v7 + 24) & (unsigned __int64)-(__int64)(v7 != 0)) >> 64)));
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 60);
    else
      v11 = 0;
    v13 = v11;
    v23 = 4LL;
    v22 = &v13;
    tlgCreate1Sz_wchar_t((__int64)v24, (const WCHAR *)(a3 & ((unsigned __int128)-(__int128)a3 >> 64)));
    if ( a3 )
      v12 = *(_DWORD *)(a3 + 60);
    else
      v12 = 0;
    v14 = v12;
    v26 = 4LL;
    v25 = &v14;
    v15 = v8;
    v27 = &v15;
    v28 = 4LL;
    v29 = &v16;
    LODWORD(v16) = a2;
    v30 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)&word_140049C56, 0LL, 0LL, 9u, &v18);
  }
  if ( v7 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 360));
  return v8;
}
