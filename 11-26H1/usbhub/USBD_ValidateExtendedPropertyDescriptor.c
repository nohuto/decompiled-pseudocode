/*
 * XREFs of USBD_ValidateExtendedPropertyDescriptor @ 0x1400421CC
 * Callers:
 *     UsbhInstallMsOsExtendedProperties @ 0x1400431A4 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_ValidateExtendedPropertyDescriptor(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  int v3; // r11d
  __int64 v4; // r9
  unsigned int *v5; // rdx
  int v6; // ebx
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // r10d
  int v11; // r10d

  v2 = 0;
  v3 = 0;
  if ( a2 < 0xA )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = *a1;
  if ( (unsigned int)v4 > a2 || (unsigned int)(v4 - 10) > 0xFF6 || *((_WORD *)a1 + 3) != 5 )
    return (unsigned int)-1073741811;
  if ( *((_WORD *)a1 + 4) )
  {
    v5 = (unsigned int *)((char *)a1 + 10);
    v6 = *((unsigned __int16 *)a1 + 4);
    v7 = (unsigned __int64)a1 + v4;
    while ( (unsigned __int64)v5 < v7 )
    {
      if ( (unsigned __int64)v5 + 14 > v7 )
        return (unsigned int)-1073741811;
      v8 = *v5;
      if ( (unsigned int)v8 > 0x7FFFFFFF )
        return (unsigned int)-1073741811;
      if ( (__int64)(v7 - (_QWORD)v5) < (int)v8 )
        return (unsigned int)-1073741811;
      if ( (unsigned int)v8 < 0xE )
        return (unsigned int)-1073741811;
      if ( v5[1] - 1 > 6 )
        return (unsigned int)-1073741811;
      v9 = *((unsigned __int16 *)v5 + 4);
      if ( (int)v9 + 14 > (unsigned int)v8 )
        return (unsigned int)-1073741811;
      if ( !*((_WORD *)v5 + 4) )
        return (unsigned int)-1073741811;
      if ( (v9 & 1) != 0 )
        return (unsigned int)-1073741811;
      if ( !*((_WORD *)v5 + 5) )
        return (unsigned int)-1073741811;
      if ( *((_WORD *)v5 + ((unsigned __int64)*((unsigned __int16 *)v5 + 4) >> 1) + 4) )
        return (unsigned int)-1073741811;
      v10 = *(unsigned int *)((char *)v5 + v9 + 10);
      if ( ~(_DWORD)v9 < v10 )
        return (unsigned int)-1073741811;
      v11 = v9 + v10;
      if ( (unsigned int)~v11 < 0xE || v11 + 14 > (unsigned int)v8 )
        return (unsigned int)-1073741811;
      if ( ++v3 == v6 )
        return v2;
      v5 = (unsigned int *)((char *)v5 + v8);
    }
    if ( v3 != v6 )
      return (unsigned int)-1073741811;
  }
  return v2;
}
