/*
 * XREFs of NVMeFindNSIDInActiveNameSpaceIDList @ 0x1400C5B54
 * Callers:
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeFindNSIDInActiveNameSpaceIDList(__int64 a1, __int64 a2, int a3)
{
  __int64 i; // rdx
  int v5; // r8d

  for ( i = 0LL; (unsigned int)i < 0x400; i = (unsigned int)(i + 1) )
  {
    v5 = *(_DWORD *)(a1 + 4 * i);
    if ( !v5 )
      break;
    if ( v5 == a3 )
      return 1;
  }
  return 0;
}
