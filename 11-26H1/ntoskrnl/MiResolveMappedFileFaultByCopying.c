/*
 * XREFs of MiResolveMappedFileFaultByCopying @ 0x1404893DC
 * Callers:
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     MiObtainFaultCharges @ 0x1402F6350 (MiObtainFaultCharges.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiReturnFaultCharges @ 0x140338D0C (MiReturnFaultCharges.c)
 *     MiGetSlabPage @ 0x14033A284 (MiGetSlabPage.c)
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MiUseSlabAllocator @ 0x140373DF4 (MiUseSlabAllocator.c)
 *     MiCopyFileOnlyPage @ 0x1404B5FDC (MiCopyFileOnlyPage.c)
 *     MiInitializeInPageSupportForGetExtents @ 0x14052EC9C (MiInitializeInPageSupportForGetExtents.c)
 */

__int64 __fastcall MiResolveMappedFileFaultByCopying(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rbp
  __int64 v7; // r15
  _DWORD *v8; // r12
  int v9; // r13d
  __int64 v10; // rdi
  int v11; // edx
  unsigned int v12; // ebx
  __int64 SlabPage; // rax
  int v14; // ebx
  __int64 v15; // rdi
  bool v16; // zf
  unsigned __int64 v17; // rbp
  __int64 v18; // r9
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h]

  v4 = *a1;
  v6 = a1[15];
  v7 = -1LL;
  v8 = (_DWORD *)a1[12];
  v9 = 0;
  v10 = a1[14];
  v24 = *(_QWORD *)(*a1 + 16);
  v23 = 0LL;
  v22 = 0;
  if ( MiObtainFaultCharges((ULONG *)v6, 1uLL, 1, a4) )
  {
    v11 = *((_DWORD *)a1 + 40);
    v12 = v11 ^ (unsigned __int8)(v11 ^ _InterlockedExchangeAdd((volatile signed __int32 *)a1[19], 1u));
    if ( (unsigned int)MiUseSlabAllocator(v6, v8, v10, (*((_DWORD *)a1 + 40) >> 9) & 0x3F, &v22) && v22 <= 4 )
    {
      SlabPage = MiGetSlabPage(v6, v22, v12, 0x10u, &v23, 0);
      if ( SlabPage != -1 )
        goto LABEL_4;
      if ( v23 )
      {
        *(_QWORD *)(v4 + 128) = v23;
        *(_QWORD *)(v4 + 144) = 1LL;
        *(_QWORD *)(v4 + 136) = v6;
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 22152));
        v9 = 1;
        goto LABEL_14;
      }
    }
    SlabPage = MiGetPage(v6, v12, 1u);
    if ( SlabPage == -1 )
    {
LABEL_14:
      v14 = -1073741801;
      MiReturnFaultCharges(v6, 1LL);
      goto LABEL_5;
    }
LABEL_4:
    v7 = SlabPage;
    v14 = 0;
    goto LABEL_5;
  }
  v14 = -1073741801;
LABEL_5:
  v15 = a1[16];
  if ( v14 < 0 )
  {
    if ( v9 || *((_DWORD *)a1 + 14) == 1 )
      goto LABEL_9;
    return 0LL;
  }
  else
  {
    v16 = *((_DWORD *)a1 + 14) == 1;
    v17 = a1[1];
    a1[21] = v7;
    if ( !v16 )
    {
      v18 = v24;
      *(_QWORD *)(v15 + 232) = *(_QWORD *)v4;
      return (unsigned int)MiCopyDataPageToImagePage(v15, v8, v17, v18, v7, a1[2]) != 0 ? 0xC0033333 : 0;
    }
    v20 = a1[6];
    if ( !v20 )
      v20 = a1[9];
    v21 = MiCopyFileOnlyPage(v15, (_DWORD)v8, v17, v24, v7, a1[2], v20);
    v14 = v21;
    if ( v21 < 0 )
    {
      if ( v21 == -1073741739 )
      {
        v14 = 0;
LABEL_9:
        MiUnlockProtoPoolPage(a1[2], 0x11u);
        MiFreeInPageSupportBlock((PSLIST_ENTRY)v15);
        return (unsigned int)v14;
      }
      if ( v21 != -1073740748 )
      {
        if ( v21 == -1073532109 )
        {
          *(_DWORD *)(v4 + 80) |= 8u;
          v14 = -1073741802;
        }
        goto LABEL_9;
      }
      MiUnlockProtoPoolPage(a1[2], 0x11u);
      MiInitializeInPageSupportForGetExtents(v15, v8, v17, v4);
    }
    return 3221435187LL;
  }
}
