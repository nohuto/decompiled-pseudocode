/*
 * XREFs of SepCheckAcl @ 0x1409E0B40
 * Callers:
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureAcl @ 0x1409E0A20 (SeCaptureAcl.c)
 * Callees:
 *     RtlpValidCompoundAce @ 0x14077FD24 (RtlpValidCompoundAce.c)
 *     RtlpValidAccessFilterAce @ 0x14077FD94 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1409E0CF0 (RtlpValidAttributeAce.c)
 *     RtlpValidObjectAce @ 0x1409E0E98 (RtlpValidObjectAce.c)
 */

char __fastcall SepCheckAcl(__int64 a1, unsigned int a2)
{
  unsigned __int16 *v3; // rbp
  unsigned int v4; // ecx
  unsigned __int8 *v5; // rdi
  unsigned int v6; // esi
  int v7; // r15d
  int v8; // r12d
  unsigned __int64 v9; // rdx
  unsigned __int16 *v10; // r14
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax

  if ( a2 < 8 )
    return 0;
  v3 = (unsigned __int16 *)(a1 + 2);
  v4 = *(unsigned __int16 *)(a1 + 2);
  if ( a2 != v4 )
    return 0;
  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) > 2u
    || (unsigned __int16 *)(((unsigned __int64)v3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != v3
    || v4 < 8 )
  {
    return 0;
  }
  v5 = (unsigned __int8 *)(a1 + 8);
  v6 = 0;
  v7 = 1730048;
  v8 = 104928;
  while ( v6 < *(unsigned __int16 *)(a1 + 4) )
  {
    v9 = a1 + *v3;
    if ( (unsigned __int64)(v5 + 4) > v9 )
      return 0;
    v10 = (unsigned __int16 *)(v5 + 2);
    if ( (unsigned __int8 *)((unsigned __int64)(v5 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v5 + 2 )
      return 0;
    v11 = *v10;
    if ( (unsigned __int64)&v5[v11] > v9 )
      return 0;
    v12 = *v5;
    if ( (unsigned __int8)v12 <= 3u || (unsigned __int8)v12 <= 0x14u && _bittest(&v7, v12) )
    {
      if ( ((v11 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v11 )
        return 0;
      if ( (unsigned int)v11 < 0x10 )
        return 0;
      if ( v5[8] != 1 )
        return 0;
      v13 = v5[9];
      if ( (unsigned __int8)v13 > 0xFu || v11 < 4 * v13 + 16 )
        return 0;
    }
    else if ( (_BYTE)v12 == 4 )
    {
      if ( *(_BYTE *)a1 < 3u || !RtlpValidCompoundAce((__int64)v5) )
        return 0;
    }
    else if ( (unsigned __int8)v12 <= 0x10u && _bittest(&v8, v12) )
    {
      if ( *(_BYTE *)a1 < 4u || !(unsigned __int8)RtlpValidObjectAce(v5) )
        return 0;
    }
    else if ( (_BYTE)v12 == 18 )
    {
      if ( !(unsigned __int8)RtlpValidAttributeAce(v5) )
        return 0;
    }
    else if ( (_BYTE)v12 == 21 )
    {
      if ( !RtlpValidAccessFilterAce((__int64)v5) )
        return 0;
    }
    else if ( (unsigned int)v11 < 4 )
    {
      return 0;
    }
    v5 += *v10;
    ++v6;
  }
  return 1;
}
