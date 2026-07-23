/*
 * XREFs of CmpGetSubKeyCountForKeyNodeStack @ 0x140AE2504
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14048C128 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140AE2444 (CmpGetSubKeyCountForKcbStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpKeyEnumStackStart @ 0x140943C40 (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackAdvance @ 0x140943FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackInitialize @ 0x140944064 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x1409443C8 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpCleanupKeyNodeStack @ 0x140944480 (CmpCleanupKeyNodeStack.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140944550 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140944570 (CmpKeyEnumStackEntryBegin.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKeyNodeStack(__int64 a1, int *a2)
{
  __int16 i; // dx
  int j; // ebx
  int v6; // edi
  __int16 k; // bx
  __int64 v8; // rax
  char *v9; // rcx
  __int16 v11; // dx
  unsigned __int16 v12; // r9
  __int16 v13; // bx
  __int64 *EntryAtLayerHeight; // r10
  __int64 v15; // rdx
  int EffectiveKeyNodeSemantics; // edi
  _QWORD *v17; // r9
  __int64 v18; // r10
  __int16 v19; // ax
  int v20; // eax
  __int16 v21; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v22[336]; // [rsp+28h] [rbp-D8h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+178h] [rbp+78h]

  memset_0(&v21, 0, 0x160uLL);
  CmpKeyEnumStackInitialize((char *)&v21);
  for ( i = *(_WORD *)a1; ; i = v11 - 1 )
  {
    if ( i <= 0 )
    {
      j = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 20LL) + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
LABEL_4:
      *a2 = j;
      v6 = 0;
      goto LABEL_5;
    }
    if ( *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, i) + 16) )
      break;
  }
  v6 = CmpKeyEnumStackStart((__int64)&v21, v12);
  if ( v6 >= 0 )
  {
    v13 = v21;
    if ( v21 >= 0 )
    {
      do
      {
        EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, v13);
        v15 = EntryAtLayerHeight[2];
        if ( v15 )
        {
          EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v15);
          if ( EffectiveKeyNodeSemantics == 1 )
            break;
          CmpKeyEnumStackEntryBegin(v17, v18, 0LL);
          if ( (EffectiveKeyNodeSemantics & 0xFFFFFFFD) != 0 )
            break;
          v19 = v13;
        }
        else
        {
          v19 = v13;
        }
        v13 = v19 - 1;
      }
      while ( (__int16)(v19 - 1) >= 0 );
    }
    for ( j = 0; ; ++j )
    {
      v20 = CmpKeyEnumStackAdvance(&v21);
      v6 = v20;
      if ( v20 == -2147483622 )
        break;
      if ( v20 < 0 )
        goto LABEL_5;
    }
    goto LABEL_4;
  }
LABEL_5:
  CmpCleanupKeyNodeStack((__int64)v22);
  for ( k = 0; k <= v21; ++k )
  {
    v8 = (unsigned int)k;
    if ( k >= 2 )
      v9 = (char *)Privileges + 128 * (unsigned __int64)(unsigned int)(v8 - 2);
    else
      v9 = &v22[128 * v8 + 80];
    CmpKeyEnumStackEntryCleanup(v9);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)v6;
}
