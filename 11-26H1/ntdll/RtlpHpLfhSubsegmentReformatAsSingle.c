/*
 * XREFs of RtlpHpLfhSubsegmentReformatAsSingle @ 0x180062764
 * Callers:
 *     RtlpHpLfhBucketGetSubsegment @ 0x180062B00 (RtlpHpLfhBucketGetSubsegment.c)
 * Callees:
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180063338 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180063920 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatAsSingle(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v8 = 0;
  if ( !(unsigned int)RtlpHpLfhSubsegmentReformatCheck(a1, a2, &v7, &v8) )
    return 3221226614LL;
  if ( a2[39] == 1 )
    return 0LL;
  if ( !v7
    || (result = ((__int64 (__fastcall *)(_QWORD, unsigned __int8 *, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
                   *(_QWORD *)a1,
                   &a2[v7 << 12 << a2[38]],
                   ((unsigned int)a2[39] - v7) << 12 << a2[38],
                   0LL),
        (int)result >= 0) )
  {
    if ( v8 )
      RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, ((-4096 * v8) << a2[38]) / 4096);
    v5 = *((unsigned __int16 *)a2 + 19);
    HIWORD(v7) = 0;
    _BitScanForward(&v6, v5 >> 8 << 12 << v5 >> 12);
    BYTE1(v7) = 1;
    LOBYTE(v7) = v6;
    *((_WORD *)a2 + 19) = v7;
    *(_WORD *)&a2[8 * a2[24]] = 1;
    return 0LL;
  }
  return result;
}
