/*
 * XREFs of ?KiAbpPropagateBoosts@AutoBoost@@YAXPEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140461660
 * Callers:
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 * Callees:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 */

void __fastcall AutoBoost::KiAbpPropagateBoosts(
        AutoBoost *this,
        struct AutoBoost::_AB_BOOST_CONTEXT *a2,
        __int64 a3,
        struct AutoBoost::_AB_BOOST_CONTEXT *a4)
{
  _QWORD **v5; // rdi
  _QWORD *i; // rcx
  volatile signed __int16 *v7; // rsi
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = (_QWORD **)*((_QWORD *)this + 1);
  *((_DWORD *)this + 6) = *((_DWORD *)this + 6) & 0xFFFFFFF8 | 4;
  for ( i = *v5; *v5; i = *v5 )
  {
    v7 = (volatile signed __int16 *)(i - 101);
    *v5 = (_QWORD *)*i;
    *i = 1LL;
    _InterlockedOr(v8, 0);
    if ( *((_BYTE *)i - 16) )
      AutoBoost::KiAbpProcessThreadState((AutoBoost *)(i - 101), *((struct _KTHREAD **)v7 + 142), this, a4);
    _InterlockedDecrement16(v7 + 434);
  }
}
