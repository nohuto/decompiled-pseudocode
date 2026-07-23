/*
 * XREFs of ExpUuidGetValues @ 0x140A7FA40
 * Callers:
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 * Callees:
 *     ExpAllocateUuids @ 0x140A7FAD0 (ExpAllocateUuids.c)
 */

__int64 __fastcall ExpUuidGetValues(__int64 a1)
{
  int v2; // eax
  __int64 result; // rax
  __int32 v4; // r8d
  unsigned int v5; // eax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  __int32 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0;
  v6 = 0;
  v2 = ExpAllocateUuids(&v8, &v7, &v6);
  if ( v2 == -1073741267 )
    return 3221226029LL;
  if ( v2 < 0 )
    return 3221225495LL;
  v4 = v7;
  v5 = v6 >> 8;
  *(_BYTE *)(a1 + 13) = v6;
  *(_BYTE *)(a1 + 12) = v5 & 0x3F | 0x80;
  *(_QWORD *)a1 = v8 + (unsigned int)(v4 - 1) + 5748192000000000LL;
  result = 0LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 8), v4);
  return result;
}
