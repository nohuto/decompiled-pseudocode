/*
 * XREFs of PspCheckCpuPartitionCreateAccess @ 0x1407F84B0
 * Callers:
 *     PsCreateCpuPartition @ 0x1407F81C0 (PsCreateCpuPartition.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 */

__int64 __fastcall PspCheckCpuPartitionCreateAccess(char a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned int v4; // [rsp+64h] [rbp-1A4h] BYREF
  _BYTE v5[32]; // [rsp+70h] [rbp-198h] BYREF
  int v6[32]; // [rsp+90h] [rbp-178h] BYREF
  _BYTE v7[224]; // [rsp+110h] [rbp-F8h] BYREF

  memset_0(v5, 0, 0xA0uLL);
  memset_0(v7, 0, sizeof(v7));
  v4 = 0;
  if ( !a1 )
    return 0LL;
  result = SeCreateAccessState(v5, v7, 0x2000000LL, &PsCpuPartitionType->TypeInfo.GenericMapping);
  v3 = result;
  if ( (int)result >= 0 )
  {
    SeAccessCheckWithHint(
      PsCpuPartitionDefaultSd,
      7,
      v6,
      0,
      0x2000000u,
      0,
      0LL,
      &PsCpuPartitionType->TypeInfo.GenericMapping.GenericRead,
      a1,
      &v4,
      (int *)&v3);
    SeDeleteAccessState(v5);
    return v3;
  }
  return result;
}
