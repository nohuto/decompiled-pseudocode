/*
 * XREFs of ConvertVideoStandardType @ 0x14006499C
 * Callers:
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14006D9D8 (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertVideoStandardType(int a1, _DWORD *a2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 result; // rax

  if ( a1 > 14 )
  {
    if ( a1 > 21 )
    {
      v14 = a1 - 22;
      if ( a1 == 22 )
      {
        *a2 = 22;
        return 0LL;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        *a2 = 23;
        return 0LL;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        *a2 = 24;
        return 0LL;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        *a2 = 25;
        return 0LL;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        *a2 = 26;
        return 0LL;
      }
      if ( v18 == 1 )
      {
        *a2 = 27;
        return 0LL;
      }
    }
    else
    {
      if ( a1 == 21 )
      {
        *a2 = 21;
        return 0LL;
      }
      v9 = a1 - 15;
      if ( a1 == 15 )
      {
        *a2 = 15;
        return 0LL;
      }
      v10 = v9 - 1;
      if ( !v10 )
      {
        *a2 = 16;
        return 0LL;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        *a2 = 17;
        return 0LL;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        *a2 = 18;
        return 0LL;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        *a2 = 19;
        return 0LL;
      }
      if ( v13 == 1 )
      {
        *a2 = 20;
        return 0LL;
      }
    }
    goto LABEL_54;
  }
  if ( a1 == 14 )
  {
    *a2 = 14;
    return 0LL;
  }
  if ( a1 > 7 )
  {
    v4 = a1 - 8;
    if ( a1 == 8 )
    {
      *a2 = 8;
      return 0LL;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      *a2 = 9;
      return 0LL;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      *a2 = 10;
      return 0LL;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      *a2 = 11;
      return 0LL;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      *a2 = 12;
      return 0LL;
    }
    if ( v8 == 1 )
    {
      *a2 = 13;
      return 0LL;
    }
    goto LABEL_54;
  }
  switch ( a1 )
  {
    case 7:
      *a2 = 7;
      return 0LL;
    case 0:
      *a2 = 255;
      return 0LL;
    case 1:
      *a2 = 1;
      return 0LL;
    case 2:
      *a2 = 2;
      return 0LL;
    case 3:
      *a2 = 3;
      return 0LL;
    case 4:
      *a2 = 4;
      return 0LL;
    case 5:
      *a2 = 5;
      return 0LL;
  }
  if ( a1 != 6 )
  {
LABEL_54:
    WdLogSingleEntry1(2LL);
    result = 3223192354LL;
    WdLogGlobalForLineNumber = 501;
    *a2 = 0;
    return result;
  }
  *a2 = 6;
  return 0LL;
}
