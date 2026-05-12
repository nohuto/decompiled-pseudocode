/*
 * XREFs of RaidAdapterGetCryptoKeyIndex @ 0x140070F80
 * Callers:
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1400531D0 (RaidAdapterAcquireCryptoKeyResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetCryptoKeyIndex(__int64 a1, const void *a2, char a3)
{
  unsigned int i; // ebx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // ecx

  for ( i = 0; i < *(_DWORD *)(a1 + 5696); ++i )
  {
    v7 = *(_QWORD *)(a1 + 5704);
    v8 = (unsigned __int64)i << 6;
    v9 = *(_DWORD *)(v8 + v7 + 44);
    if ( (v9 == 2 || a3 && v9 == 1) && RtlCompareMemory((const void *)(v8 + v7 + 4), a2, 0x20uLL) == 32 )
      break;
  }
  return i;
}
