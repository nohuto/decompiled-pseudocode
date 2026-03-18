/*
 * XREFs of UsbhMakeId @ 0x1400159A0
 * Callers:
 *     UsbhBuildDeviceID @ 0x140015194 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1400154A0 (UsbhBuildHardwareID.c)
 *     UsbhBuildCompatibleID @ 0x140015C18 (UsbhBuildCompatibleID.c)
 *     UsbhGetLocationIdString @ 0x1400160EC (UsbhGetLocationIdString.c)
 *     UsbhBuildVendorSpecificCompatibleIDs @ 0x140037C10 (UsbhBuildVendorSpecificCompatibleIDs.c)
 *     UsbhBuildClassCompatibleID @ 0x140059520 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildContainerID @ 0x1400599B0 (UsbhBuildContainerID.c)
 *     UsbhBuildUnknownIds @ 0x140059EB8 (UsbhBuildUnknownIds.c)
 * Callees:
 *     memmove @ 0x140061600 (memmove.c)
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
  __int64 v11; // rsi
  size_t v12; // rsi
  char *v13; // rdi
  __int64 v14; // r13
  char *Pool2; // rax
  char *v16; // r12
  __int64 v17; // rbx
  char *v18; // rbx
  bool v19; // zf
  int v20; // r14d
  unsigned int i; // ecx
  __int16 v22; // ax

  v11 = -1LL;
  do
    ++v11;
  while ( a2[v11] );
  v12 = 2 * v11;
  v13 = Str;
  v14 = v12 + (unsigned int)*a4 + 2LL * a5;
  if ( a1 == 2 && Str )
    v14 = v14 + 2 * strnlen(Str, 8uLL) - 2;
  Pool2 = (char *)ExAllocatePool2(64LL, v14, 1112885333LL);
  v16 = Pool2;
  if ( Pool2 )
  {
    v17 = (unsigned int)*a4;
    memmove(Pool2, a3, (unsigned int)v17);
    v18 = &v16[v17];
    memmove(v18, a2, v12);
    v19 = *(_WORD *)v18 == 110;
    *a4 = v14;
    if ( !v19 )
    {
      do
      {
        if ( !a6 )
          break;
        v18 += 2;
      }
      while ( *(_WORD *)v18 != 110 );
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
            v22 = (unsigned __int8)*v13;
            if ( !(_BYTE)v22 )
              break;
            *(_WORD *)v18 = v22;
            v18 += 2;
            ++v13;
          }
        }
      }
      else if ( a6 == 2 )
      {
        *(_WORD *)v18 = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v18 + 1) = (a7 & 0xF) + 48;
      }
      else if ( a6 == 4 )
      {
        *(_WORD *)v18 = (a7 >> 12) + 48;
        *((_WORD *)v18 + 1) = (HIBYTE(a7) & 0xF) + 48;
        *((_WORD *)v18 + 2) = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v18 + 3) = (a7 & 0xF) + 48;
      }
    }
    else if ( a6 == 2 )
    {
      *(_WORD *)v18 = (unsigned __int8)Nibble[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v18 + 1) = (unsigned __int8)Nibble[a7 & 0xF];
    }
    else if ( a6 == 4 )
    {
      *(_WORD *)v18 = (unsigned __int8)Nibble[(unsigned __int64)a7 >> 12];
      *((_WORD *)v18 + 1) = (unsigned __int8)Nibble[HIBYTE(a7) & 0xF];
      *((_WORD *)v18 + 2) = (unsigned __int8)Nibble[(unsigned __int8)a7 >> 4];
      *((_WORD *)v18 + 3) = (unsigned __int8)Nibble[a7 & 0xF];
    }
  }
  else
  {
    *a4 = 0;
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
  return v16;
}
