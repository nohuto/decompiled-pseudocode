/*
 * XREFs of MiIsAnyPartOfRangeInHugePfn @ 0x1406F1234
 * Callers:
 *     MiAcquireAddMemoryResources @ 0x14086B334 (MiAcquireAddMemoryResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAnyPartOfRangeInHugePfn(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  _KSCHEDULING_GROUP *v6; // r11
  __int64 *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  bool v11; // zf
  bool i; // zf
  __int64 v13; // rax

  v2 = 0;
  if ( !*(_QWORD *)&stru_140E2ED08.WaitRegister.Flags || a1 >> 18 >= 0x400000 )
    return 0LL;
  v3 = (a1 - 1 + a2) >> 18;
  if ( v3 >= 0x400000 )
    LODWORD(v3) = 0x3FFFFF;
  v4 = (a1 >> 18) & 0x3FFFFF;
  v5 = v3 & 0x3FFFFF;
  v6 = (_KSCHEDULING_GROUP *)(v5 - v4 + 1);
  if ( (_KSCHEDULING_GROUP *volatile)v4 >= stru_140E2ED08.SchedulingGroup )
    return 1LL;
  if ( (unsigned __int64)v6 <= 1 )
    return v5 != v4
        || _bittest64(
             (const signed __int64 *)(*(_QWORD *)&stru_140E2ED08.WaitRegister.Flags + 8 * (((a1 >> 18) & 0x3FFFFF) >> 6)),
             (a1 >> 18) & 0x3F);
  if ( (char *)stru_140E2ED08.SchedulingGroup - v4 < (char *)v6 )
    return 1LL;
  v8 = (__int64 *)(*(_QWORD *)&stru_140E2ED08.WaitRegister.Flags + 8 * (v4 >> 6));
  v9 = *v8;
  v10 = *(_QWORD *)&stru_140E2ED08.WaitRegister.Flags + 8 * (v5 >> 6);
  if ( v8 != (__int64 *)v10 )
  {
    for ( i = ((-1LL << (a1 >> 18)) & v9) == 0; i; i = v13 == 0 )
    {
      v13 = *++v8;
      if ( v8 == (__int64 *)v10 )
      {
        v11 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v5) & v13) == 0;
        goto LABEL_18;
      }
    }
    return 1LL;
  }
  v11 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << (a1 >> 18)) & v9) == 0;
LABEL_18:
  LOBYTE(v2) = !v11;
  return v2;
}
