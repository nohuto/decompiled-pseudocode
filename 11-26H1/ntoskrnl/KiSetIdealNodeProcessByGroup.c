/*
 * XREFs of KiSetIdealNodeProcessByGroup @ 0x1404ADD98
 * Callers:
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     KiExtendProcessAffinity @ 0x1405FBEA8 (KiExtendProcessAffinity.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 * Callees:
 *     ?KiSelectIdealProcessorForProcess@@YAGPEAU_KSCHEDULER_SUBNODE@@PEAU_GROUP_AFFINITY@@@Z @ 0x1404ADE78 (-KiSelectIdealProcessorForProcess@@YAGPEAU_KSCHEDULER_SUBNODE@@PEAU_GROUP_AFFINITY@@@Z.c)
 *     KeSelectNodeForAffinity @ 0x1404ADF48 (KeSelectNodeForAffinity.c)
 */

unsigned __int16 __fastcall KiSetIdealNodeProcessByGroup(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 *v3; // rbp
  __int64 v4; // rbx
  struct _KSCHEDULER_SUBNODE *v5; // rsi
  unsigned __int64 v7; // rbp
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int16 result; // ax
  struct _GROUP_AFFINITY v14; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(unsigned __int16 **)(a1 + 80);
  v4 = a3;
  v5 = 0LL;
  v14 = 0LL;
  v14.Group = a3;
  if ( a3 >= *v3 )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)&v3[4 * a3 + 4];
  v14.Mask = v7;
  if ( !a2 )
    a2 = KeSelectNodeForAffinity(&v14);
  v8 = 0;
  while ( 1 )
  {
    v9 = v8;
    if ( v8 >= *(_DWORD *)(a2 + 48) )
      break;
    v10 = *(_QWORD *)(a2 + 32);
    ++v8;
    v11 = *(_QWORD *)(v10 + 8 * v9);
    if ( *(_WORD *)(v11 + 136) == (_WORD)v4 && (v7 & *(_QWORD *)(v11 + 128)) != 0 )
    {
      v5 = *(struct _KSCHEDULER_SUBNODE **)(v10 + 8 * v9);
      break;
    }
  }
  v12 = *(_QWORD *)(a1 + 184);
  *(_WORD *)(v12 + 2 * v4 + 144) = *(_WORD *)a2;
  v14.Mask = v7 & v5->Affinity.Mask;
  result = KiSelectIdealProcessorForProcess(v5, &v14);
  *(_WORD *)(v12 + 2 * v4 + 80) = result;
  *(_WORD *)(v12 + 2 * v4 + 16) = result;
  return result;
}
