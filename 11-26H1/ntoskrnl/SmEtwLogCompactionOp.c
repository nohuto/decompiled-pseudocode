/*
 * XREFs of SmEtwLogCompactionOp @ 0x140529FD0
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x140394E70 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14042F938 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14042FA74 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406411CC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall SmEtwLogCompactionOp(
        REGHANDLE *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  const EVENT_DESCRIPTOR *v13; // rsi
  __int64 *v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  ULONG UserDataCount; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-A1h] BYREF
  int *v22; // [rsp+50h] [rbp-91h]
  __int64 v23; // [rsp+58h] [rbp-89h]
  char *v24; // [rsp+60h] [rbp-81h]
  __int64 v25; // [rsp+68h] [rbp-79h]
  char *v26; // [rsp+70h] [rbp-71h]
  __int64 v27; // [rsp+78h] [rbp-69h]
  char *v28; // [rsp+80h] [rbp-61h]
  __int64 v29; // [rsp+88h] [rbp-59h]
  char *v30; // [rsp+90h] [rbp-51h]
  __int64 v31; // [rsp+98h] [rbp-49h]
  char *v32; // [rsp+A0h] [rbp-41h]
  __int64 v33; // [rsp+A8h] [rbp-39h]
  char *v34; // [rsp+B0h] [rbp-31h]
  __int64 v35; // [rsp+B8h] [rbp-29h]
  char *v36; // [rsp+C0h] [rbp-21h]
  __int64 v37; // [rsp+C8h] [rbp-19h]
  __int64 v38; // [rsp+120h] [rbp+3Fh] BYREF
  int v39; // [rsp+128h] [rbp+47h] BYREF

  v39 = a4;
  v38 = a3;
  v13 = (const EVENT_DESCRIPTOR *)*((_QWORD *)&SmEtwDescriptorPtrs + a2);
  LOBYTE(v14) = EtwEventEnabled(*a1, v13);
  if ( (_BYTE)v14 )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    v14 = &v38;
    UserData.Ptr = (ULONGLONG)&v38;
    v15 = a2 - 11;
    if ( !v15 )
    {
      v35 = 4LL;
      v24 = &a5;
      v22 = &v39;
      v26 = &a6;
      UserDataCount = 9;
      v37 = 4LL;
      v28 = &a7;
      v30 = &a8;
      v32 = &a9;
      v34 = &a10;
      v36 = &a11;
      goto LABEL_11;
    }
    v16 = v15 - 1;
    if ( !v16 || (v17 = v16 - 1) == 0 )
    {
      v22 = &v39;
      UserDataCount = 2;
LABEL_13:
      v23 = 4LL;
      LOBYTE(v14) = EtwWriteEx(*a1, v13, 0LL, 1u, 0LL, 0LL, UserDataCount, &UserData);
      return (char)v14;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v22 = &v39;
      UserDataCount = 3;
      v24 = &a5;
LABEL_12:
      v25 = 4LL;
      goto LABEL_13;
    }
    if ( v18 == 1 )
    {
      v24 = &a5;
      v22 = &v39;
      v26 = &a6;
      UserDataCount = 7;
      v28 = &a7;
      v30 = &a8;
      v32 = &a9;
LABEL_11:
      v33 = 4LL;
      v31 = 4LL;
      v29 = 4LL;
      v27 = 4LL;
      goto LABEL_12;
    }
  }
  return (char)v14;
}
