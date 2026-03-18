/*
 * XREFs of ?DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140289280
 * Callers:
 *     ?DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14006D228 (-DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140288FF4 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAU.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkDestroyFeatureDatabase(struct DXGK_FEATURE_DATABASE *a1)
{
  void **v2; // rdi
  __int64 v3; // rsi
  void *v4; // rcx

  v2 = (void **)((char *)a1 + 8);
  v3 = 16LL;
  do
  {
    if ( *v2 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v2);
      *v2 = 0LL;
    }
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v4 = (void *)*((_QWORD *)a1 + 108);
  if ( v4 )
  {
    ZwClose(v4);
    *((_QWORD *)a1 + 108) = 0LL;
  }
  (*((void (__fastcall **)(_QWORD))a1 + 112))(*((_QWORD *)a1 + 110));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
