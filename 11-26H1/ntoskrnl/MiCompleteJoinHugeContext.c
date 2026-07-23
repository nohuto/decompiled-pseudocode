/*
 * XREFs of MiCompleteJoinHugeContext @ 0x14035A938
 * Callers:
 *     MiJoinHugeContext @ 0x140358884 (MiJoinHugeContext.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14035A1D0 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompleteJoinHugeContext(__int64 a1, __int64 a2, __int64 *a3, __int16 a4)
{
  bool v4; // zf
  __int64 result; // rax
  unsigned __int64 v6; // rcx

  v4 = *((_BYTE *)a3 + 8) == 0;
  result = *a3;
  *(_WORD *)(a2 + 320) = a4;
  *(_DWORD *)(a2 + 64) = 0;
  if ( v4 )
  {
    v6 = ((result - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
    result = *(_QWORD *)&stru_140E2ED08.SystemCallNumber;
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber + 4 * (v6 >> 5)),
      ~(1 << v6));
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
