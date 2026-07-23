/*
 * XREFs of KeFindFirstSetLeftGroupMask @ 0x140200760
 * Callers:
 *     EtwpExtractCompactedAffinity @ 0x1406C9190 (EtwpExtractCompactedAffinity.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     KeFindFirstSetRightGroupMask @ 0x140200980 (KeFindFirstSetRightGroupMask.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KeFindFirstSetLeftGroupMask(__int128 *a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  unsigned __int16 FirstSetRightGroupMask; // bx
  __int64 v6; // r11
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a1;
  v7[0] = 32LL;
  v7[1] = &v8;
  v8 = v3;
  FirstSetRightGroupMask = 0;
  if ( (unsigned __int16)RtlNumberOfSetBitsEx(v7, a2, a3) )
  {
    do
    {
      FirstSetRightGroupMask = KeFindFirstSetRightGroupMask(&v8);
      *((_BYTE *)&v8 + ((unsigned __int64)FirstSetRightGroupMask >> 3)) &= ~(1 << (FirstSetRightGroupMask & 7));
    }
    while ( v6 != 1 );
  }
  return FirstSetRightGroupMask;
}
