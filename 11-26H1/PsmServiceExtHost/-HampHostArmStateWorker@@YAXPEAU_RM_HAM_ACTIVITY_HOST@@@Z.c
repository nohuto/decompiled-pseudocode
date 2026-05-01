/*
 * XREFs of ?HampHostArmStateWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000A530
 * Callers:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampHostArmStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-48h] BYREF
  void *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+70h] [rbp-28h]
  __int64 v9; // [rsp+78h] [rbp-20h]

  if ( (*((_QWORD *)a1 + 83) & 0x400000000LL) == 0 )
  {
    if ( (unsigned int)dword_1800E12B0 > 4
      && (qword_1800E12C0 & 0x40) != 0
      && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    {
      v2 = *((_QWORD *)a1 - 3);
      v9 = 8LL;
      v8 = &v2;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E12B8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 64LL;
      UserData.Size = *(unsigned __int16 *)off_1800E12B8;
      v5 = &unk_1800CD3EF;
      UserData.Reserved = 2;
      v6 = 34;
      v7 = 1;
      EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
    }
    *((_QWORD *)a1 + 83) |= 0x400000000uLL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 5) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*((_QWORD *)a1 + 80));
  }
}
