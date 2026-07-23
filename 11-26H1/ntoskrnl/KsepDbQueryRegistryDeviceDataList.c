/*
 * XREFs of KsepDbQueryRegistryDeviceDataList @ 0x1407BFCB8
 * Callers:
 *     KseQueryDeviceDataList @ 0x140B2E430 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     KsepRegistryEnumValue @ 0x1407C1F9C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1407C21EC (KsepRegistryQueryKeyInformation.c)
 *     KsepStringTransform @ 0x1409D7270 (KsepStringTransform.c)
 *     KsepStringFree @ 0x1409D7848 (KsepStringFree.c)
 *     KsepRegistryOpenKey @ 0x1409D7988 (KsepRegistryOpenKey.c)
 *     KsepRegistryCloseKey @ 0x1409D8784 (KsepRegistryCloseKey.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceDataList(__int64 a1, char *a2, unsigned int a3, _DWORD *a4)
{
  ULONG v4; // r15d
  int KeyInformation; // ebx
  void *Paged; // r14
  unsigned int v8; // edi
  char *v9; // r12
  int v10; // eax
  size_t v11; // rbx
  HANDLE KeyHandle[3]; // [rsp+30h] [rbp-30h] BYREF
  size_t Size; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]

  v4 = 0;
  v15 = 0LL;
  v16 = 0LL;
  memset(KeyHandle, 0, sizeof(KeyHandle));
  Size = 0LL;
  KeyInformation = KsepStringTransform(&v15, a1);
  if ( KeyInformation >= 0 )
  {
    if ( (int)KsepRegistryOpenKey(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v16,
                KeyHandle) >= 0 )
    {
      KeyInformation = KsepRegistryQueryKeyInformation(KeyHandle[0]);
      if ( KeyInformation >= 0 )
      {
        Paged = (void *)KsepPoolAllocatePaged();
        if ( Paged )
        {
          if ( KsepPoolAllocatePaged() )
          {
            v8 = 0;
            v9 = a2;
            while ( 1 )
            {
              v10 = KsepRegistryEnumValue(KeyHandle[0], v4, (__int64)&Size);
              KeyInformation = v10;
              if ( v10 == -2147483622 )
                break;
              if ( v10 < 0 )
                goto LABEL_17;
              v11 = Size;
              v8 += Size;
              if ( v8 <= a3 )
              {
                memmove(v9, Paged, Size);
                v9 += v11;
              }
              ++v4;
            }
            *a4 = v8 + 2;
            if ( (unsigned __int64)v8 + 2 <= a3 )
            {
              KeyInformation = 0;
              *(_WORD *)&a2[2 * ((unsigned __int64)v8 >> 1)] = 0;
            }
            else
            {
              KeyInformation = -1073741789;
            }
          }
          else
          {
            KeyInformation = -1073741801;
          }
LABEL_17:
          KsepPoolFreePaged(Paged);
        }
        else
        {
          KeyInformation = -1073741801;
        }
      }
    }
    else
    {
      KeyInformation = -1073741275;
    }
    if ( KeyHandle[0] )
      KsepRegistryCloseKey(KeyHandle[0]);
  }
  KsepStringFree(&v15);
  return (unsigned int)KeyInformation;
}
