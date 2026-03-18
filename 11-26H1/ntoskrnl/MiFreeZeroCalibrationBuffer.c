/*
 * XREFs of MiFreeZeroCalibrationBuffer @ 0x140710730
 * Callers:
 *     MiAllocateZeroCalibrationBuffer @ 0x140710120 (MiAllocateZeroCalibrationBuffer.c)
 *     MiZeroPageCalibrate @ 0x140710F80 (MiZeroPageCalibrate.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeZeroCalibrationBuffer(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx

  v1 = a1[34];
  if ( v1 )
    MiReleasePtes(
      (__int64)&stru_140E36558.WaitBlockList,
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
