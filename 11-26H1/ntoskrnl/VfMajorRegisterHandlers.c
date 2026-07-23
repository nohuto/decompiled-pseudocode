/*
 * XREFs of VfMajorRegisterHandlers @ 0x140C374E0
 * Callers:
 *     ViIovInitialization @ 0x140C30C7C (ViIovInitialization.c)
 * Callees:
 *     <none>
 */

void __fastcall VfMajorRegisterHandlers(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rax
  __int64 v14; // rcx

  if ( a1 == 0xFF )
  {
    v13 = 28LL;
  }
  else
  {
    if ( a1 > 0x1Bu )
      return;
    v13 = a1;
  }
  v14 = 96 * v13;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 24) = a5;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 32) = a6;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 40) = a7;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 48) = a8;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 56) = a9;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 64) = a10;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 72) = a11;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 80) = a12;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 88) = a13;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 8) = a3;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14 + 16) = a4;
  *(_QWORD *)((char *)&ViMajorVerifierRoutines + v14) = a2;
}
