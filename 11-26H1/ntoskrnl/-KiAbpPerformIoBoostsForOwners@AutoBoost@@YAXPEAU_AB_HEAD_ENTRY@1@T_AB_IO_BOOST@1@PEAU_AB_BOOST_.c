/*
 * XREFs of ?KiAbpPerformIoBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@T_AB_IO_BOOST@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376B00
 * Callers:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 * Callees:
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 */

__int64 __fastcall AutoBoost::KiAbpPerformIoBoostsForOwners(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // rbx
  char v4; // al
  __int64 result; // rax
  __int64 **v7; // rcx
  __int64 *v8; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h]

  v3 = *(_QWORD **)(a1 + 48);
  v10 = 0;
  v4 = 0;
  if ( (a2 & 1) != 0 )
    v4 = 2;
  BYTE1(v10) = v4;
  result = BYTE2(v10);
  if ( (a2 & 2) != 0 )
    result = 1LL;
  BYTE2(v10) = result;
  while ( v3 )
  {
    v9 = 0;
    AutoBoost::KiAbpApplyTargetPriority(v3[-6 * (*((_BYTE *)v3 + 28) & 0x7F) - 3], v3 - 1, v10, a3, &v9);
    v7 = (__int64 **)v3[1];
    result = (__int64)v3;
    if ( v7 )
    {
      v3 = (_QWORD *)v3[1];
      v8 = *v7;
      if ( v8 )
      {
        do
        {
          result = *v8;
          v3 = v8;
          v8 = (__int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || *v3 == result )
          break;
        result = (__int64)v3;
      }
    }
  }
  return result;
}
