/*
 * XREFs of EtwpEventWriteRegistrationStatus @ 0x14082B850
 * Callers:
 *     EtwpSetProviderTraitsKm @ 0x140918EBC (EtwpSetProviderTraitsKm.c)
 *     EtwpSetProviderTraitsUm @ 0x140918FB0 (EtwpSetProviderTraitsUm.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteRegistrationStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]

  v6.Ptr = *(_QWORD *)(a4 + 32) + 40LL;
  *(_QWORD *)&v6.Size = 16LL;
  v7 = &a5;
  v8 = 4LL;
  return EtwWrite(
           (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
           &ETW_EVENT_SET_TRAITS_FAILED,
           0LL,
           2u,
           &v6);
}
