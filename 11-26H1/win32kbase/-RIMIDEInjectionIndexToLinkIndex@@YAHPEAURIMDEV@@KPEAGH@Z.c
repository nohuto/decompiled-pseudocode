/*
 * XREFs of ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1402070F4
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x140154A10 (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEInjectionIndexToLinkIndex(struct RIMDEV *a1, int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  unsigned int v5; // r10d
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // r8d
  unsigned __int16 v12; // ax
  _DWORD *v13; // rdx
  __int64 v14; // r9
  unsigned int j; // eax
  __int64 v16; // rcx
  unsigned int i; // ecx
  unsigned __int16 v18; // ax

  v4 = *((_QWORD *)a1 + 46);
  v5 = 0;
  *a3 = 0;
  v8 = *(_QWORD *)(v4 + 72);
  if ( (*((_DWORD *)a1 + 46) & 0x80u) == 0 )
    return 1LL;
  v9 = *((_QWORD *)a1 + 57);
  v10 = *(_QWORD *)(v9 + 768);
  v11 = *(_DWORD *)(v9 + 776) - 1;
  if ( *(_DWORD *)(v9 + 24) != 7 )
    v11 = *(_DWORD *)(v9 + 776);
  if ( !v10 || !a2 )
    return 1LL;
  if ( a4 )
  {
    v12 = *(_WORD *)(v10 + 6);
    if ( v11 )
    {
      v13 = (_DWORD *)(v8 + 4);
      v14 = v11;
      do
      {
        *((_WORD *)v13 - 1) = v12;
        v12 = *(_WORD *)(*(_QWORD *)(v10 + 24) + 8LL * v12 + 4);
        *v13 = 0;
        v13 += 2;
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    for ( i = 0; i < v11; ++i )
    {
      if ( *(unsigned __int16 *)(v8 + 8LL * i) == a2 && *(_DWORD *)(v8 + 8LL * i + 4) )
      {
        v18 = *(_WORD *)(v8 + 8LL * i + 2);
LABEL_21:
        v5 = 1;
        *a3 = v18;
        return v5;
      }
    }
  }
  for ( j = 0; j < v11; ++j )
  {
    v16 = j;
    if ( !*(_DWORD *)(v8 + 8LL * j + 4) )
    {
      v18 = *(_WORD *)(v8 + 8LL * j + 2);
      *(_WORD *)(v8 + 8 * v16) = a2;
      *(_DWORD *)(v8 + 8 * v16 + 4) = 1;
      goto LABEL_21;
    }
  }
  return v5;
}
