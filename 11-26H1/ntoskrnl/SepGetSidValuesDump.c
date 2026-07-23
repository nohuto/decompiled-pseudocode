/*
 * XREFs of SepGetSidValuesDump @ 0x14063E770
 * Callers:
 *     SepLogTokenSidManagement @ 0x140B2D560 (SepLogTokenSidManagement.c)
 * Callees:
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepGetSidValuesDump(__int64 a1, _DWORD *a2)
{
  int v2; // edi
  __int64 Pool2; // rax
  __int64 v6; // rbp
  unsigned __int8 *v7; // r15
  char *v8; // r12
  unsigned int i; // r13d
  ULONG v10; // ebx

  v2 = 0;
  *a2 = 0;
  if ( !a1 )
    return 0LL;
  if ( !*(_DWORD *)(a1 + 16) )
    return 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v7 = (unsigned __int8 *)(a1 + 24);
  v8 = (char *)Pool2;
  for ( i = 0; i < *(_DWORD *)(a1 + 16); v8 += v10 )
  {
    v10 = 4 * v7[1] + 8;
    RtlCopySid(v10, v8, v7);
    v2 += v10;
    ++i;
    v7 += (4LL * v7[1] + 11) & 0xFFFFFFFCLL;
  }
  *a2 = v2;
  return v6;
}
