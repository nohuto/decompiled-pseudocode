/*
 * XREFs of ?GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x14007B438
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x14007B620 (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepBatchTextOutRect(struct XDCOBJ *a1, struct _BATCHTEXTOUTRECT *a2, unsigned int a3)
{
  __int64 v4; // rcx
  int v5; // esi
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE v12[8]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v13[40]; // [rsp+40h] [rbp-48h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( a3 < 0x28 )
    return 0LL;
  GreProbeAndReadFromUntrustedVa(v13, 0x28uLL, a2, 0x28uLL, 4uLL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v5 = *(_DWORD *)(v4 + 176);
  v6 = *(_DWORD *)(v4 + 180);
  if ( v5 != *(_DWORD *)&v13[4] )
  {
    *(_DWORD *)(v4 + 176) = *(_DWORD *)&v13[4];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = *(_DWORD *)&v13[36];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
  }
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v8 = *(_QWORD *)(v7 + 324);
  if ( v8 != *(_QWORD *)&v13[28] )
  {
    *(_DWORD *)(v7 + 324) = *(_DWORD *)&v13[28];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = *(_DWORD *)&v13[32];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  ExtTextOutRect(v12, a1, &v13[12]);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_DWORD *)(v9 + 176) != v5 )
  {
    *(_DWORD *)(v9 + 176) = v5;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = v6;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
  }
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( v8 != *(_QWORD *)(v10 + 324) )
  {
    *(_DWORD *)(v10 + 324) = v8;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = HIDWORD(v8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  return 1LL;
}
