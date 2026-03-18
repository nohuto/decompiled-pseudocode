/*
 * XREFs of ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402D9570
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1402D77B8 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x14034A3DC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1402D975C (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?RemoveMode@MODE_UNION_LIST@@AEAAXI@Z @ 0x1402D99A0 (-RemoveMode@MODE_UNION_LIST@@AEAAXI@Z.c)
 *     _UpgradeDispModeFlags @ 0x1402D9A60 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddUniqueMode(MODE_UNION_LIST *this, const struct _D3DKMT_DISPLAYMODE *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v6; // r15
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // ecx
  unsigned __int32 Width; // eax
  int v12; // r10d
  int v13; // ecx
  __int64 v14; // rax
  int v15; // r8d
  unsigned __int32 Height; // ecx
  int v17; // eax
  __int64 v18; // rcx

  LODWORD(v2) = *((_DWORD *)this + 4);
  v3 = 0;
  if ( !(_DWORD)v2 )
    return (unsigned int)MODE_UNION_LIST::AddMode(this, a2, v2);
  v6 = *((_QWORD *)this + 4);
  v7 = (unsigned int)(v2 - 1);
  v8 = *((_QWORD *)this + 1);
  v9 = 44LL * *(unsigned int *)(v6 + 4 * v7);
  v10 = *(_DWORD *)(v9 + v8);
  if ( a2->Width != v10 )
  {
    Width = a2->Width;
    goto LABEL_12;
  }
  v10 = *(_DWORD *)(v9 + v8 + 4);
  Width = a2->Height;
  if ( Width != v10 )
    goto LABEL_12;
  v10 = *(_DWORD *)(v9 + v8 + 8);
  Width = a2->Format;
  if ( Width != v10 )
    goto LABEL_12;
  v10 = (*(_DWORD *)(v9 + v8 + 40) >> 4) & 1;
  Width = (*((_DWORD *)&a2->Flags + 1) >> 4) & 1;
  if ( Width != v10 )
    goto LABEL_12;
  v10 = *(_DWORD *)(v9 + v8 + 12);
  Width = a2->IntegerRefreshRate;
  if ( Width != v10
    || (v10 = *(_DWORD *)(v9 + v8 + 24), Width = a2->ScanLineOrdering, Width != v10)
    || (v10 = *(_DWORD *)(v9 + v8 + 32), Width = a2->DisplayFixedOutput, Width != v10)
    || (v10 = *(_DWORD *)(v9 + v8 + 28), Width = a2->DisplayOrientation, Width != v10) )
  {
LABEL_12:
    if ( (int)(Width - v10) > 0 )
      return (unsigned int)MODE_UNION_LIST::AddMode(this, a2, v2);
  }
  v12 = 0;
  v2 = 0LL;
  v13 = 0;
  if ( (int)v7 < 0 )
    goto LABEL_30;
  while ( 1 )
  {
    v2 = (unsigned int)(((int)v7 + v12) >> 1);
    v14 = 44LL * *(unsigned int *)(v6 + 4LL * (int)v2);
    v15 = *(_DWORD *)(v14 + v8);
    if ( a2->Width != v15 )
    {
      Height = a2->Width;
      goto LABEL_24;
    }
    v15 = *(_DWORD *)(v14 + v8 + 4);
    Height = a2->Height;
    if ( Height == v15 )
    {
      v15 = *(_DWORD *)(v14 + v8 + 8);
      Height = a2->Format;
      if ( Height == v15 )
      {
        v15 = (*(_DWORD *)(v14 + v8 + 40) >> 4) & 1;
        Height = (*((_DWORD *)&a2->Flags + 1) >> 4) & 1;
        if ( Height == v15 )
        {
          v15 = *(_DWORD *)(v14 + v8 + 12);
          Height = a2->IntegerRefreshRate;
          if ( Height == v15 )
          {
            v15 = *(_DWORD *)(v14 + v8 + 24);
            Height = a2->ScanLineOrdering;
            if ( Height == v15 )
            {
              v15 = *(_DWORD *)(v14 + v8 + 32);
              Height = a2->DisplayFixedOutput;
              if ( Height == v15 )
              {
                v15 = *(_DWORD *)(v14 + v8 + 28);
                Height = a2->DisplayOrientation;
                if ( Height == v15 )
                  break;
              }
            }
          }
        }
      }
    }
LABEL_24:
    v13 = Height - v15;
    if ( v13 )
    {
      v17 = v2 - 1;
      if ( v13 >= 0 )
        v17 = v7;
      LODWORD(v7) = v17;
      if ( v13 >= 0 )
        v12 = v2 + 1;
      if ( v12 <= v17 )
        continue;
    }
    goto LABEL_30;
  }
  v13 = 0;
LABEL_30:
  if ( v13 > 0 )
    v2 = (unsigned int)(v2 + 1);
  if ( v13 )
    v18 = 0LL;
  else
    v18 = v8 + 44LL * *(unsigned int *)(v6 + 4 * v2);
  if ( v18 )
  {
    if ( (*(_DWORD *)(v18 + 36) & 2) != 0 )
    {
      MODE_UNION_LIST::RemoveMode(this, v2);
      MODE_UNION_LIST::AddMode(this, a2, v2);
    }
    else
    {
      UpgradeDispModeFlags();
    }
  }
  else
  {
    return (unsigned int)MODE_UNION_LIST::AddMode(this, a2, v2);
  }
  return v3;
}
