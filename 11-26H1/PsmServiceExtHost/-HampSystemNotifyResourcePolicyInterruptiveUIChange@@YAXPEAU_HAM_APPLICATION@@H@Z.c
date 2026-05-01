/*
 * XREFs of ?HampSystemNotifyResourcePolicyInterruptiveUIChange@@YAXPEAU_HAM_APPLICATION@@H@Z @ 0x18005D738
 * Callers:
 *     ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005D5D0 (-HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampSystemNotifyResourcePolicyInterruptiveUIChange(struct _HAM_APPLICATION *a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v5; // rcx

  v2 = *((_QWORD *)a1 + 11);
  v5 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)(v5 - 1968) & 1) != 0 )
    RmRpsNotifyApplicationInterruptiveUIChange(
      *(_QWORD *)(v5 - 1976),
      (char *)a1 + 96,
      v2 + 228,
      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 88) + 160LL) + 88LL),
      a2);
}
