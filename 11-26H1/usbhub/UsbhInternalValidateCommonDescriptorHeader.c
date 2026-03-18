/*
 * XREFs of UsbhInternalValidateCommonDescriptorHeader @ 0x14005B434
 * Callers:
 *     UsbhValidateBOSDescriptorSet @ 0x14005BBC0 (UsbhValidateBOSDescriptorSet.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 */

char __fastcall UsbhInternalValidateCommonDescriptorHeader(__int64 a1, _BYTE *a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v5; // esi
  unsigned int v6; // ebp
  char v9; // r11
  unsigned int v11; // ecx
  int v12; // r10d

  v5 = *a3 + a3[4] - (_DWORD)a2;
  v6 = a3[2] - (_DWORD)a2;
  v9 = 1;
  if ( v5 >= 2 )
  {
    v11 = (unsigned __int8)*a2;
    v12 = 256;
    *a4 = v11;
    if ( v11 > v5 )
    {
      Log(a1, 256, 1447248946, v11, v5);
      v9 = 0;
      *a4 = v5;
    }
    if ( (unsigned __int8)*a2 > v6 )
    {
      Log(a1, v12, 1447248947, (unsigned __int8)*a2, v6);
      v9 = 0;
    }
    if ( *a2 < 2u )
    {
      Log(a1, v12, 1447248948, (unsigned __int8)*a2, 0LL);
      v9 = 0;
    }
    if ( !*a2 )
    {
      Log(a1, v12, 1447248949, 0LL, 0LL);
      return 0;
    }
    return v9;
  }
  else
  {
    Log(a1, 256, 1447248945, v5, 0LL);
    return 0;
  }
}
