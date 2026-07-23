/*
 * XREFs of EtwpExtractCompactedAffinity @ 0x1406C9190
 * Callers:
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 * Callees:
 *     KeFindFirstSetLeftGroupMask @ 0x140200760 (KeFindFirstSetLeftGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140200980 (KeFindFirstSetRightGroupMask.c)
 *     KeComputeGroupMask @ 0x140200A08 (KeComputeGroupMask.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpExtractCompactedAffinity(
        unsigned __int16 *a1,
        _OWORD *a2,
        unsigned __int8 *a3,
        _QWORD *a4,
        _WORD *a5)
{
  __int64 FirstSetRightGroupMask; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int16 FirstSetLeftGroupMask; // r9
  unsigned __int16 v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdx
  char v16; // al
  unsigned __int8 v17; // cl
  __int64 result; // rax
  __int64 v19; // [rsp+18h] [rbp-50h]
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF

  v20 = 0LL;
  KeComputeGroupMask(a1, &v20);
  FirstSetRightGroupMask = (unsigned __int16)KeFindFirstSetRightGroupMask((__int64 *)&v20);
  FirstSetLeftGroupMask = KeFindFirstSetLeftGroupMask(&v20, v10, v11);
  v13 = FirstSetRightGroupMask + 1;
  if ( (unsigned __int16)(FirstSetRightGroupMask + 1) < FirstSetLeftGroupMask )
  {
    v14 = v13;
    do
    {
      v15 = v14 >> 3;
      v16 = v13++ & 7;
      ++v14;
      *((_BYTE *)&v20 + v15) |= 1 << v16;
    }
    while ( v13 < FirstSetLeftGroupMask );
  }
  v17 = 2;
  do
  {
    result = v17;
    if ( *(&v19 + v17) )
      break;
    --v17;
  }
  while ( v17 );
  *a2 = v20;
  *a3 = v17;
  *a4 = &a1[4 * FirstSetRightGroupMask + 4];
  *a5 = FirstSetLeftGroupMask - FirstSetRightGroupMask + 1;
  return result;
}
