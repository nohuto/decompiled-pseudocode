/*
 * XREFs of RtlStringCbLengthW @ 0x1800DB9A0
 * Callers:
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1801122E0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidRelativeAttribute @ 0x180124290 (RtlpValidRelativeAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x18013EB30 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbLengthW(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rax
  unsigned __int64 i; // r8
  signed int v7; // ecx

  v3 = a2 >> 1;
  v5 = 0LL;
  if ( a1 && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -1073741811;
  }
  if ( a3 )
  {
    if ( v7 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v5;
  }
  return (unsigned int)v7;
}
