/*
 * XREFs of _lambda_adea4d0abd8eda5f6785acddb97df7f7_::operator() @ 0x1400B0AB8
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___ @ 0x1400B0910 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_adea4d0abd8eda5f6785acddb97df7f7_::operator()(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a2 + 8) = *(_DWORD *)(*a1 + 112);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(*a1 + 116);
  if ( !*(_BYTE *)(*a1 + 145) )
  {
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(*a1 + 120);
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(*a1 + 124);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(*a1 + 128);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(*a1 + 132);
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(*a1 + 136);
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(*a1 + 140);
  }
  *(_BYTE *)(a2 + 40) = *(_BYTE *)(*a1 + 144);
  *(_BYTE *)(a2 + 41) = *(_BYTE *)(*a1 + 145);
  result = *a1;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(*a1 + 146);
  return result;
}
