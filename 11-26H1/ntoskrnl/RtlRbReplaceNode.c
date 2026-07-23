/*
 * XREFs of RtlRbReplaceNode @ 0x140448EB0
 * Callers:
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448C0C (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRbReplaceNode(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 *v5; // r9
  __int64 v6; // rcx
  _QWORD *result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  v4 = 0LL;
  *(_OWORD *)a3 = *(_OWORD *)a2;
  v5 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)(*(_QWORD *)a3 + 16LL) = a3 | *(_DWORD *)(*(_QWORD *)a3 + 16LL) & 3;
  }
  else
  {
    v8 = *v5;
    if ( (*v5 & 1) != 0 )
    {
      if ( v8 == 1 )
        v9 = 0LL;
      else
        v9 = v8 ^ (a1 | 1);
    }
    else
    {
      v9 = *v5;
    }
    if ( v9 == a2 )
    {
      if ( (v8 & 1) != 0 )
      {
        v10 = 0LL;
        if ( a3 )
          v10 = a3 ^ a1;
        *v5 = v10;
        *(_BYTE *)v5 = v10 | 1;
      }
      else
      {
        *v5 = a3;
      }
    }
  }
  v6 = *(_QWORD *)(a3 + 8);
  if ( v6 )
    *(_QWORD *)(v6 + 16) = a3 | *(_DWORD *)(v6 + 16) & 3;
  result = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( result )
  {
    if ( *result == a2 )
      *result = a3;
    else
      result[1] = a3;
  }
  else if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    result = (_QWORD *)(a3 ^ a1);
    if ( a3 )
      v4 = a3 ^ a1;
    *(_QWORD *)a1 = v4;
  }
  else
  {
    *(_QWORD *)a1 = a3;
  }
  return result;
}
