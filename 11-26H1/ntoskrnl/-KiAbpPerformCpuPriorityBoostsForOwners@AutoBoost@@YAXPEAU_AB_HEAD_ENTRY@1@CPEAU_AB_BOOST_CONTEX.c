/*
 * XREFs of ?KiAbpPerformCpuPriorityBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@CPEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BD8
 * Callers:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 * Callees:
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 */

void __fastcall AutoBoost::KiAbpPerformCpuPriorityBoostsForOwners(
        AutoBoost *this,
        struct AutoBoost::_AB_HEAD_ENTRY *a2,
        __int64 a3,
        struct AutoBoost::_AB_BOOST_CONTEXT *a4)
{
  unsigned __int64 v4; // rbx
  char v6; // si
  unsigned __int64 v7; // rax
  _QWORD **v8; // rcx
  _QWORD *i; // rcx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+10h]

  v4 = *((_QWORD *)this + 6);
  v6 = (char)a2;
  v11 = (unsigned __int8)a2;
  while ( v4 )
  {
    v10 = 0;
    if ( *(char *)(v4 + 29) >= v6 )
      break;
    AutoBoost::KiAbpApplyTargetPriority(
      *(_QWORD *)(v4 - 8 - 48LL * (*(_BYTE *)(v4 + 28) & 0x7F) - 16),
      v4 - 8,
      v11,
      a3,
      &v10);
    *(_BYTE *)(v4 + 29) = v6;
    v7 = v4;
    v8 = *(_QWORD ***)(v4 + 8);
    if ( v8 )
    {
      v4 = *(_QWORD *)(v4 + 8);
      for ( i = *v8; i; i = (_QWORD *)*i )
        v4 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v4 || *(_QWORD *)v4 == v7 )
          break;
        v7 = v4;
      }
    }
  }
}
