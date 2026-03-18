/*
 * XREFs of PspProcessQosChangeNotificationInsertList @ 0x140615240
 * Callers:
 *     PspEnqueueProcessQosChangeNotification @ 0x1404C6FF8 (PspEnqueueProcessQosChangeNotification.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PspProcessQosChangeNotificationInsertList(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  int v4; // [rsp+30h] [rbp-68h] BYREF
  __int64 v5; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  int *v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  __int64 *v9; // [rsp+70h] [rbp-28h]
  __int64 v10; // [rsp+78h] [rbp-20h]

  v2 = (_QWORD *)(a1 + 2104);
  if ( *(_QWORD *)(a1 + 2104) == 1LL )
  {
    *v2 = *a2;
    *a2 = v2;
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
      && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 1LL) )
    {
      v4 = *(_DWORD *)(a1 + 464);
      v8 = 4LL;
      v7 = &v4;
      v5 = 0x1000000LL;
      v9 = &v5;
      v10 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
        (unsigned __int8 *)word_140052642,
        0LL,
        0LL,
        4u,
        &v6);
    }
  }
}
