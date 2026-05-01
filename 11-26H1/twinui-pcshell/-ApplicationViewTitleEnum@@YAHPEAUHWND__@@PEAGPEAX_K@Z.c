/*
 * XREFs of ?ApplicationViewTitleEnum@@YAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801907D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitleEnum(HWND a1, const WCHAR *a2, HANDLE a3, __int64 a4)
{
  unsigned int v5; // esi
  char *v6; // rbx
  __int64 v8; // rcx
  signed __int64 v9; // rdi
  __int16 v10; // ax
  char *v11; // rax

  v5 = 1;
  if ( (unsigned __int64)a2 >= 0xC000 )
  {
    v6 = (char *)(a4 + 8);
    if ( !StrCmpNIW((PCWSTR)(a4 + 8), a2, *(_DWORD *)a4) )
    {
      v8 = 255LL;
      v9 = (char *)a2 - v6;
      do
      {
        if ( v8 == -2147483391 )
          break;
        v10 = *(_WORD *)&v6[v9];
        if ( !v10 )
          break;
        *(_WORD *)v6 = v10;
        v6 += 2;
        --v8;
      }
      while ( v8 );
      v11 = v6 - 2;
      v5 = 0;
      if ( v8 )
        v11 = v6;
      *(_WORD *)v11 = 0;
    }
  }
  return v5;
}
