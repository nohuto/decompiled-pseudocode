/*
 * XREFs of ?TestModifyInternalPanelInfo@DISPLAY_MUX_MGR@@QEAAJXZ @ 0x14008FEB0
 * Callers:
 *     DpiDrtModifyInternalPanelInfoCacheMux @ 0x140090340 (DpiDrtModifyInternalPanelInfoCacheMux.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DISPLAY_MUX_MGR::TestModifyInternalPanelInfo(DISPLAY_MUX_MGR *this)
{
  __int64 v2; // r8
  __int64 i; // r10
  unsigned int v4; // ebx
  char *v5; // rdx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // eax

  if ( !*((_BYTE *)this + 148) || !*((_BYTE *)this + 149) )
    return 0LL;
  v2 = *(unsigned int *)((char *)this + 158);
  if ( (unsigned int)v2 < 0x10 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= (unsigned int)v2 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3626;
        return 3221225473LL;
      }
      v4 = *(_DWORD *)((char *)this + 12 * i + 174);
      if ( v4 )
      {
        if ( (*(_DWORD *)((char *)this + 12 * i + 170) - *(_DWORD *)((char *)this + 12 * i + 166)) / v4 + 1 >= 4 )
          break;
      }
    }
    v5 = (char *)this + 12 * v2 + 166;
    do
    {
      v2 = (unsigned int)(v2 - 1);
      v6 = *(_DWORD *)((char *)this + 12 * v2 + 174);
      *(_QWORD *)v5 = *(_QWORD *)((char *)this + 12 * v2 + 166);
      *((_DWORD *)v5 + 2) = v6;
      v5 -= 12;
    }
    while ( (unsigned int)v2 > (unsigned int)i );
    v7 = *(_DWORD *)((char *)this + 12 * i + 166);
    v8 = *(_DWORD *)((char *)this + 12 * i + 174);
    *(_DWORD *)((char *)this + 12 * i + 170) = v8 + v7;
    *(_DWORD *)((char *)this + 12 * (unsigned int)(i + 1) + 166) = v7 + 2 * v8;
    ++*(_DWORD *)((char *)this + 158);
    v9 = *(_DWORD *)((char *)this + 154);
    if ( (unsigned int)i < v9 )
      *(_DWORD *)((char *)this + 154) = v9 + 1;
    return 0LL;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 3657;
  return 3221225473LL;
}
