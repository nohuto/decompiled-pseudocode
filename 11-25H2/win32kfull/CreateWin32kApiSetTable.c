/*
 * XREFs of CreateWin32kApiSetTable @ 0x14020FFD0
 * Callers:
 *     EditionDriverInitialize @ 0x140240B60 (EditionDriverInitialize.c)
 *     ?EditionDriverInitializeOrFault@@YAJH@Z @ 0x140284D88 (-EditionDriverInitializeOrFault@@YAJH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateWin32kApiSetTable(__int64 *a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rdi
  char *v4; // rsi
  __int64 v5; // rbp
  __int64 *v6; // rbx
  char *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  wchar_t **v11; // r9
  __int64 v12; // rdx
  wchar_t ***v13; // r8
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rcx

  Pool2 = ExAllocatePool2(256LL, 48LL, 1953513813LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *a1 = Pool2;
  v4 = (char *)&Win32kApiSetTable - Pool2;
  v5 = 0LL;
  v6 = (__int64 *)(Pool2 + 8);
  v7 = (char *)&off_14039BCE0 - Pool2;
  while ( *(__int64 *)((char *)v6 + (_QWORD)v4) )
  {
    v8 = ExAllocatePool2(256LL, 56LL, 1953513813LL);
    *v6 = v8;
    if ( !v8 )
      return 3221225495LL;
    v9 = ExAllocatePool2(256LL, 8LL * *(int *)(*(__int64 *)((char *)v6 + (_QWORD)v4) + 24), 1953513813LL);
    *(v6 - 1) = v9;
    if ( !v9 )
      return 3221225495LL;
    *(_QWORD *)*v6 = **(_QWORD **)((char *)v6 + (_QWORD)v4);
    *(_QWORD *)(*v6 + 8) = *(_QWORD *)(*(__int64 *)((char *)v6 + (_QWORD)v4) + 8);
    *(_QWORD *)(*v6 + 16) = *(_QWORD *)(*(__int64 *)((char *)v6 + (_QWORD)v4) + 16);
    *(_DWORD *)(*v6 + 24) = *(_DWORD *)(*(__int64 *)((char *)v6 + (_QWORD)v4) + 24);
    v10 = -1LL;
    *(_QWORD *)(*v6 + 32) = 0LL;
    *(_QWORD *)(*v6 + 40) = 0LL;
    v11 = *(wchar_t ***)((char *)v6 + (_QWORD)v7);
    if ( !v11 )
      goto LABEL_14;
    v12 = 0LL;
    if ( v5 <= 0 )
      goto LABEL_14;
    v13 = &off_14039BCE0;
    do
    {
      v14 = *v13 == v11;
      v15 = v12;
      v13 += 3;
      if ( !v14 )
        v15 = v10;
      ++v12;
      v10 = v15;
    }
    while ( v12 < v5 );
    if ( v15 == -1 )
LABEL_14:
      v16 = 0LL;
    else
      v16 = *(_QWORD *)(v3 + 24 * v15 + 8);
    ++v5;
    v6[1] = v16;
    v6 += 3;
  }
  return 0LL;
}
