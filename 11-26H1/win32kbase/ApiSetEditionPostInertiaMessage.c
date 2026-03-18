/*
 * XREFs of ApiSetEditionPostInertiaMessage @ 0x1401BB814
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     EditionPostInertiaMessage @ 0x1401836B8 (EditionPostInertiaMessage.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostInertiaMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // ebx
  int (*v10)(void); // rax

  v9 = 0;
  v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6016LL);
  if ( v10 && v10() >= 0 )
    return (unsigned int)EditionPostInertiaMessage(a1, a2, a3, a4, a5);
  return v9;
}
