/*
 * XREFs of RtlpMuiRegGrowLanguages @ 0x18014D884
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x18014D72C (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     _SafeReallocBlob @ 0x180001008 (_SafeReallocBlob.c)
 */

unsigned __int16 *__fastcall RtlpMuiRegGrowLanguages(unsigned __int16 *BaseAddress, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r8d
  _QWORD *v5; // rcx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v11) = a2;
  v2 = 0LL;
  if ( BaseAddress )
  {
    v4 = BaseAddress[3];
    if ( v4 + 4 >= BaseAddress[2] )
    {
      LODWORD(v11) = 0;
      v5 = 0LL;
      v6 = v4 + 4;
      if ( v6 >= v4 )
      {
        v7 = SafeReallocBlob(BaseAddress, 0x18u, v6, 0x1Cu, v9, v10, (unsigned int *)&v11);
        v5 = v7;
        if ( v7 )
        {
          *(_DWORD *)v7 = v11;
          v7[2] = v7 + 3;
          *((_WORD *)v7 + 2) = v6;
        }
      }
      return (unsigned __int16 *)v5;
    }
    else
    {
      return BaseAddress;
    }
  }
  return (unsigned __int16 *)v2;
}
