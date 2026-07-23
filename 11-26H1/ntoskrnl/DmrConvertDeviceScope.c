/*
 * XREFs of DmrConvertDeviceScope @ 0x1405B2698
 * Callers:
 *     HalpIvtCreateReservedDevice @ 0x1405B1E70 (HalpIvtCreateReservedDevice.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

_DWORD *__fastcall DmrConvertDeviceScope(__int64 a1, _BYTE *a2)
{
  _DWORD *v2; // rbx
  __int16 v4; // bp
  unsigned __int16 v5; // ax
  unsigned int v6; // esi
  _DWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = a1;
  if ( *a2 == 1 )
  {
    v5 = (unsigned __int8)a2[1] - 6;
    v6 = v5;
    if ( (v5 & 1) == 0 )
    {
      v8 = 0LL;
      ExtEnvAllocateMemory(a1, v5 + 24, &v8);
      v2 = v8;
      if ( v8 )
      {
        *v8 = 1;
        *((_WORD *)v2 + 4) = v4;
        *((_BYTE *)v2 + 11) = a2[5];
        *((_WORD *)v2 + 7) = (unsigned __int16)v6 >> 1;
        *((_QWORD *)v2 + 2) = v2 + 6;
        memmove(v2 + 6, a2 + 6, v6);
      }
    }
  }
  return v2;
}
