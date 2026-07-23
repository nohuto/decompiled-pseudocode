/*
 * XREFs of EtwpEventWriteTemplateSessAndProv @ 0x140AAFF14
 * Callers:
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateSessAndProv(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 *a5,
        ULONGLONG a6)
{
  ULONG v6; // r8d
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 *v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]

  v6 = 2;
  if ( a4 == 2 )
  {
    UserData.Ptr = a6;
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    v10 = *a5;
    v12 = 2LL;
    v6 = 3;
    v11 = &EtwpNull;
    goto LABEL_5;
  }
  if ( a5 )
  {
    UserData.Ptr = *((_QWORD *)a5 + 1);
    UserData.Size = *a5;
    v9 = &EtwpNull;
    UserData.Reserved = 0;
    v10 = 2LL;
    return EtwWrite((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, a2, 0LL, v6, &UserData);
  }
  v6 = 0;
  if ( a6 )
  {
    UserData.Ptr = a6;
    v6 = 1;
LABEL_5:
    *(_QWORD *)&UserData.Size = 16LL;
  }
  return EtwWrite((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, a2, 0LL, v6, &UserData);
}
