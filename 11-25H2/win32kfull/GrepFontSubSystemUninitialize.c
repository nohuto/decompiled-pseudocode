/*
 * XREFs of GrepFontSubSystemUninitialize @ 0x14030A0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrepFontSubSystemUninitialize(int a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdi
  void **v8; // rbx
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v3 = *(_QWORD **)(W32GetSessionState(a1, a2) + 96);
  v4 = (void *)v3[2460];
  if ( v4 )
  {
    Win32FreePool(v4);
    v3[2460] = 0LL;
  }
  v5 = (void *)v3[2461];
  if ( v5 )
  {
    Win32FreePool(v5);
    v3[2461] = 0LL;
  }
  v6 = (void *)v3[2465];
  if ( v6 )
  {
    Win32FreePool(v6);
    v3[2465] = 0LL;
  }
  v7 = 6LL;
  v8 = (void **)(v3 + 2468);
  do
  {
    v9 = *v8;
    if ( *v8 )
    {
      Win32FreePool(v9);
      *v8 = 0LL;
    }
    ++v8;
    --v7;
  }
  while ( v7 );
  v10 = *(_QWORD *)(W32GetSessionState((_DWORD)v9, v2) + 96);
  v11 = *(_QWORD *)(v10 + 19808);
  if ( v11 )
    Win32FreePool((void *)(v11 - 2LL * *(unsigned int *)(v10 + 19792)));
}
