/*
 * XREFs of ApiSetEditionPostInertiaMessage @ 0x140196584
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1401519B8 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     EditionPostInertiaMessage @ 0x14014D8EC (EditionPostInertiaMessage.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostInertiaMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // ebp
  unsigned int v9; // ebx
  int (*v10)(void); // rax

  v7 = a2;
  v9 = 0;
  v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6456LL);
  if ( v10 && v10() >= 0 )
    return (unsigned int)EditionPostInertiaMessage(a1, v7, a3, a4, a5);
  return v9;
}
