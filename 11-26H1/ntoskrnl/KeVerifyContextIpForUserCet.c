/*
 * XREFs of KeVerifyContextIpForUserCet @ 0x1403DA270
 * Callers:
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 * Callees:
 *     KiVerifyContextIpForUserCet @ 0x1403DA4D0 (KiVerifyContextIpForUserCet.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403DA6D0 (KiLogUserCetSetContextIpValidationFailure.c)
 */

__int64 __fastcall KeVerifyContextIpForUserCet(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r14
  unsigned int v8; // esi
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx

  if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 184);
  v8 = *(_DWORD *)(v7 + 1876);
  if ( (v8 & 0x20000) == 0 || (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001 )
    return 0LL;
  v9 = v8 >> 31;
  result = KiVerifyContextIpForUserCet(a1, a2, (_DWORD)a3, (unsigned __int8)v9, a4);
  if ( (_DWORD)result == -1073740278 )
  {
    v10 = *(_QWORD *)(a2 + 248);
    v11 = (unsigned __int8)v9 ^ 1u;
    v12 = *a3;
    if ( (*(_DWORD *)(v7 + 1876) & 0x40000) != 0 )
    {
      KiLogUserCetSetContextIpValidationFailure(1LL, v12, v10, v11);
      return 0LL;
    }
    else
    {
      KiLogUserCetSetContextIpValidationFailure(2LL, v12, v10, v11);
      return 3221227018LL;
    }
  }
  return result;
}
