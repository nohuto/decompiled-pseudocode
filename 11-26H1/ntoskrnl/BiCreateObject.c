/*
 * XREFs of BiCreateObject @ 0x1409A3A50
 * Callers:
 *     BcdCreateObject @ 0x140777E00 (BcdCreateObject.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409A0B80 (BiBindEfiEntryToBcdObject.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     BiStringFromGUID @ 0x1409A48E8 (BiStringFromGUID.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiCreateKey @ 0x1409A6848 (BiCreateKey.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 *     BiIsObjectAliased @ 0x140B280AC (BiIsObjectAliased.c)
 *     BiIsValidObject @ 0x140B3AA68 (BiIsValidObject.c)
 *     BiSetObjectDescription @ 0x140B56BF0 (BiSetObjectDescription.c)
 */

NTSTATUS __fastcall BiCreateObject(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r9
  __int64 v8; // r8
  unsigned int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // r11
  int v12; // ebx
  UUID *p_Uuid; // r11
  NTSTATUS result; // eax
  int v15; // eax
  HANDLE v16; // rdi
  _BYTE v17[8]; // [rsp+30h] [rbp-81h] BYREF
  HANDLE v18; // [rsp+38h] [rbp-79h] BYREF
  __int64 v19; // [rsp+40h] [rbp-71h] BYREF
  char *v20; // [rsp+48h] [rbp-69h]
  HANDLE v21; // [rsp+50h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp-51h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-49h] BYREF
  char v25; // [rsp+80h] [rbp-31h] BYREF

  v19 = 5111808LL;
  v20 = &v25;
  v18 = 0LL;
  *a5 = 0LL;
  v5 = a3[1];
  v21 = 0LL;
  Handle = 0LL;
  v8 = *a3;
  Uuid = 0LL;
  BiLogMessage(2LL, L"Creating object. Version: %d. Type: 0x%08x", v8, v5);
  if ( !(unsigned __int8)BiIsValidObject(a3, v10, v9) )
    return -1073741637;
  if ( v11 )
  {
    if ( (unsigned __int8)BiIsObjectAliased(v11, v23) )
      return -1073741773;
  }
  else
  {
    BiLogMessage(2LL, L"Generating object GUID.");
    result = ExUuidCreate(&Uuid);
    if ( result < 0 )
      return result;
    p_Uuid = &Uuid;
  }
  BiStringFromGUID(p_Uuid, &v19);
  BiLogMessage(2LL, L"Object GUID: %s", v20);
  v12 = BiOpenKey(a1, L"Objects", 4LL, &v18);
  if ( v12 >= 0 )
  {
    v15 = BiCreateKey(v18, v20, 983103LL, 0LL, &v21, v17);
    v16 = v21;
    v12 = v15;
    if ( v15 < 0 )
      goto LABEL_16;
    v12 = BiSetObjectDescription(v21, a3);
    if ( v12 < 0 )
      goto LABEL_16;
    v12 = BiCreateKey(v16, L"Elements", 131097LL, 0LL, &Handle, v17);
    if ( v12 >= 0 )
    {
      *a5 = v16;
      v12 = 0;
    }
    if ( Handle )
      BiCloseKey(Handle);
    if ( v12 < 0 )
    {
LABEL_16:
      if ( v16 )
        BiCloseKey(v16);
    }
  }
  if ( v18 )
    BiCloseKey(v18);
  return v12;
}
