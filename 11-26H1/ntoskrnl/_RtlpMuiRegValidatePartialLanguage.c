/*
 * XREFs of _RtlpMuiRegValidatePartialLanguage @ 0x1408B1070
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1408B0A68 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x1408AE95C (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidatePartialLanguage(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  int v4; // ebx
  char v5; // r12
  int v6; // ebp
  __int64 v7; // rsi
  __int16 *v8; // r14
  unsigned __int16 v9; // r13
  unsigned __int8 v10; // al
  int v11; // r8d
  __int64 v12; // r15
  int InstalledLangInfoIndex; // eax
  __int16 v14; // r8
  int v17; // [rsp+68h] [rbp+10h]
  __int16 v18; // [rsp+70h] [rbp+18h] BYREF

  v17 = a2;
  v2 = 28LL * a2;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  v8 = (__int16 *)(v7 + v2 + 12);
  do
  {
    v9 = *(_WORD *)(v2 + v7 + 8);
    v10 = (v9 >> (2 * v5)) & 3;
    if ( !v10 )
      goto LABEL_15;
    v11 = *v8;
    if ( v10 != 2 )
    {
      v12 = *(_QWORD *)(v3 + 24);
      v18 = -1;
      InstalledLangInfoIndex = RtlpMuiRegGetInstalledLangInfoIndex(v12, v10, v11, &v18);
      a2 = v17;
      if ( InstalledLangInfoIndex >= 0 )
      {
        v14 = v18;
        if ( v18 < 0 || v18 >= (int)*(unsigned __int16 *)(v12 + 6) || v18 == v17 )
          goto LABEL_14;
        if ( (*(_BYTE *)(28LL * v18 + *(_QWORD *)(v12 + 16)) & 1) != 0 )
        {
          *(_WORD *)(v2 + v7 + 8) = (2 << v6) | v9 & ~(3 << v6);
          a2 = v17;
          *v8 = v14;
        }
      }
      ++v4;
LABEL_14:
      v3 = a1;
      goto LABEL_15;
    }
    if ( v11 == a2 )
      *(_WORD *)(v2 + v7 + 8) = v9 & ~(3 << v6);
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
