/*
 * XREFs of MiCheckPteRelease @ 0x140281C8C
 * Callers:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckPteRelease(__int64 a1, unsigned __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v6; // rbx
  int SystemRegionType; // eax
  unsigned __int64 v8; // r14
  __int64 v9; // rbp
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r10
  const signed __int64 *v12; // rcx
  unsigned __int64 i; // rdx
  __int64 v14; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rbx
  unsigned int v21; // eax
  volatile signed __int32 *v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r11
  __int64 result; // rax
  int v26; // r8d
  unsigned __int64 v27; // rcx

  v6 = (__int64)(a2 << 25) >> 16;
  if ( !a3 )
    KeBugCheckEx(0xDAu, 0x300uLL, (__int64)(a2 << 25) >> 16, 0LL, 0LL);
  SystemRegionType = MiGetSystemRegionType((__int64)(a2 << 25) >> 16);
  v8 = *(_QWORD *)(a1 + 32);
  if ( a2 < v8 || SystemRegionType != (unsigned int)MiGetSystemRegionType((__int64)(v8 << 25) >> 16) )
    KeBugCheckEx(0xDAu, 0x301uLL, v6, 0LL, 0LL);
  v9 = (__int64)(a2 - v8) >> 3;
  v10 = 2 * ((unsigned __int64)(unsigned int)v9 >> (4 * (*(_BYTE *)(a1 + 40) & 1u)));
  if ( _bittest64(*(const signed __int64 **)(a1 + 24), v10) )
    KeBugCheckEx(0xDAu, 0x303uLL, v6, a3, 0LL);
  LOBYTE(v11) = 2;
  if ( v10 && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * ((v10 - 2) >> 5)) >> ((v10 - 2) & 0x1F) == 2 )
    KeBugCheckEx(0xDAu, 0x304uLL, v6, a3, 0LL);
  v12 = *(const signed __int64 **)(a1 + 24);
  for ( i = v10 + 1; _bittest64(v12, i) == 1; i += 2LL )
    ;
  v14 = ((i - v10) >> 1) + 1;
  BugCheckParameter4 = 16 * v14;
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    BugCheckParameter4 = v14;
  if ( BugCheckParameter4 != a3 )
    KeBugCheckEx(0xDAu, 0x305uLL, v6, a3, BugCheckParameter4);
  v16 = 2 * ((unsigned __int64)(unsigned int)v9 >> (4 * (*(_BYTE *)(a1 + 40) & 1u)));
  v17 = v10 + 2 * v14;
  while ( v16 < v17 )
  {
    if ( _bittest64(v12, v16) == 1 )
      KeBugCheckEx(
        0xDAu,
        0x306uLL,
        v6,
        v6
      + (((v16 << 11) - ((unsigned __int64)(unsigned int)v9 >> (4 * (*(_BYTE *)(a1 + 40) & 1u)) << 12)) & 0xFFFFFFFFFFFFF000uLL),
        BugCheckParameter4);
    v16 += 2LL;
  }
  v18 = v17 - 2;
  while ( 1 )
  {
    v22 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4 * (v10 >> 5));
    if ( v10 >= v18 )
      break;
    LOBYTE(v19) = 1;
    v20 = v10 & 0x1F;
    if ( v20 + 1 <= 0x20 )
    {
      v21 = 1 << v20;
LABEL_31:
      _InterlockedOr(v22, v21);
      goto LABEL_32;
    }
    if ( (v10 & 0x1F) == 0 )
      goto LABEL_30;
    _InterlockedOr(v22, ((1 << (32 - (v10 & 0x1F))) - 1) << v20);
    v19 = 1LL - (32 - (unsigned int)(v10 & 0x1F));
    ++v22;
    if ( v19 >= 0x20 )
    {
      v23 = v19 >> 5;
      v19 += -32LL * (v19 >> 5);
      do
      {
        *v22++ = -1;
        --v23;
      }
      while ( v23 );
    }
    if ( v19 )
    {
LABEL_30:
      v21 = (1 << v19) - 1;
      goto LABEL_31;
    }
LABEL_32:
    v10 += 2LL;
  }
  v24 = v10 & 0x1F;
  if ( v24 + 2 <= 0x20 )
  {
    result = (unsigned int)(3 << v24);
    goto LABEL_42;
  }
  if ( (v10 & 0x1F) == 0 )
    goto LABEL_41;
  v26 = v10 & 0x1F;
  result = (unsigned int)(((1 << (32 - v26)) - 1) << v24);
  _InterlockedOr(v22, result);
  v11 = 2LL - (unsigned int)(32 - v26);
  ++v22;
  if ( v11 >= 0x20 )
  {
    v27 = v11 >> 5;
    result = -32LL * (v11 >> 5);
    v11 += result;
    do
    {
      *v22++ = -1;
      --v27;
    }
    while ( v27 );
  }
  if ( v11 )
  {
LABEL_41:
    result = (unsigned int)((1 << v11) - 1);
LABEL_42:
    _InterlockedOr(v22, result);
  }
  return result;
}
