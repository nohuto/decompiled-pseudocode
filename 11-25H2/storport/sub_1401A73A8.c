/*
 * XREFs of sub_1401A73A8 @ 0x1401A73A8
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_1401A73A8(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r14
  PVOID *v4; // rsi
  unsigned int v5; // ebx
  __int64 i; // rdi
  __int64 v7; // rax
  PVOID *v8; // rdi

  v1 = dword_1401688B0;
  v3 = (unsigned int)dword_1401688B0;
  v4 = (PVOID *)sub_1400143E0(72LL, 8LL * (unsigned int)dword_1401688B0, 1297375570LL, *(_QWORD *)(a1 + 8));
  if ( v4 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v1 )
      {
        *(_BYTE *)(a1 + 111) |= 4u;
        *(_QWORD *)(a1 + 6168) = v4;
        return 0;
      }
      v7 = sub_1400143E0(72LL, 8LL, 1297375570LL, *(_QWORD *)(a1 + 8));
      v4[i] = (PVOID)v7;
      if ( !v7 )
        break;
      *(_WORD *)(v7 + 4) = i;
      *(_QWORD *)v4[i] |= 0xFFFFFFFFuLL;
    }
    v5 = -1073741670;
    if ( v1 )
    {
      v8 = v4;
      do
      {
        if ( *v8 )
        {
          ExFreePoolWithTag(*v8, 0x4D546152u);
          *v8 = 0LL;
        }
        ++v8;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(v4, 0x4D546152u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
