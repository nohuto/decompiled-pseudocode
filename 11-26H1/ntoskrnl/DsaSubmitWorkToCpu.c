/*
 * XREFs of DsaSubmitWorkToCpu @ 0x1406E54B0
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DsaSubmitWorkToCpu(__int64 a1, char *a2)
{
  unsigned int v2; // esi
  char v5; // al
  SIZE_T v6; // rcx
  char v7; // al
  char v8; // al

  v2 = 0;
  switch ( *(_BYTE *)(a1 + 7) )
  {
    case 0:
    case 2:
      v8 = *a2;
      goto LABEL_15;
    case 3:
      memmove(*(void **)(a1 + 24), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 32));
      goto LABEL_12;
    case 4:
      memset_0(*(void **)(a1 + 24), *(unsigned __int8 *)(a1 + 16), *(unsigned int *)(a1 + 32));
LABEL_12:
      v8 = *a2;
LABEL_15:
      v5 = v8 & 0xC0 | 1;
      goto LABEL_16;
    case 5:
      v6 = RtlCompareMemory(*(const void **)(a1 + 16), *(const void **)(a1 + 24), *(unsigned int *)(a1 + 32));
      if ( v6 == *(_DWORD *)(a1 + 32) )
      {
        v7 = 0;
      }
      else
      {
        *((_DWORD *)a2 + 1) = v6;
        v7 = 1;
      }
      a2[1] = v7;
      goto LABEL_12;
  }
  v2 = -1073741811;
  v5 = *a2 & 0xC0 | 0x20;
LABEL_16:
  *a2 = v5;
  return v2;
}
