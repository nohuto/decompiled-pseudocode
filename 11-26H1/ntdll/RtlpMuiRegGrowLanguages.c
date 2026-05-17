/*
 * XREFs of RtlpMuiRegGrowLanguages @ 0x18014D9D4
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x18014D87C (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     _SafeReallocBlob @ 0x18003826C (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegGrowLanguages(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v2 = 0LL;
  if ( a1 )
  {
    v4 = *(unsigned __int16 *)(a1 + 6);
    if ( v4 + 4 >= *(unsigned __int16 *)(a1 + 4) )
    {
      v11 = 0;
      v5 = 0LL;
      v6 = v4 + 4;
      if ( v6 >= v4 )
      {
        v7 = SafeReallocBlob(a1, 0x18u, v6, 0x1Cu, v9, v10, &v11);
        v5 = v7;
        if ( v7 )
        {
          *(_DWORD *)v7 = v11;
          *(_QWORD *)(v7 + 16) = v7 + 24;
          *(_WORD *)(v7 + 4) = v6;
        }
      }
      return v5;
    }
    else
    {
      return a1;
    }
  }
  return v2;
}
