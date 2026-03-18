/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4Enum@MilPixelFormat@@PEAW4ColorSpace@@@Z @ 0x1800E1B74
 * Callers:
 *     ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1800E1A4C (-HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  bool v5; // zf
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  v2 = 0;
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      goto LABEL_6;
    if ( a1 > 8 )
    {
      v6 = a1 - 9;
      v5 = v6 == 0;
    }
    else
    {
      if ( a1 == 8 )
        goto LABEL_6;
      v6 = a1 - 1;
      v5 = v6 == 0;
    }
    if ( v5 )
      goto LABEL_6;
    v12 = v6 - 1;
    if ( !v12 )
      goto LABEL_6;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_6;
    v8 = v13 - 1;
    if ( !v8 )
      goto LABEL_6;
LABEL_27:
    v14 = v8 - 1;
    if ( !v14 )
      goto LABEL_6;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_6;
    v11 = v15 == 1;
LABEL_30:
    if ( v11 )
      goto LABEL_6;
    return (unsigned int)-2003292344;
  }
  if ( a1 > 68 )
  {
    v11 = a1 == 69;
    goto LABEL_30;
  }
  if ( a1 != 68 )
  {
    if ( a1 > 23 )
    {
      v9 = a1 - 24;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( (unsigned int)(v10 - 1) > 1 )
            return (unsigned int)-2003292344;
        }
      }
    }
    else
    {
      if ( a1 == 23 )
        goto LABEL_6;
      v4 = a1 - 17;
      if ( v4 )
      {
        v7 = v4 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
            goto LABEL_27;
        }
      }
    }
    *a2 = 2;
    return v2;
  }
LABEL_6:
  *a2 = 1;
  return v2;
}
