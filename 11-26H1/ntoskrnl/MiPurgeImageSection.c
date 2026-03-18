/*
 * XREFs of MiPurgeImageSection @ 0x140B69DBC
 * Callers:
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 * Callees:
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 */

__int64 __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+50h] [rbp-18h]

  v1 = a1 + 128;
  result = 0LL;
  *(_OWORD *)v3 = 0LL;
  v5 = 0LL;
  v4 = 0LL;
  while ( v1 )
  {
    result = *(unsigned int *)(v1 + 32);
    if ( (result & 0x20000) != 0 )
      result = MiPurgeSubsection(
                 (struct _KTHREAD *)v1,
                 *(_QWORD *)(v1 + 8),
                 *(_QWORD *)(v1 + 8) + 8LL * *(unsigned int *)(v1 + 44),
                 5,
                 v3);
    v1 = *(_QWORD *)(v1 + 16);
  }
  return result;
}
