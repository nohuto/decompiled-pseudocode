/*
 * XREFs of ApiSetEditionNeedsTouchTargeting @ 0x1400C5EE8
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C4988 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     EditionNeedsTouchTargeting @ 0x140136374 (EditionNeedsTouchTargeting.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionNeedsTouchTargeting(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int (*v7)(void); // rax

  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6072LL);
  if ( v7 && v7() >= 0 )
    return (unsigned int)EditionNeedsTouchTargeting(a1, a2, a3);
  return v6;
}
