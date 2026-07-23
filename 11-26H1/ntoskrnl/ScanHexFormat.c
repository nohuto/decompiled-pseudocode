/*
 * XREFs of ScanHexFormat @ 0x140962AB0
 * Callers:
 *     _CmValidateDeviceInterfaceName @ 0x140960DB0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1409616A0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1409623E0 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiDmCacheDataDecode @ 0x140962C40 (PiDmCacheDataDecode.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140962ED4 (_CmGetDeviceInterfaceClassGuid.c)
 * Callees:
 *     <none>
 */

__int64 ScanHexFormat(_WORD *a1, int a2, unsigned __int16 *a3, ...)
{
  unsigned int v3; // edi
  _QWORD *v5; // rbx
  unsigned __int16 v7; // ax
  int v8; // r11d
  int v9; // eax
  int v10; // edx
  int v11; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // edx
  _DWORD *v16; // rax
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int16 *v19; // [rsp+40h] [rbp+18h]

  v18 = 0LL;
  v3 = 0;
  v5 = &v18 + 8;
  while ( 1 )
  {
LABEL_2:
    v7 = *a3;
    if ( !*a3 )
    {
      if ( a2 && *a1 )
        return (unsigned int)-1;
      return v3;
    }
    if ( v7 != 37 )
      break;
    v7 = *++a3;
    if ( *a3 == 37 )
      break;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *a3;
        if ( (unsigned __int16)(v10 - 48) <= 9u )
        {
          v9 = v10 + 2 * (5 * v9 - 24);
          goto LABEL_8;
        }
        if ( v10 != 108 )
          break;
        ++v8;
        ++a3;
      }
      if ( (((_WORD)v10 - 88) & 0xFFDF) == 0 )
        break;
LABEL_8:
      ++a3;
    }
    v19 = a3 + 1;
    v11 = 0;
    while ( v9-- )
    {
      if ( !a2 )
        return 0xFFFFFFFFLL;
      v13 = (unsigned __int16)*a1;
      v14 = 16 * v11;
      if ( (unsigned __int16)(v13 - 48) <= 9u )
      {
        v15 = v14 - 48;
        goto LABEL_16;
      }
      if ( (unsigned __int16)(v13 - 97) > 5u )
      {
        if ( (unsigned __int16)(v13 - 65) > 5u )
          return 0xFFFFFFFFLL;
        v15 = v14 - 55;
LABEL_16:
        v11 = v13 + v15;
        ++a1;
        --a2;
      }
      else
      {
        ++a1;
        v11 = v13 + v14 - 87;
        --a2;
      }
    }
    v16 = (_DWORD *)v5[1];
    ++v5;
    if ( v8 )
      *v16 = v11;
    else
      *(_WORD *)v16 = v11;
    ++v3;
    a3 = v19;
  }
  if ( a2 && *a1 == v7 )
  {
    ++a1;
    --a2;
    ++a3;
    goto LABEL_2;
  }
  return 0xFFFFFFFFLL;
}
