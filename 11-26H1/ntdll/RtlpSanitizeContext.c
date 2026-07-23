/*
 * XREFs of RtlpSanitizeContext @ 0x1800B1F10
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180036C00 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1800B1590 (RtlVirtualUnwind.c)
 *     RtlVirtualUnwind3 @ 0x18014CB08 (RtlVirtualUnwind3.c)
 * Callees:
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 */

__int64 __fastcall RtlpSanitizeContext(_DWORD *a1)
{
  __int64 result; // rax
  int v3; // ecx
  unsigned int v4; // r8d
  int v5; // ecx
  unsigned int v6; // edx

  result = RtlpValidateContextFlags2((unsigned int)a1[12], 0LL, 2147353560LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741811 )
      goto LABEL_3;
  }
  else if ( (a1[12] & 0x100000) == 0 )
  {
LABEL_3:
    a1[12] = a1[12] & 0xF800001F | 0x100000;
    goto LABEL_6;
  }
  if ( (int)result < 0 )
  {
    a1[12] = 1048587;
    return result;
  }
LABEL_6:
  result = a1[12] & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    result = (unsigned int)a1[312];
    v3 = a1[308];
    if ( v3 > (int)result
      || (v4 = a1[309], v5 = v4 + v3, v6 = a1[313], result = v6 + (unsigned int)result, v4 < 0x530)
      || v5 < (int)result
      || a1[311] != 1232
      || v6 < 0x40
      || (_DWORD *)((char *)a1 + a1[310] + 1232) != a1 )
    {
      a1[12] &= ~0x40u;
    }
  }
  return result;
}
