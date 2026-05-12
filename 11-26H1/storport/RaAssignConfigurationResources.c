/*
 * XREFs of RaAssignConfigurationResources @ 0x1401887FC
 * Callers:
 *     RaInitializeMiniport @ 0x1401835AC (RaInitializeMiniport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaAssignConfigurationResources(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r11d
  unsigned int i; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  __int16 v10; // ax

  v5 = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i )
  {
    if ( *(_BYTE *)(a2 + 20LL * i + 20) == 1 )
    {
      if ( a3 > v5 )
      {
        v7 = *(_QWORD *)(a1 + 56);
        v8 = 2LL * v5;
        *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(a2 + 20LL * i + 24);
        v9 = *(_DWORD *)(a2 + 20LL * i + 32);
        *(_BYTE *)(v7 + 8 * v8 + 12) = 0;
        goto LABEL_18;
      }
    }
    else
    {
      if ( *(_BYTE *)(a2 + 20LL * i + 20) == 2 )
      {
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(a2 + 20LL * i + 24);
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 20LL * i + 28);
        v10 = *(_WORD *)(a2 + 20LL * i + 22);
        if ( v10 == 1 )
        {
          *(_DWORD *)(a1 + 20) = 1;
        }
        else if ( !v10 )
        {
          *(_DWORD *)(a1 + 20) = 0;
        }
        continue;
      }
      if ( *(_BYTE *)(a2 + 20LL * i + 20) != 3 )
      {
        if ( *(_BYTE *)(a2 + 20LL * i + 20) == 4 )
        {
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 20LL * i + 24);
          *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 20LL * i + 28);
        }
        else if ( *(_BYTE *)(a2 + 20LL * i + 20) == 5 && *(_DWORD *)(a2 + 20LL * i + 24) >= 6u )
        {
          *(_BYTE *)(a1 + 73) = *(_BYTE *)(a2 + 20LL * i + 44);
        }
        continue;
      }
      if ( a3 > v5 )
      {
        v7 = *(_QWORD *)(a1 + 56);
        v8 = 2LL * v5;
        *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(a2 + 20LL * i + 24);
        v9 = *(_DWORD *)(a2 + 20LL * i + 32);
        *(_BYTE *)(v7 + 8 * v8 + 12) = 1;
LABEL_18:
        ++v5;
        *(_DWORD *)(v7 + 8 * v8 + 8) = v9;
      }
    }
  }
  return 0LL;
}
