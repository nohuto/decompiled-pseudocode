/*
 * XREFs of ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1401CF0B4
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400B8694 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1401CF070 (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?SameProccess@PFEOBJ@@QEAAHXZ @ 0x1401CF220 (-SameProccess@PFEOBJ@@QEAAHXZ.c)
 */

struct PFE *__fastcall ppfeGetPFEFromUFIInternal(struct _UNIVERSAL_FONT_ID *a1, __int64 a2, int a3)
{
  int v4; // ebx
  __int64 v6; // r15
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // r8d
  unsigned int v13; // eax
  __int64 i; // rdx
  int v16; // eax
  bool v17; // zf
  _QWORD *j; // rdi
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0LL;
  v7 = -1;
  v8 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  if ( v4 )
    v10 = *(_QWORD *)(v8 + 20408);
  else
    v10 = *(_QWORD *)(v8 + 20416);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( a1 )
    {
      v12 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 == 1 )
        v13 = *((_DWORD *)a1 + 1);
      else
        v13 = *(_DWORD *)a1;
      for ( i = *(_QWORD *)(v11 + 8LL * (v13 % *(_DWORD *)(v11 + 8)) + 40); i; i = *(_QWORD *)i )
      {
        v16 = *(_DWORD *)(i + 60);
        if ( v16 == 1 && v12 == 1 )
          v17 = *(_DWORD *)(i + 64) == *((_DWORD *)a1 + 1);
        else
          v17 = v16 == v12;
        if ( v17 )
        {
          for ( j = *(_QWORD **)(i + 8); j; j = (_QWORD *)*j )
          {
            v19 = j[1];
            v20 = *(_DWORD *)a1;
            v21 = v19;
            if ( *(_DWORD *)(v19 + 84) == v20
              && *(_DWORD *)(v19 + 88) == *((_DWORD *)a1 + 1)
              && (!a3 || (unsigned int)PFEOBJ::SameProccess((PFEOBJ *)&v21))
              && (*(_DWORD *)(v19 + 12) & 2) == 0 )
            {
              if ( !*(_QWORD *)(v19 + 96) || *(struct _GRETHREAD **)(v19 + 96) == GreGetCurrentThread(v9, i) )
                i = 2LL;
              else
                i = 0LL;
              v9 = (unsigned int)(i + 1);
              if ( (*(_DWORD *)(v19 + 12) & 8) != 0 )
                v9 = (unsigned int)i;
              if ( (int)v9 > v7 )
              {
                v6 = j[1];
                v7 = v9;
              }
            }
          }
          return (struct PFE *)v6;
        }
      }
    }
  }
  return 0LL;
}
