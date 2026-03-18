/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18014BE34
 * Callers:
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18014BD88 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, enum ColorSpace *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx

  v2 = 0;
  if ( a1 > 67 )
  {
    v12 = a1 - 87;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 3;
        if ( v14 )
        {
          v15 = v14 - 12;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 2;
              if ( v17 )
              {
                v11 = v17 == 1;
LABEL_22:
                if ( !v11 )
                  return (unsigned int)-2003292344;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    if ( a1 == 67 )
    {
      *(_DWORD *)a2 = 3;
      return v2;
    }
    v3 = a1 - 2;
    if ( !v3 || (v4 = v3 - 8) == 0 )
    {
      *(_DWORD *)a2 = 2;
      return v2;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v7 = v5 - 13;
      if ( v7 )
      {
        v8 = v7 - 4;
        if ( v8 )
        {
          v9 = v8 - 21;
          if ( v9 )
          {
            v10 = v9 - 12;
            if ( v10 )
            {
              v11 = v10 == 4;
              goto LABEL_22;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)a2 = 1;
  return v2;
}
