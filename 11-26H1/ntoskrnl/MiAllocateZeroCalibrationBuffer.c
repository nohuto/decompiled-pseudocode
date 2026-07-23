/*
 * XREFs of MiAllocateZeroCalibrationBuffer @ 0x140714E1C
 * Callers:
 *     MiZeroPageCalibrate @ 0x140715C7C (MiZeroPageCalibrate.c)
 * Callees:
 *     MiUpdateProtectionMask @ 0x1402E58D0 (MiUpdateProtectionMask.c)
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiFreeZeroCalibrationBuffer @ 0x14071542C (MiFreeZeroCalibrationBuffer.c)
 */

__int64 __fastcall MiAllocateZeroCalibrationBuffer(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  int v9; // r10d
  __int64 result; // rax
  _BOOL8 v11; // rbp
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // r12
  _QWORD *PagesForMdl; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  _QWORD *v20; // r14
  _QWORD *i; // r8
  _QWORD *v22; // r12
  unsigned __int64 v23; // rbp
  int v24[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int updated; // [rsp+A8h] [rbp+20h]

  v24[0] = 0;
  updated = MiUpdateProtectionMask(4u, a5);
  result = 0x100000000LL;
  v11 = (v7 & 0xFFF) != 0;
  v12 = v7 >> 12;
  v13 = v12 + v11;
  if ( v13 < 0x100000000LL )
  {
    v14 = 0LL;
    v15 = 0LL;
    while ( v14 != v13 )
    {
      v16 = v13 - v14;
      if ( v13 - v14 > 0xFFFFF )
        v16 = 0xFFFFFLL;
      PagesForMdl = MiAllocatePagesForMdl(
                      v9,
                      0,
                      -1,
                      0LL,
                      v16 << 12,
                      a5,
                      a3,
                      7,
                      (__int64)KeGetCurrentThread()->ApcState.Process,
                      0LL);
      if ( !PagesForMdl )
        return MiFreeZeroCalibrationBuffer(a1);
      v9 = a2;
      v14 += v16;
      *PagesForMdl = v15;
      v15 = PagesForMdl;
    }
    v18 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v13, v8, v12);
    v19 = v18;
    if ( !v18 )
      return MiFreeZeroCalibrationBuffer(a1);
    v20 = (_QWORD *)v18;
    for ( i = v15; i; i = v22 )
    {
      v22 = (_QWORD *)*i;
      v23 = (unsigned __int64)*((unsigned int *)i + 10) >> 12;
      if ( (int)MiFillSystemPtes(v20, v23, (__int64)(i + 6), updated, 0, v24) < 0 )
        return MiFreeZeroCalibrationBuffer(a1);
      v20 += v23;
    }
    *(_QWORD *)(a1 + 288) = v15;
    result = 0LL;
    *(_QWORD *)(a1 + 272) = (__int64)(v19 << 25) >> 16;
  }
  return result;
}
