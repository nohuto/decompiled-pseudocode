/*
 * XREFs of UsbhMakeId @ 0x14000E1C0
 * Callers:
 *     UsbhBuildDeviceID @ 0x14000D9A8 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x14000DCB8 (UsbhBuildHardwareID.c)
 *     UsbhBuildCompatibleID @ 0x14000E768 (UsbhBuildCompatibleID.c)
 *     UsbhGetLocationIdString @ 0x14000EC40 (UsbhGetLocationIdString.c)
 *     UsbhBuildVendorSpecificCompatibleIDs @ 0x140035DA4 (UsbhBuildVendorSpecificCompatibleIDs.c)
 *     UsbhBuildClassCompatibleID @ 0x140059AA8 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildContainerID @ 0x140059F30 (UsbhBuildContainerID.c)
 *     UsbhBuildUnknownIds @ 0x14005A430 (UsbhBuildUnknownIds.c)
 * Callees:
 *     memmove @ 0x140061CC0 (memmove.c)
 */

char *__fastcall UsbhMakeId(
        int a1,
        _WORD *a2,
        void *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int16 a6,
        unsigned __int16 a7,
        char *Str)
{
  __int64 v11; // rax
  bool v13; // zf
  char *v14; // rdi
  __int64 v15; // r15
  char *Pool2; // rax
  char *v17; // r14
  size_t v18; // rbx
  char *v19; // rbx
  int v20; // esi
  unsigned int i; // ecx
  __int16 v22; // ax
  __int64 Size; // [rsp+60h] [rbp+18h]

  v11 = -1LL;
  do
    v13 = a2[++v11] == 0;
  while ( !v13 );
  Size = 2 * v11;
  v14 = Str;
  v15 = (unsigned int)*a4 + 2 * v11 + 2LL * a5;
  if ( a1 == 2 && Str )
    v15 = v15 + 2 * strnlen(Str, 8uLL) - 2;
  Pool2 = (char *)ExAllocatePool2(64LL, v15, 1112885333LL);
  v17 = Pool2;
  if ( Pool2 )
  {
    v18 = (unsigned int)*a4;
    memmove(Pool2, a3, v18);
    v19 = &v17[v18];
    memmove(v19, a2, Size);
    v13 = *(_WORD *)v19 == 110;
    *a4 = v15;
    if ( !v13 )
    {
      do
      {
        if ( !a6 )
          break;
        v19 += 2;
      }
      while ( *(_WORD *)v19 != 110 );
    }
    if ( a1 )
    {
      v20 = a1 - 1;
      if ( v20 )
      {
        if ( v20 == 1 && Str )
        {
          for ( i = 0; i < 8; ++i )
          {
            v22 = (unsigned __int8)*v14;
            if ( !(_BYTE)v22 )
              break;
            *(_WORD *)v19 = v22;
            v19 += 2;
            ++v14;
          }
        }
      }
      else if ( a6 == 2 )
      {
        *(_WORD *)v19 = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v19 + 1) = (a7 & 0xF) + 48;
      }
      else if ( a6 == 4 )
      {
        *(_WORD *)v19 = (a7 >> 12) + 48;
        *((_WORD *)v19 + 1) = (HIBYTE(a7) & 0xF) + 48;
        *((_WORD *)v19 + 2) = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v19 + 3) = (a7 & 0xF) + 48;
      }
    }
    else if ( a6 == 2 )
    {
      *(_WORD *)v19 = (unsigned __int8)Nibble[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v19 + 1) = (unsigned __int8)Nibble[a7 & 0xF];
    }
    else if ( a6 == 4 )
    {
      *(_WORD *)v19 = (unsigned __int8)Nibble[(unsigned __int64)a7 >> 12];
      *((_WORD *)v19 + 1) = (unsigned __int8)Nibble[HIBYTE(a7) & 0xF];
      *((_WORD *)v19 + 2) = (unsigned __int8)Nibble[(unsigned __int8)a7 >> 4];
      *((_WORD *)v19 + 3) = (unsigned __int8)Nibble[a7 & 0xF];
    }
  }
  else
  {
    *a4 = 0;
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
  return v17;
}
