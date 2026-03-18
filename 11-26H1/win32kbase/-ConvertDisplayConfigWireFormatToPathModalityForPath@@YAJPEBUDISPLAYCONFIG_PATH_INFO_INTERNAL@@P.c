/*
 * XREFs of ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x14002D084
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14002DE28 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDisplayConfigWireFormatToPathModalityForPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  int v2; // r8d
  unsigned int v4; // eax
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // r11d
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx

  v2 = 8;
  if ( (*(_BYTE *)a1 & 8) != 0 )
  {
    v4 = *((_DWORD *)a1 + 45);
    switch ( v4 )
    {
      case 6u:
        v6 = 256;
        v7 = 0x4000000;
        v2 = 4;
        v8 = 0x4000;
        v9 = 0x100000;
        break;
      case 8u:
        v6 = 512;
        v7 = 0x8000000;
        v8 = 0x8000;
        v9 = 0x200000;
        break;
      case 0xAu:
        v6 = 1024;
        v7 = 0x10000000;
        v2 = 16;
        v8 = 0x10000;
        v9 = 0x400000;
        break;
      case 0xCu:
        v6 = 2048;
        v7 = 0x20000000;
        v2 = 32;
        v8 = 0x20000;
        v9 = 0x800000;
        break;
      case 0xEu:
        v6 = 4096;
        v7 = 0x40000000;
        v2 = 64;
        v8 = 0x40000;
        v9 = 0x1000000;
        break;
      case 0x10u:
        v6 = 0x2000;
        v7 = 0x80000000;
        v2 = 128;
        v8 = 0x80000;
        v9 = 0x2000000;
        break;
      default:
        WdLogSingleEntry1(2LL, v4);
        WdLogGlobalForLineNumber = 13760;
        return 3221225485LL;
    }
    v10 = *((int *)a1 + 44);
    if ( (_DWORD)v10 )
    {
      switch ( (_DWORD)v10 )
      {
        case 1:
          v11 = v6 | *((_DWORD *)a2 + 51) & 0xFFFFC0FF;
          break;
        case 2:
          v11 = v8 | *((_DWORD *)a2 + 51) & 0xFFF03FFF;
          break;
        case 3:
          v11 = v9 | *((_DWORD *)a2 + 51) & 0xFC0FFFFF;
          break;
        case 4:
          v11 = v7 | *((_DWORD *)a2 + 51) & 0x3FFFFFF;
          break;
        default:
          WdLogSingleEntry1(2LL, v10);
          WdLogGlobalForLineNumber = 13782;
          return 3221225485LL;
      }
    }
    else
    {
      v11 = v2 | *((_DWORD *)a2 + 51) & 0xFFFFFF03;
    }
    *((_DWORD *)a2 + 51) = v11;
    v12 = *((unsigned int *)a1 + 46);
    if ( (_DWORD)v12 && (_DWORD)v12 != 12 && (_DWORD)v12 != 30 && (_DWORD)v12 != 31 && (unsigned int)(v12 - 32) >= 2 )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 13797;
      return 3221225485LL;
    }
    *((_DWORD *)a2 + 52) = v12;
  }
  return 0LL;
}
