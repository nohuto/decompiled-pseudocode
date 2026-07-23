/*
 * XREFs of SdbGetDatabaseMatch @ 0x140A37C6C
 * Callers:
 *     PiIsDriverBlocked @ 0x140A3814C (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SdbTagIDToTagRef @ 0x14088BFF0 (SdbTagIDToTagRef.c)
 *     AslFileMappingCreateFromImageView @ 0x14088EC98 (AslFileMappingCreateFromImageView.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFileMappingDelete @ 0x1409D772C (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 *     SdbpSearchDB @ 0x140A96E98 (SdbpSearchDB.c)
 *     SdbpReleaseSearchDBContext @ 0x140B406B0 (SdbpReleaseSearchDBContext.c)
 *     SdbpCreateSearchDBContext @ 0x140B59B58 (SdbpCreateSearchDBContext.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 i; // rbx
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[108]; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v18[32]; // [rsp+B0h] [rbp-50h] BYREF

  memset_0(v17, 0, 0x64uLL);
  memset_0(v18, 0, sizeof(v18));
  v8 = 10;
  v14 = 0;
  v15 = 0LL;
  if ( a4 )
    v8 = 26;
  v16 = v8;
  if ( (int)AslFileMappingCreate((unsigned int)&v15, (_DWORD)a2, -1, a4, a5) < 0
    && (!a4 || (int)AslFileMappingCreateFromImageView(&v15, a2, a4, a5) < 0) )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbGetDatabaseMatch");
    goto LABEL_21;
  }
  if ( !(unsigned int)SdbpCreateSearchDBContext(&v16, v15) )
  {
LABEL_20:
    AslLogCallPrintf(1LL, (__int64)"SdbGetDatabaseMatch");
    goto LABEL_21;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( !v10 )
  {
LABEL_12:
    v10 = *(_QWORD *)(a1 + 8);
    v11 = SdbpSearchDB(a1, v10, v9, &v16, v18);
    if ( v11 <= 0x10 )
    {
      if ( !v11 )
        goto LABEL_21;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v11 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 16), v9, &v16, v18);
  if ( v11 <= 0x10 )
  {
    if ( v11 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_13:
  AslLogCallPrintf(1LL, (__int64)"SdbGetDatabaseMatch");
  v11 = 16;
LABEL_15:
  for ( i = (int)(v11 - 1); i >= 0; --i )
  {
    if ( (v18[2 * i + 1] & 2) == 0 && !(unsigned int)SdbTagIDToTagRef(a1, v10, (unsigned int)v18[2 * i], (int *)&v14) )
      goto LABEL_20;
  }
LABEL_21:
  SdbpReleaseSearchDBContext(&v16);
  AslFileMappingDelete(v15);
  return v14;
}
