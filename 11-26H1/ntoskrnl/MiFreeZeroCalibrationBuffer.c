/*
 * XREFs of MiFreeZeroCalibrationBuffer @ 0x14071542C
 * Callers:
 *     MiAllocateZeroCalibrationBuffer @ 0x140714E1C (MiAllocateZeroCalibrationBuffer.c)
 *     MiZeroPageCalibrate @ 0x140715C7C (MiZeroPageCalibrate.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeZeroCalibrationBuffer(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx

  v1 = a1[34];
  if ( v1 )
    MiReleasePtes(
      (__int64)&stru_140E366D8.WaitBlockList,
      (unsigned __int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
      (a1[35] >> 12) + ((a1[35] & 0xFFFLL) != 0));
  v3 = (_QWORD *)a1[36];
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      MiFreePagesFromMdl((ULONG_PTR)v3, 0, 0, 0);
      ExFreePoolWithTag(v3, 0);
      v3 = v4;
    }
    while ( v4 );
  }
  a1[34] = 0LL;
  a1[36] = 0LL;
}
