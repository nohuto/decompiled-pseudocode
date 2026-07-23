/*
 * XREFs of HalpAcpiPrmCacheInit @ 0x140CB3914
 * Callers:
 *     HalpAcpiInitSystem @ 0x140BF1270 (HalpAcpiInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 HalpAcpiPrmCacheInit()
{
  _QWORD *Object; // rsi
  __int64 *i; // rdi
  ULONG_PTR Pool2; // rax
  _QWORD *v3; // rbx
  ULONG_PTR v4; // r15
  __int64 *j; // r14
  ULONG_PTR v6; // rax
  ULONG_PTR *v7; // rcx
  _QWORD *v8; // rax
  __int64 *k; // rdi
  ULONG_PTR v10; // rax
  _QWORD *v11; // rbx
  ULONG_PTR v12; // r15
  __int64 *m; // r14
  ULONG_PTR v14; // rax
  ULONG_PTR *v15; // rcx
  _QWORD *v16; // rax

  Object = HalpDeviceBlockUnblockPushLock.WaitBlock[0].Object;
  if ( !HalpAcpiPrmInitialized )
  {
    qword_140E0F6F8 = (__int64)&HalpAcpiPrmUpdateList;
    HalpAcpiPrmUpdateList = (__int64)&HalpAcpiPrmUpdateList;
    for ( i = *(__int64 **)(*((_QWORD *)HalpDeviceBlockUnblockPushLock.WaitBlock[0].Object + 30) + 2600LL);
          i != (__int64 *)(Object[30] + 2600LL);
          i = (__int64 *)*i )
    {
      Pool2 = ExAllocatePool2(64LL, 0x60uLL, 0x416C6148u);
      v3 = (_QWORD *)Pool2;
      if ( !Pool2 )
        return 3221225495LL;
      v4 = Pool2 + 80;
      *(_OWORD *)Pool2 = *(_OWORD *)i;
      *(_OWORD *)(Pool2 + 16) = *((_OWORD *)i + 1);
      *(_OWORD *)(Pool2 + 32) = *((_OWORD *)i + 2);
      *(_OWORD *)(Pool2 + 48) = *((_OWORD *)i + 3);
      *(_OWORD *)(Pool2 + 64) = *((_OWORD *)i + 4);
      *(_OWORD *)(Pool2 + 80) = *((_OWORD *)i + 5);
      *(_QWORD *)(Pool2 + 88) = Pool2 + 80;
      *(_QWORD *)(Pool2 + 80) = Pool2 + 80;
      for ( j = (__int64 *)i[10]; j != i + 10; j = (__int64 *)*j )
      {
        v6 = ExAllocatePool2(64LL, 0x50uLL, 0x416C6148u);
        if ( !v6 )
          return 3221225495LL;
        *(_OWORD *)v6 = *(_OWORD *)j;
        *(_OWORD *)(v6 + 16) = *((_OWORD *)j + 1);
        *(_OWORD *)(v6 + 32) = *((_OWORD *)j + 2);
        *(_OWORD *)(v6 + 48) = *((_OWORD *)j + 3);
        *(_OWORD *)(v6 + 64) = *((_OWORD *)j + 4);
        v7 = *(ULONG_PTR **)(v4 + 8);
        if ( *v7 != v4 )
          goto LABEL_22;
        *(_QWORD *)v6 = v4;
        *(_QWORD *)(v6 + 8) = v7;
        *v7 = v6;
        *(_QWORD *)(v4 + 8) = v6;
      }
      v8 = (_QWORD *)qword_140E0F6F8;
      if ( *(__int64 **)qword_140E0F6F8 != &HalpAcpiPrmUpdateList )
LABEL_22:
        __fastfail(3u);
      *v3 = &HalpAcpiPrmUpdateList;
      v3[1] = v8;
      *v8 = v3;
      qword_140E0F6F8 = (__int64)v3;
    }
    qword_140E0F730 = (__int64)&HalpAcpiPrmFirmwareList;
    HalpAcpiPrmFirmwareList = (__int64)&HalpAcpiPrmFirmwareList;
    for ( k = *(__int64 **)(Object[30] + 2616LL); k != (__int64 *)(Object[30] + 2616LL); k = (__int64 *)*k )
    {
      v10 = ExAllocatePool2(64LL, 0x60uLL, 0x416C6148u);
      v11 = (_QWORD *)v10;
      if ( !v10 )
        return 3221225495LL;
      v12 = v10 + 80;
      *(_OWORD *)v10 = *(_OWORD *)k;
      *(_OWORD *)(v10 + 16) = *((_OWORD *)k + 1);
      *(_OWORD *)(v10 + 32) = *((_OWORD *)k + 2);
      *(_OWORD *)(v10 + 48) = *((_OWORD *)k + 3);
      *(_OWORD *)(v10 + 64) = *((_OWORD *)k + 4);
      *(_OWORD *)(v10 + 80) = *((_OWORD *)k + 5);
      *(_QWORD *)(v10 + 88) = v10 + 80;
      *(_QWORD *)(v10 + 80) = v10 + 80;
      for ( m = (__int64 *)k[10]; m != k + 10; m = (__int64 *)*m )
      {
        v14 = ExAllocatePool2(64LL, 0x50uLL, 0x416C6148u);
        if ( !v14 )
          return 3221225495LL;
        *(_OWORD *)v14 = *(_OWORD *)m;
        *(_OWORD *)(v14 + 16) = *((_OWORD *)m + 1);
        *(_OWORD *)(v14 + 32) = *((_OWORD *)m + 2);
        *(_OWORD *)(v14 + 48) = *((_OWORD *)m + 3);
        *(_OWORD *)(v14 + 64) = *((_OWORD *)m + 4);
        v15 = *(ULONG_PTR **)(v12 + 8);
        if ( *v15 != v12 )
          goto LABEL_22;
        *(_QWORD *)v14 = v12;
        *(_QWORD *)(v14 + 8) = v15;
        *v15 = v14;
        *(_QWORD *)(v12 + 8) = v14;
      }
      v16 = (_QWORD *)qword_140E0F730;
      if ( *(__int64 **)qword_140E0F730 != &HalpAcpiPrmFirmwareList )
        goto LABEL_22;
      *v11 = &HalpAcpiPrmFirmwareList;
      v11[1] = v16;
      *v16 = v11;
      qword_140E0F730 = (__int64)v11;
    }
    HalpAcpiPrmInitialized = 1;
  }
  return 0LL;
}
