/*
 * XREFs of ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1401E5364
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x14012BF48 (_ChangeWindowMessageFilterEx.c)
 *     SetGestureConfigSettings @ 0x1401E4CF4 (SetGestureConfigSettings.c)
 *     _RegisterShellHookWindow @ 0x1401E52EC (_RegisterShellHookWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLAddBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  unsigned int *v4; // r10
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned int i; // ecx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx

  v4 = (unsigned int *)*a1;
  if ( *a1 )
  {
    if ( !v4[3] )
    {
      v19 = *v4;
      for ( i = 0; i < v19; ++i )
      {
        if ( a3 == *(struct tagWND **)&v4[4 * i + 6] )
          return 0LL;
      }
      v15 = v4[1];
      if ( v19 < (unsigned int)v15 )
        goto LABEL_11;
      v16 = 16 * v15;
      if ( v16 <= 0xFFFFFFFF )
      {
        v17 = v16 + 16;
        if ( (unsigned int)v16 < 0xFFFFFFF0 )
        {
          v18 = 16LL * v4[2];
          if ( v18 <= 0xFFFFFFFF && v17 + (unsigned int)v18 >= v17 )
          {
            v11 = UserReAllocPool(v4, v17, v17 + (unsigned int)v18, 1819702101LL);
            v4 = (unsigned int *)v11;
            if ( v11 )
            {
              *(_DWORD *)(v11 + 4) += *(_DWORD *)(v11 + 8);
              goto LABEL_10;
            }
          }
        }
      }
    }
    return 0LL;
  }
  v9 = 16LL * a4;
  if ( v9 > 0xFFFFFFFF )
    return 0LL;
  v10 = v9 + 16;
  if ( v10 < 0x10 )
    return 0LL;
  v11 = Win32AllocPoolZInit(v10, 1819702101LL);
  v4 = (unsigned int *)v11;
  if ( !v11 )
    return 0LL;
  *(_DWORD *)(v11 + 4) = a4;
  *(_DWORD *)(v11 + 8) = a4;
  *(_DWORD *)v11 = 0;
  *(_DWORD *)(v11 + 12) = 0;
LABEL_10:
  *a1 = (struct tagVWPL *)v11;
LABEL_11:
  result = 1LL;
  v13 = 2LL * *v4;
  *(_QWORD *)&v4[2 * v13 + 6] = a3;
  *(_QWORD *)&v4[2 * v13 + 4] = a2;
  ++*v4;
  return result;
}
