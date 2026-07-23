/*
 * XREFs of RtlpMuiRegGrowLanguageConfigList @ 0x1408AF2C4
 * Callers:
 *     RtlpMuiRegConfigListAddLanguage @ 0x1408AE1AC (RtlpMuiRegConfigListAddLanguage.c)
 * Callees:
 *     _SafeReallocBlob @ 0x14072532C (_SafeReallocBlob.c)
 */

unsigned int *__fastcall RtlpMuiRegGrowLanguageConfigList(unsigned int *Src, int a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // edx
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  int v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v10) = a2;
  v2 = Src;
  if ( !Src )
    return 0LL;
  v3 = *((unsigned __int16 *)Src + 2);
  v4 = v3 + 1;
  if ( v3 + 1 >= *((unsigned __int16 *)Src + 3) )
  {
    LODWORD(v10) = 0;
    v5 = 0LL;
    if ( v4 >= v3 )
    {
      v6 = SafeReallocBlob(v2, 0x10u, v4, 0xCu, v8, v9, &v10);
      v5 = v6;
      if ( v6 )
      {
        *(_DWORD *)v6 = v10;
        v6[1] = v6 + 2;
        *((_WORD *)v6 + 3) = v4;
      }
    }
    return (unsigned int *)v5;
  }
  return v2;
}
