/*
 * XREFs of SmEtwLogStoreCorruption @ 0x14064300C
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140641F60 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     SmGetPhysicalAddress @ 0x1404FEF68 (SmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SmEtwLogStoreCorruption(REGHANDLE *a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 *a6)
{
  BOOLEAN result; // al
  __int64 PhysicalAddress; // rax
  REGHANDLE v9; // rcx
  __int64 v10; // [rsp+40h] [rbp-69h] BYREF
  __int64 v11; // [rsp+48h] [rbp-61h] BYREF
  __int64 v12; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-39h]
  __int64 v15; // [rsp+78h] [rbp-31h]
  __int64 *v16; // [rsp+80h] [rbp-29h]
  __int64 v17; // [rsp+88h] [rbp-21h]
  char *v18; // [rsp+90h] [rbp-19h]
  __int64 v19; // [rsp+98h] [rbp-11h]
  __int64 *v20; // [rsp+A0h] [rbp-9h]
  __int64 v21; // [rsp+A8h] [rbp-1h]
  char *v22; // [rsp+B0h] [rbp+7h]
  __int64 v23; // [rsp+B8h] [rbp+Fh]
  char *v24; // [rsp+C0h] [rbp+17h]
  __int64 v25; // [rsp+C8h] [rbp+1Fh]
  __int64 v26; // [rsp+110h] [rbp+67h] BYREF

  v26 = a3;
  v11 = a4;
  v10 = *a6;
  result = EtwEventEnabled(*a1, (PCEVENT_DESCRIPTOR)StEventStoreCorruption);
  if ( result )
  {
    UserData.Ptr = (ULONGLONG)&v26;
    v14 = &v11;
    *(_QWORD *)&UserData.Size = 8LL;
    v15 = 8LL;
    PhysicalAddress = SmGetPhysicalAddress(v11);
    v9 = *a1;
    v12 = PhysicalAddress;
    v17 = 8LL;
    v16 = &v12;
    v19 = 2LL;
    v18 = &a5;
    v20 = &v10;
    v22 = (char *)&v10 + 1;
    v24 = (char *)&v10 + 4;
    v21 = 1LL;
    v23 = 1LL;
    v25 = 4LL;
    return EtwWriteEx(v9, (PCEVENT_DESCRIPTOR)StEventStoreCorruption, 0LL, 1u, 0LL, 0LL, 7u, &UserData);
  }
  return result;
}
