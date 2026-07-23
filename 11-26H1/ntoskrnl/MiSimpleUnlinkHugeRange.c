/*
 * XREFs of MiSimpleUnlinkHugeRange @ 0x140488420
 * Callers:
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14053141C (MiCanBeginHugeIoPageAccessor.c)
 * Callees:
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406F2B2C (MiUpdateHugeRangeZeroFreeBitmap.c)
 */

unsigned __int64 __fastcall MiSimpleUnlinkHugeRange(unsigned __int64 *a1, __int64 a2, int a3)
{
  int v4; // edx
  __int64 v5; // r10
  _QWORD *v6; // r9
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 result; // rax

  MiHugePfnPartition((_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (*(_QWORD *)&a3 & 0x3FFFFFLL)));
  v7 = *v6 >> 15;
  v8 = *v6 >> 37;
  v9 = v7 << 15;
  v10 = v7 & 0x3FFFFF;
  if ( (v8 & 0x3FFFFF) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (v8 & 0x3FFFFF)) = v9 ^ (*(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (v8 & 0x3FFFFF)) ^ v9) & 0xFFFFFFE000007FFFuLL;
  }
  else
  {
    *a1 = v9 ^ (*a1 ^ v9) & 0xFFFFFFE000007FFFuLL;
    if ( !v10 && v4 != 5 )
    {
      MiUpdateHugeRangeZeroFreeBitmap(v5);
      v11 = v8 << 37;
LABEL_7:
      result = 0xF800001FFFFFFFFFuLL;
      *a1 = v11 ^ (*a1 ^ v11) & 0xF800001FFFFFFFFFuLL;
      return result;
    }
  }
  v11 = v8 << 37;
  if ( !v10 )
    goto LABEL_7;
  result = 0xF800001FFFFFFFFFuLL;
  *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v10) = v11 ^ (*(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4)
                                                                                         + 8 * v10) ^ v11) & 0xF800001FFFFFFFFFuLL;
  return result;
}
