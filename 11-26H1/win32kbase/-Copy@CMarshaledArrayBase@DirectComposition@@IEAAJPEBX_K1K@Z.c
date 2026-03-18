/*
 * XREFs of ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x140153058
 * Callers:
 *     ?Copy@?$CMarshaledArray@I$0GFGGEDEE@$0BMF@$0BMG@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B4C4 (-Copy@-$CMarshaledArray@I$0GFGGEDEE@$0BMF@$0BMG@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@I$0GFGKEDEE@$0BLF@$0BLG@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B4E8 (-Copy@-$CMarshaledArray@I$0GFGKEDEE@$0BLF@$0BLG@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B50C (-Copy@-$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0BNA@$0BNB@$00@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B530 (-Copy@-$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0BNA@$0BNB@$00@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GFGGEDEE@$0BMJ@$0BMK@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B554 (-Copy@-$CMarshaledArray@UtagRECT@@$0GFGGEDEE@$0BMJ@$0BMK@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0CEP@$0CFA@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B578 (-Copy@-$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0CEP@$0CFA@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B59C (-Copy@-$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1402357E0 (-SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CInteractionTracker2Marshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235D90 (-SetBufferProperty@CInteractionTracker2Marshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArrayBase::Copy(
        DirectComposition::CMarshaledArrayBase *this,
        const void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9

  v7 = a3 / a4;
  v8 = a3 % a4;
  v9 = 0;
  v11 = a3 / a4;
  v12 = a4 * (a3 / a4);
  if ( a3 / a4 == -1LL || a3 != v12 )
    return (unsigned int)-1073741811;
  v13 = *((_QWORD *)this + 1);
  if ( v7 <= v13 )
  {
    if ( v11 )
    {
      if ( v11 < v13 )
        memset((void *)(*(_QWORD *)this + v12), 0, a4 * (v13 - v11));
    }
    else if ( *(_QWORD *)this )
    {
      GreDeleteFastMutex(*(char **)this, v8, v13, a4);
      *(_QWORD *)this = 0LL;
    }
  }
  else
  {
    v15 = Win32AllocPoolWithQuotaImpl(v12, a3, a5);
    if ( !v15 )
      return (unsigned int)-1073741801;
    if ( *(_QWORD *)this )
      GreDeleteFastMutex(*(char **)this, v14, v16, v17);
    *(_QWORD *)this = v15;
  }
  memmove(*(void **)this, a2, a3);
  *((_QWORD *)this + 1) = v11;
  if ( *((_QWORD *)this + 2) )
    *((_QWORD *)this + 2) = -1LL;
  return v9;
}
