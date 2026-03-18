/*
 * XREFs of ?SendWnfNotificationToVmProcess@DXGGLOBAL@@SAJPEAVDXGPROCESS@@PEBU_WNF_STATE_NAME@@IPEBX@Z @ 0x1401DFC00
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x140055A60 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGGLOBAL::SendWnfNotificationToVmProcess(
        unsigned __int64 a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        const void *a4)
{
  size_t v4; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rbx
  int v12; // eax
  unsigned __int64 v13; // rax
  bool v14; // r8

  v4 = a3;
  v8 = a3 + 47;
  v9 = operator new[](a3 + 103, 0x4B677844u, 64LL);
  v10 = v9;
  if ( !v9 )
    return 3221225495LL;
  *(_QWORD *)(v9 + 16) = DXGGLOBAL::SendWnfNotificationToVmProcessWorkItem;
  v12 = *(_DWORD *)(a1 + 408);
  if ( (v12 & 0x100) != 0 )
    v13 = *(_QWORD *)(a1 + 592);
  else
    v13 = a1 & -(__int64)((v12 & 0x80u) != 0);
  *(_QWORD *)(v10 + 40) = *(_QWORD *)(v13 + 592);
  *(_DWORD *)(v10 + 48) = v8;
  *(_QWORD *)(v10 + 24) = v10;
  *(_QWORD *)(v10 + 88) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 88LL);
  *(_BYTE *)(v10 + 68) = 2;
  *(_DWORD *)(v10 + 68) &= 0x1FFu;
  *(_QWORD *)(v10 + 56) = 0LL;
  *(_DWORD *)(v10 + 64) = 0;
  *(_DWORD *)(v10 + 72) = 4;
  *(_DWORD *)(v10 + 96) = v4;
  memmove((void *)(v10 + 100), a4, v4);
  *(struct _WNF_STATE_NAME *)(v10 + 80) = *a2;
  DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
    (DXG_DEFERRED_WORK_QUEUE *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 2168LL),
    (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v10,
    v14);
  return 0LL;
}
