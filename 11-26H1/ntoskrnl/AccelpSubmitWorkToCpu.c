/*
 * XREFs of AccelpSubmitWorkToCpu @ 0x1406E4BE4
 * Callers:
 *     AccelpCpuInternalOperationHandler @ 0x1406E4A28 (AccelpCpuInternalOperationHandler.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelpSubmitWorkToCpu(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  char v5; // al
  SIZE_T v6; // rcx
  char v7; // al

  v3 = 0;
  switch ( *(_BYTE *)(a1 + 7) )
  {
    case 0:
      goto LABEL_12;
    case 2:
      memmove(*(void **)(a1 + 24), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 32));
      goto LABEL_12;
    case 3:
      memset_0(*(void **)(a1 + 24), *(unsigned __int8 *)(a1 + 16), *(unsigned int *)(a1 + 32));
LABEL_12:
      v5 = *(_BYTE *)a2 & 0xC0 | 1;
      goto LABEL_13;
    case 4:
      v6 = RtlCompareMemory(*(const void **)(a1 + 16), *(const void **)(a1 + 24), *(unsigned int *)(a1 + 32));
      if ( v6 == *(_DWORD *)(a1 + 32) )
      {
        v7 = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = v6;
        v7 = 1;
      }
      *(_BYTE *)(a2 + 1) = v7;
      goto LABEL_12;
  }
  v3 = -1073741811;
  v5 = *(_BYTE *)a2 & 0xC0 | 2;
LABEL_13:
  *(_BYTE *)a2 = v5;
  return v3;
}
