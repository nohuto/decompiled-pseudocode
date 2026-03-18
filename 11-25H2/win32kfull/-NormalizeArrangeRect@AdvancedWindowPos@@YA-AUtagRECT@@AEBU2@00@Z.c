/*
 * XREFs of ?NormalizeArrangeRect@AdvancedWindowPos@@YA?AUtagRECT@@AEBU2@00@Z @ 0x1402D4EDC
 * Callers:
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D27A4 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D8AA4 (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall AdvancedWindowPos::NormalizeArrangeRect(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG left; // r10d
  INT v7; // r13d
  INT v8; // ebp
  INT v10; // edx
  INT v12; // r12d
  INT v13; // ebx
  INT v14; // eax
  INT v15; // ecx
  INT v16; // eax
  INT v17; // eax
  INT v18; // ecx
  struct tagRECT *result; // rax
  INT b; // [rsp+50h] [rbp+8h]

  left = a3->left;
  v7 = a3->right - a3->left;
  v8 = a3->bottom - a3->top;
  v10 = a4->right - a4->left;
  v12 = a4->bottom - a4->top;
  *this = 0LL;
  b = v10;
  v13 = 0;
  if ( EngMulDiv(retstr->left - left, v10, v7) >= 0 )
    v14 = EngMulDiv(retstr->left - a3->left, b, v7);
  else
    v14 = 0;
  v15 = a3->right - retstr->right;
  this->left = a4->left + v14;
  if ( EngMulDiv(v15, b, v7) >= 0 )
    v16 = EngMulDiv(a3->right - retstr->right, b, v7);
  else
    v16 = 0;
  this->right = a4->right - v16;
  if ( EngMulDiv(retstr->top - a3->top, v12, v8) >= 0 )
    v17 = EngMulDiv(retstr->top - a3->top, v12, v8);
  else
    v17 = 0;
  v18 = a3->bottom - retstr->bottom;
  this->top = a4->top + v17;
  if ( EngMulDiv(v18, v12, v8) >= 0 )
    v13 = EngMulDiv(a3->bottom - retstr->bottom, v12, v8);
  result = this;
  this->bottom = a4->bottom - v13;
  return result;
}
