/*
 * XREFs of ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x14022E84C
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401E9C54 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140056D40 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendDuplicateHandle(
        DXG_HOST_GLOBAL_VMBUS *this,
        const struct _DXGSHAREDALLOCOBJECT *a2,
        int a3,
        void *a4,
        unsigned int a5,
        struct DXGKVMB_GUEST_TRANSACTION *a6)
{
  __int64 v7; // rbx
  __int64 v9; // rsi
  unsigned int v10; // edx
  unsigned int v11; // r8d
  _QWORD **v12; // r15
  unsigned int v13; // eax
  _QWORD *i; // rcx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  __int64 v18; // r14
  ADAPTER_RENDER *v20; // r13
  int v21; // r9d
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  _DWORD *v26; // rdi
  unsigned int v27; // eax
  unsigned int v28; // eax
  _QWORD *v29; // rsi
  _DWORD *v30; // rbx
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // [rsp+98h] [rbp+10h]

  v7 = *((_QWORD *)a2 + 2);
  v9 = *((_QWORD *)a2 + 4);
  v34 = *((_QWORD *)a2 + 3);
  v10 = *(_DWORD *)(v7 + 128) + 92;
  if ( *(_DWORD *)(v7 + 128) >= 0xFFFFFFA4 )
    return 2147483653LL;
  v11 = v10 + *(_DWORD *)(v7 + 112);
  if ( v11 < v10 )
    return 2147483653LL;
  v12 = (_QWORD **)(v7 + 136);
  v13 = 0;
  for ( i = *(_QWORD **)(v7 + 136); i != v12; i = (_QWORD *)*i )
  {
    v15 = v13 + 56;
    if ( v13 + 56 < v13 )
      return 2147483653LL;
    v13 = v15 + *((_DWORD *)i - 2);
    if ( v13 < v15 )
      return 2147483653LL;
  }
  v16 = v13 + v11;
  if ( v13 + v11 < v11 )
    return 2147483653LL;
  v17 = v16 + 8;
  if ( v16 + 8 < v16 )
    return 2147483653LL;
  v18 = operator new[](v17, 0x4B677844u, 64LL);
  if ( !v18 )
    return 3221225495LL;
  v20 = *(ADAPTER_RENDER **)(v7 + 80);
  v21 = *(_DWORD *)(v7 + 132);
  v22 = *(_DWORD *)(v7 + 112);
  v23 = *(_DWORD *)(v7 + 128);
  v24 = *((_QWORD *)a6 + 2);
  v25 = *((_QWORD *)v20 + 2);
  *(_BYTE *)(v18 + 12) = 2;
  *(_DWORD *)(v18 + 12) &= 0x1FFu;
  *(_QWORD *)v18 = 0LL;
  *(_DWORD *)(v18 + 8) = 0;
  *(_DWORD *)(v18 + 16) = 5;
  *(_QWORD *)(v18 + 24) = *(_QWORD *)(v25 + 412);
  *(_QWORD *)(v18 + 40) = a4;
  *(_DWORD *)(v18 + 48) = a5;
  *(_DWORD *)(v18 + 52) = a3;
  *(_DWORD *)(v18 + 56) = v9 != 0 ? a3 : 0;
  *(_QWORD *)(v18 + 32) = v24;
  *(_DWORD *)(v18 + 64) = v23;
  *(_DWORD *)(v18 + 60) = v34 != 0 ? a3 : 0;
  v26 = (_DWORD *)(v18 + 92);
  *(_DWORD *)(v18 + 68) = v22;
  *(_DWORD *)(v18 + 72) = v21;
  *(_DWORD *)(v18 + 80) = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v18 + 84) = *(_DWORD *)(v7 + 128);
  *(_DWORD *)(v18 + 88) = *(_DWORD *)(v7 + 112);
  v27 = *(_DWORD *)(v7 + 128);
  if ( v27 )
  {
    memmove((void *)(v18 + 92), *(const void **)(v7 + 120), v27);
    v26 = (_DWORD *)((char *)v26 + *(unsigned int *)(v7 + 128));
  }
  v28 = *(_DWORD *)(v7 + 112);
  if ( v28 )
  {
    memmove(v26, *(const void **)(v7 + 104), v28);
    v26 = (_DWORD *)((char *)v26 + *(unsigned int *)(v7 + 112));
  }
  v29 = *v12;
  while ( v29 != v12 )
  {
    *v26 = *((_DWORD *)v29 - 11);
    v26[1] = *((_DWORD *)v29 - 2);
    *((_QWORD *)v26 + 1) = *(v29 - 4);
    ADAPTER_RENDER::DdiDescribeAllocation(v20, (struct _DXGKARG_DESCRIBEALLOCATION *)(v26 + 2));
    *((_QWORD *)v26 + 1) = 0LL;
    v30 = v26 + 14;
    memmove(v26 + 14, (const void *)*(v29 - 2), *((unsigned int *)v29 - 2));
    v31 = *((unsigned int *)v29 - 2);
    v29 = (_QWORD *)*v29;
    v26 = (_DWORD *)((char *)v30 + v31);
  }
  *(_QWORD *)v26 = 0LL;
  v32 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(
          this,
          (unsigned __int8 *)v18,
          (struct DXGKVMB_COMMAND_BASE *)v18,
          v17);
  v33 = v32;
  if ( v32 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7039;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendAsyncMessage failed. 0x%I64x",
      v33,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v18);
  return (unsigned int)v33;
}
