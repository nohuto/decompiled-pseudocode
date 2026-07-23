/*
 * XREFs of AuthzBasepCompareOctetStringOperands @ 0x1404ECA3C
 * Callers:
 *     AuthzBasepValueInSet @ 0x1402FB070 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x1402FB3B8 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall AuthzBasepCompareOctetStringOperands(unsigned __int8 a1, __int64 a2)
{
  int v2; // esi
  size_t *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r10
  int v6; // r9d
  __int64 v7; // rax
  size_t v8; // r8
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  void *Buf1; // [rsp+20h] [rbp-28h]
  size_t Size[2]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-10h]

  v2 = a1;
  v3 = Size;
  v4 = a2 + 32;
  v5 = 2LL;
  do
  {
    if ( *(_DWORD *)(v4 - 20) == 1 )
    {
      v6 = *(_DWORD *)(v4 - 8);
      v7 = v4;
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v4 - 16) + 48LL);
      v6 = *(_DWORD *)(v7 + 8);
    }
    v4 += 40LL;
    *(v3 - 1) = *(_QWORD *)v7;
    *(_DWORD *)v3 = v6;
    v3 += 2;
    --v5;
  }
  while ( v5 );
  v8 = v16;
  v9 = Size[0];
  if ( LODWORD(Size[0]) < v16 )
    v8 = LODWORD(Size[0]);
  v10 = memcmp(Buf1, (const void *)Size[1], v8);
  v11 = 0;
  v12 = v10;
  if ( !v10 )
  {
    if ( v9 <= v16 )
    {
      if ( v9 < v16 )
        v12 = -1;
    }
    else
    {
      v12 = 1;
    }
  }
  switch ( v2 )
  {
    case 128:
      LOBYTE(v11) = v12 == 0;
      return v11;
    case 129:
      LOBYTE(v11) = v12 != 0;
      return v11;
    case 130:
LABEL_19:
      v12 >>= 31;
      return v12;
    case 131:
      LOBYTE(v11) = (int)v12 <= 0;
      return v11;
    case 132:
      LOBYTE(v11) = (int)v12 > 0;
      return v11;
    case 133:
      v12 = ~v12;
      goto LABEL_19;
  }
  return v12;
}
