/*
 * XREFs of EtwpEventWriteTemplateInvalidGroupMask @ 0x14082B96C
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x1404C6488 (EtwpUpdateSelectedGroupMasks.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateInvalidGroupMask(__int64 a1, __int64 a2, unsigned __int16 *a3, ULONGLONG a4)
{
  struct _LIST_ENTRY *Blink; // r11
  ULONG v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  int *v10; // rdx
  __int64 v11; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]

  Blink = stru_140F03830.SavedApcState.ApcListHead[0].Blink;
  v6 = 2;
  UserData.Ptr = *((_QWORD *)a3 + 1);
  UserData.Size = *a3;
  v7 = 8LL;
  v14 = &EtwpNull;
  v8 = 8LL;
  UserData.Reserved = 0;
  v15 = 2LL;
  do
  {
    v9 = v6++;
    v9 *= 2LL;
    *(&UserData.Ptr + v9) = a4;
    a4 += 4LL;
    *((_QWORD *)&UserData.Size + v9) = 4LL;
    --v8;
  }
  while ( v8 );
  v10 = EtwpSiloAllowedGroupMask;
  do
  {
    v11 = v6++;
    v11 *= 2LL;
    *(&UserData.Ptr + v11) = (ULONGLONG)v10++;
    *((_QWORD *)&UserData.Size + v11) = 4LL;
    --v7;
  }
  while ( v7 );
  return EtwWrite((REGHANDLE)Blink, &ETW_EVENT_INVALID_GROUP_MASK, 0LL, v6, &UserData);
}
