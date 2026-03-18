/*
 * XREFs of ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1401B4A98
 * Callers:
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x140192658 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x14022FAE8 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1401B4904 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 */

__int64 __fastcall TranslateUmdFileNameToVmMultiString(unsigned __int16 *a1, int a2, unsigned int *a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  _QWORD *v5; // r15
  int v6; // edi
  unsigned int v7; // esi
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int16 *v12; // r8
  unsigned __int16 v13; // r9
  unsigned int v14; // ecx
  _QWORD *v15; // rdx
  unsigned int i; // r8d
  unsigned __int16 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // esi
  void *v21; // rcx
  __int64 v22; // rax
  int v23; // esi

  v3 = (unsigned int)(a2 - 1);
  v4 = 0LL;
  a1[v3] = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  while ( v7 < (unsigned int)v3 )
  {
    if ( a1[v7] )
    {
      v10 = operator new(0x210uLL, 0x4B677844u, 256LL);
      if ( !v10 )
      {
        v6 = -1073741801;
        goto LABEL_24;
      }
      *(_QWORD *)v10 = 0LL;
      *(_WORD *)(v10 + 526) = 0;
      if ( v4 )
        *v5 = v10;
      else
        v4 = (_QWORD *)v10;
      v11 = 0;
      v12 = (unsigned __int16 *)(v10 + 8);
      v5 = (_QWORD *)v10;
      do
      {
        v13 = a1[v7];
        if ( !v13 )
          break;
        if ( v7 >= (unsigned int)v3 )
          break;
        *v12 = v13;
        ++v7;
        ++v12;
        ++v11;
      }
      while ( v11 < 0x103 );
      *(_WORD *)(v10 + 2LL * v11 + 8) = 0;
      v6 = TranslateUmdFileNameToVm((char *)(v10 + 8), 0x104u, 0LL);
      if ( v6 < 0 )
        goto LABEL_24;
    }
    else
    {
      ++v7;
    }
  }
  v14 = 0;
  v15 = v4;
LABEL_17:
  if ( v15 )
  {
    for ( i = 0; ; ++i )
    {
      v17 = *((_WORD *)v15 + i + 4);
      if ( !v17 )
      {
        v19 = v14++;
        a1[v19] = 0;
        v15 = (_QWORD *)*v15;
        goto LABEL_17;
      }
      if ( v14 >= (unsigned int)v3 )
        break;
      v18 = v14++;
      a1[v18] = v17;
    }
    v6 = -2147483643;
  }
LABEL_24:
  v20 = 0;
  while ( v4 )
  {
    v21 = v4;
    v22 = -1LL;
    do
      ++v22;
    while ( *((_WORD *)v4 + v22 + 4) );
    v4 = (_QWORD *)*v4;
    v20 += v22 + 1;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
  }
  v23 = 2 * v20 + 2;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147483643 )
    *a3 = v23;
  return (unsigned int)v6;
}
