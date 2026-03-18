/*
 * XREFs of ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x140205C24
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400C74D0 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x140205BE0 (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?SameProccess@PFEOBJ@@QEAAHXZ @ 0x140205D64 (-SameProccess@PFEOBJ@@QEAAHXZ.c)
 */

struct PFE *__fastcall ppfeGetPFEFromUFIInternal(struct _UNIVERSAL_FONT_ID *a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  int v6; // r15d
  __int64 v7; // rcx
  int v8; // r8d
  unsigned int v9; // eax
  __int64 *i; // rsi
  int v12; // eax
  bool v13; // zf
  _QWORD *j; // rsi
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // edx
  struct _GRETHREAD *v18; // rdi
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = -1;
  v7 = *(_QWORD *)((-(__int64)((_DWORD)a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL)
                 + *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96)
                 + 20392);
  if ( v7 && a1 )
  {
    v8 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 1 )
      v9 = *((_DWORD *)a1 + 1);
    else
      v9 = *(_DWORD *)a1;
    for ( i = *(__int64 **)(*(_QWORD *)(v7 + 16) + 8LL * (v9 % *(_DWORD *)(*(_QWORD *)(v7 + 16) + 8LL)) + 40);
          ;
          i = (__int64 *)*i )
    {
      if ( !i )
        return 0LL;
      v12 = *((_DWORD *)i + 15);
      if ( v12 == 1 )
      {
        if ( v8 != 1 )
          continue;
        v13 = *((_DWORD *)i + 16) == *((_DWORD *)a1 + 1);
      }
      else
      {
        v13 = v12 == v8;
      }
      if ( v13 )
      {
        for ( j = (_QWORD *)i[1]; j; j = (_QWORD *)*j )
        {
          v15 = j[1];
          v16 = *(_DWORD *)a1;
          v19 = v15;
          if ( *(_DWORD *)(v15 + 84) == v16
            && *(_DWORD *)(v15 + 88) == *((_DWORD *)a1 + 1)
            && (!a3 || (unsigned int)PFEOBJ::SameProccess((PFEOBJ *)&v19))
            && (*(_DWORD *)(v15 + 12) & 2) == 0 )
          {
            if ( !*(_QWORD *)(v15 + 96) || (v18 = *(struct _GRETHREAD **)(v15 + 96), v18 == GreGetCurrentThread(v7)) )
              v17 = 2;
            else
              v17 = 0;
            v7 = v17 + 1;
            if ( (*(_DWORD *)(v15 + 12) & 8) != 0 )
              v7 = v17;
            if ( (int)v7 > v6 )
            {
              v5 = j[1];
              v6 = v7;
            }
          }
        }
        return (struct PFE *)v5;
      }
    }
  }
  return 0LL;
}
