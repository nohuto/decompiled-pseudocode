/*
 * XREFs of _RtlpMuiRegValidatePartialLanguage @ 0x18014ECA0
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x18014E6A8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x1800DECF8 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidatePartialLanguage(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  int v4; // ebx
  char v5; // r12
  int v6; // ebp
  __int64 v7; // rsi
  __int16 *v8; // r14
  unsigned __int8 v9; // al
  __int64 v10; // r15
  __int16 v11; // r8
  int InstalledLangInfoIndex; // eax
  __int16 v13; // r8
  int v16; // [rsp+68h] [rbp+10h]
  __int16 v17; // [rsp+70h] [rbp+18h] BYREF

  v16 = a2;
  v2 = 28LL * a2;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  v8 = (__int16 *)(v7 + v2 + 12);
  do
  {
    v9 = (*(_WORD *)(v2 + v7 + 8) >> (2 * v5)) & 3;
    if ( !v9 )
      goto LABEL_15;
    if ( v9 != 2 )
    {
      v10 = *(_QWORD *)(v3 + 24);
      v11 = *v8;
      v17 = -1;
      InstalledLangInfoIndex = RtlpMuiRegGetInstalledLangInfoIndex(v10, v9, v11, &v17);
      a2 = v16;
      if ( InstalledLangInfoIndex >= 0 )
      {
        v13 = v17;
        if ( v17 < 0 || v17 >= (int)*(unsigned __int16 *)(v10 + 6) || v17 == v16 )
          goto LABEL_14;
        if ( (*(_BYTE *)(28LL * v17 + *(_QWORD *)(v10 + 16)) & 1) != 0 )
        {
          *(_WORD *)(v2 + v7 + 8) = (2 << v6) | *(_WORD *)(v2 + v7 + 8) & ~(3 << v6);
          a2 = v16;
          *v8 = v13;
        }
      }
      ++v4;
LABEL_14:
      v3 = a1;
      goto LABEL_15;
    }
    if ( *v8 == a2 )
      *(_WORD *)(v2 + v7 + 8) &= ~(3 << v6);
    else
      ++v4;
LABEL_15:
    ++v5;
    ++v8;
    v6 += 2;
  }
  while ( v6 < 8 );
  if ( v4 >= 1 )
    return 0LL;
  *(_WORD *)(v2 + v7) |= 0x1000u;
  return 3221225473LL;
}
