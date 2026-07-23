/*
 * XREFs of HvlpFastFlushListTbEx @ 0x1402F4568
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1402F443C (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     VslFastFlushSecureRangeList @ 0x1402F5A94 (VslFastFlushSecureRangeList.c)
 *     HvlpCopyFlushVaList @ 0x14032DF20 (HvlpCopyFlushVaList.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpFastFlushListTbEx(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        int a7)
{
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ebx
  __int64 v14; // r8
  _BYTE v15[8]; // [rsp+30h] [rbp-A8h] BYREF
  int v16; // [rsp+38h] [rbp-A0h]
  int v17; // [rsp+3Ch] [rbp-9Ch]
  __int64 v18; // [rsp+40h] [rbp-98h] BYREF
  __int64 v19; // [rsp+48h] [rbp-90h]
  _BYTE v20[96]; // [rsp+50h] [rbp-88h] BYREF

  result = a3;
  if ( !a3 || (v15[0] = 0, result = VslFastFlushSecureRangeList(a3, a6, a5, v15), !v15[0]) )
  {
    if ( a4 )
    {
      v11 = a1[1];
      v18 = *a1;
      v19 = v11;
      if ( (HvlpFlags & 0x2000) == 0 )
        v19 = v11 | 8;
      v12 = HvlpAffinityToHvProcessorSet(a2, v20, 80LL);
      v13 = v12 + 32;
      v16 = ((v12 + 7) << 14) & 0x3FE0000 | 0x14;
      v17 = a7 & 0xFFF;
      v14 = HvlpFlags >> 13;
      LOBYTE(v14) = (HvlpFlags & 0x2000) != 0;
      HvlpCopyFlushVaList(a5, a6, v14, (char *)&v18 + (unsigned int)(v12 + 32));
      v16 |= 0x10000u;
      return HvcallFastExtended(v16, (unsigned int)&v18, v13 + 8 * a7, 0, 0);
    }
  }
  return result;
}
