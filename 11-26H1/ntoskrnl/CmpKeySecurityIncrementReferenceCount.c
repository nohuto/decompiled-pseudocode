/*
 * XREFs of CmpKeySecurityIncrementReferenceCount @ 0x1404C4528
 * Callers:
 *     CmpReferenceSecurityNode @ 0x14085B3C4 (CmpReferenceSecurityNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408BE6F8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408DF268 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpKeySecurityIncrementReferenceCount(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // eax

  v4 = 0;
  if ( !a4 && !*(_DWORD *)(a1 + 12) )
    KeBugCheckEx(0x51u, 4uLL, 6uLL, a2, a3);
  v5 = *(_DWORD *)(a1 + 12);
  if ( v5 + 1 < v5 )
    return (unsigned int)-1073741675;
  else
    *(_DWORD *)(a1 + 12) = v5 + 1;
  return v4;
}
