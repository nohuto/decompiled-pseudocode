/*
 * XREFs of MiResolveMappedFileFaultByCopying @ 0x140482F1C
 * Callers:
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiUseSlabAllocator @ 0x140375BA4 (MiUseSlabAllocator.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 *     MiInitializeInPageSupportForGetExtents @ 0x1405311BC (MiInitializeInPageSupportForGetExtents.c)
 */

__int64 __fastcall MiResolveMappedFileFaultByCopying(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rbp
  __int64 v7; // r15
  _DWORD *v8; // r12
  int v9; // r13d
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // edx
  unsigned int v14; // ebx
  __int64 SlabPage; // rax
  int v16; // ebx
  __int64 v17; // rdi
  bool v18; // zf
  unsigned __int64 v19; // rbp
  __int64 v20; // r9
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // [rsp+80h] [rbp+8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h]

  v4 = *a1;
  v6 = a1[15];
  v7 = -1LL;
  v8 = (_DWORD *)a1[12];
  v9 = 0;
  v10 = a1[14];
  v26 = *(_QWORD *)(*a1 + 16);
  v25 = 0LL;
  v24 = 0;
  if ( MiObtainFaultCharges((ULONG *)v6, 1uLL, 1, a4) )
  {
    v13 = *((_DWORD *)a1 + 40);
    v14 = v13 ^ (unsigned __int8)(v13 ^ _InterlockedExchangeAdd((volatile signed __int32 *)a1[19], 1u));
    if ( (unsigned int)MiUseSlabAllocator(v6, v8, v10, (*((_DWORD *)a1 + 40) >> 9) & 0x3F, &v24) && v24 <= 4 )
    {
      SlabPage = MiGetSlabPage(v6, v24, v14, 0x10u, &v25, 0);
      if ( SlabPage != -1 )
        goto LABEL_4;
      if ( v25 )
      {
        *(_QWORD *)(v4 + 128) = v25;
        *(_QWORD *)(v4 + 144) = 1LL;
        *(_QWORD *)(v4 + 136) = v6;
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 22152));
        v9 = 1;
        goto LABEL_14;
      }
    }
    SlabPage = MiGetPage(v6, v14, 1u);
    if ( SlabPage == -1 )
    {
LABEL_14:
      v16 = -1073741801;
      MiReturnFaultCharges(v6, 1LL);
      goto LABEL_5;
    }
LABEL_4:
    v7 = SlabPage;
    v16 = 0;
    goto LABEL_5;
  }
  v16 = -1073741801;
LABEL_5:
  v17 = a1[16];
  if ( v16 < 0 )
  {
    if ( v9 || *((_DWORD *)a1 + 14) == 1 )
      goto LABEL_9;
    return 0LL;
  }
  else
  {
    v18 = *((_DWORD *)a1 + 14) == 1;
    v19 = a1[1];
    a1[21] = v7;
    if ( !v18 )
    {
      v20 = v26;
      *(_QWORD *)(v17 + 232) = *(_QWORD *)v4;
      return (unsigned int)MiCopyDataPageToImagePage(v17, v8, v19, v20, v7, a1[2]) != 0 ? 0xC0033333 : 0;
    }
    v22 = a1[6];
    if ( !v22 )
      v22 = a1[9];
    v23 = MiCopyFileOnlyPage(v17, (_DWORD)v8, v19, v26, v7, a1[2], v22);
    v16 = v23;
    if ( v23 < 0 )
    {
      if ( v23 == -1073741739 )
      {
        v16 = 0;
LABEL_9:
        LOBYTE(v11) = 17;
        MiUnlockProtoPoolPage(a1[2], v11, v12);
        MiFreeInPageSupportBlock((PSLIST_ENTRY)v17);
        return (unsigned int)v16;
      }
      if ( v23 != -1073740748 )
      {
        if ( v23 == -1073532109 )
        {
          *(_DWORD *)(v4 + 80) |= 8u;
          v16 = -1073741802;
        }
        goto LABEL_9;
      }
      LOBYTE(v11) = 17;
      MiUnlockProtoPoolPage(a1[2], v11, v12);
      MiInitializeInPageSupportForGetExtents(v17, v8, v19, v4);
    }
    return 3221435187LL;
  }
}
