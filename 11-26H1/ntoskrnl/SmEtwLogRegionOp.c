/*
 * XREFs of SmEtwLogRegionOp @ 0x140642F34
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140395AF4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmEtwRegionRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140641804 (-StDmEtwRegionRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmEtwLogRegionOp(REGHANDLE *a1, unsigned int a2, __int64 a3, int a4, __int64 a5, char a6)
{
  REGHANDLE v6; // rcx
  const EVENT_DESCRIPTOR *v7; // rdx
  __int16 v9; // [rsp+48h] [rbp-31h] BYREF
  int v10; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+58h] [rbp-21h] BYREF
  int *v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  int *v14; // [rsp+78h] [rbp-1h]
  __int64 v15; // [rsp+80h] [rbp+7h]
  char *v16; // [rsp+88h] [rbp+Fh]
  __int64 v17; // [rsp+90h] [rbp+17h]
  __int16 *v18; // [rsp+98h] [rbp+1Fh]
  __int64 v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+D8h] [rbp+5Fh] BYREF
  int v21; // [rsp+E0h] [rbp+67h] BYREF

  v21 = a4;
  v20 = a3;
  v6 = *a1;
  v11.Ptr = (ULONGLONG)&v20;
  v9 = 0;
  v12 = &v21;
  v10 = 0;
  v7 = (const EVENT_DESCRIPTOR *)*((_QWORD *)&SmEtwDescriptorPtrs + a2);
  v14 = &v10;
  v16 = &a6;
  v18 = &v9;
  *(_QWORD *)&v11.Size = 8LL;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 2LL;
  v19 = 2LL;
  return EtwWriteEx(v6, v7, 0LL, 1u, 0LL, 0LL, 5u, &v11);
}
