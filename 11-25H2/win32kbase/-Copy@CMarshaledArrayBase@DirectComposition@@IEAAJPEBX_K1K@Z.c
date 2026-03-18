/*
 * XREFs of ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x14010635C
 * Callers:
 *     ?Copy@?$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CCJ@$0CCK@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140229238 (-Copy@-$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CCJ@$0CCK@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CCH@$0CCI@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022925C (-Copy@-$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CCH@$0CCI@@DirectComposition@@QEAAJPEBX.c)
 *     ?Copy@?$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCF@$0CCG@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140229280 (-Copy@-$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCF@$0CCG@@DirectComposition@@QEAAJPEBX.c)
 *     ?Copy@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BNN@$0BNO@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402292A4 (-Copy@-$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BNN@$0BNO@@DirectComposition@@QEAAJPEBX_K.c)
 *     ?Copy@?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402292C8 (-Copy@-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA.c)
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0BPP@$0CAA@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402292EC (-Copy@-$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0BPP@$0CAA@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CCL@$0CCM@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140229310 (-Copy@-$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CCL@$0CCM@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DC50 (-SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DD10 (-SetBufferProperty@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArrayBase::Copy(
        DirectComposition::CMarshaledArrayBase *this,
        const void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rbp
  char *v13; // rcx
  char *v15; // rcx

  v6 = 0;
  v9 = a3 / a4;
  v10 = a4 * (a3 / a4);
  if ( a3 == v10 )
  {
    v11 = *((_QWORD *)this + 2);
    if ( v9 <= v11 )
    {
      if ( v9 )
      {
        if ( v9 < v11 )
          memset((void *)(v10 + *((_QWORD *)this + 1)), 0, a4 * (v11 - v9));
      }
      else
      {
        v15 = (char *)*((_QWORD *)this + 1);
        if ( v15 )
        {
          GreDeleteFastMutex(v15);
          *((_QWORD *)this + 1) = 0LL;
        }
      }
    }
    else
    {
      v12 = Win32AllocPoolWithQuotaImpl((__int64)this, a3, a5);
      if ( !v12 )
        return (unsigned int)-1073741801;
      v13 = (char *)*((_QWORD *)this + 1);
      if ( v13 )
        GreDeleteFastMutex(v13);
      *((_QWORD *)this + 1) = v12;
    }
    memmove(*((void **)this + 1), a2, a3);
    *((_QWORD *)this + 2) = v9;
    *(_QWORD *)this = 0LL;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
