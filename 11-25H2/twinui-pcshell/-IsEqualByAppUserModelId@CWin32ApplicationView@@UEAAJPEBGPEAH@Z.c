/*
 * XREFs of ?IsEqualByAppUserModelId@CWin32ApplicationView@@UEAAJPEBGPEAH@Z @ 0x180141CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::IsEqualByAppUserModelId(
        CWin32ApplicationView *this,
        const unsigned __int16 *a2,
        int *a3)
{
  int v5; // edi
  int v6; // r9d
  const WCHAR *v7; // rcx
  __int64 v8; // rdx
  LPCWCH lpString1; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  *a3 = 0;
  lpString1 = 0LL;
  v11 = -1LL;
  v12 = -1LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, LPCWCH *))(**((_QWORD **)this + 27) + 32LL))(
         *((_QWORD *)this + 27),
         &lpString1);
  if ( v5 < 0 )
  {
    if ( lpString1 )
      CoTaskMemFree((LPVOID)lpString1);
    return (unsigned int)v5;
  }
  else
  {
    v6 = -(a2 != 0LL);
    v7 = &LocaleName;
    if ( !a2 )
      a2 = &LocaleName;
    LODWORD(v8) = v11;
    if ( v11 == -1 )
    {
      if ( lpString1 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( lpString1[v8] );
      }
      else
      {
        LODWORD(v8) = 0;
      }
    }
    if ( lpString1 )
      v7 = lpString1;
    *a3 = CompareStringOrdinal(v7, v8, a2, v6, 1) == 2;
    if ( lpString1 )
      CoTaskMemFree((LPVOID)lpString1);
    return 0LL;
  }
}
