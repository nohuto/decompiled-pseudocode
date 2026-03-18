/*
 * XREFs of ?KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z @ 0x1403759C0
 * Callers:
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x140274C5C (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x1403754D0 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AutoBoost::KiAbpOwnerComputeCpuPriorityKey(AutoBoost *this, struct AutoBoost::_AB_THREAD_ENTRY *a2)
{
  int v2; // r8d
  unsigned int v3; // r8d
  int v4; // ecx
  __int64 result; // rax

  v2 = 0;
  if ( (*((_DWORD *)this + 10) & 0x3FFFFFFF) != 0 )
  {
    _BitScanReverse(&v3, *((_DWORD *)this + 10) & 0x3FFFFFFF);
    v2 = v3 + 1;
  }
  v4 = *(char *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 563LL);
  if ( v4 <= v2 )
    return (unsigned __int8)v2;
  result = 30LL;
  if ( v4 < 30 )
    return (unsigned int)v4;
  return result;
}
