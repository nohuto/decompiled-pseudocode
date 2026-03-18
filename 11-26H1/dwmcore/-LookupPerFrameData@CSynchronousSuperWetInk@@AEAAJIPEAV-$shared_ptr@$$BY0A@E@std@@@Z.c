/*
 * XREFs of ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180123010
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180122DC0 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 * Callees:
 *     McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC (McTemplateU0xx_EventWriteTransfer.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180122D6C (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180126880 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1801BD4D0 (-find@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$$.c)
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x18021D28C (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::LookupPerFrameData(
        CSynchronousSuperWetInk *this,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rbp
  std::_Ref_count_base *v6; // rcx
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD **v10; // r15
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *i; // rdx
  __int64 j; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v23; // [rsp+90h] [rbp+18h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xx_EventWriteTransfer((__int64)this, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA, this, a2);
  *a3 = 0LL;
  v6 = (std::_Ref_count_base *)a3[1];
  a3[1] = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (_QWORD *)((char *)this + 248);
  v8 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v8 && *v8 == v4 )
  {
    std::shared_ptr<CRegion>::operator=(a3, (_QWORD *)this + 31);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v9, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_REUSE, this, v4);
    goto LABEL_48;
  }
  v10 = (_QWORD **)((char *)this + 224);
  v22 = v4;
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::find(
    (char *)this + 224,
    &v23,
    &v22);
  v12 = v23;
  if ( v23 == *((_QWORD **)this + 28) )
  {
    LOBYTE(v22) = 0;
    CSynchronousSuperWetInk::PullNewPerFrameData(this, v4, (bool *)&v22);
    if ( (_BYTE)v22 )
    {
      v22 = v4;
      v12 = *(_QWORD **)std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::find(
                          (char *)this + 224,
                          &v23,
                          &v22);
    }
  }
  if ( *((_QWORD *)this + 29) )
  {
    v14 = *v10;
    if ( v12 != *v10 )
    {
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 31, v12 + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0xx_EventWriteTransfer(
          v15,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_FOUND_ON_NEW,
          this,
          v4);
      goto LABEL_47;
    }
    v11 = v14[1];
    v16 = *v10;
    while ( !*(_BYTE *)(v11 + 25) )
    {
      if ( v4 >= *(_QWORD *)(v11 + 32) )
        v11 += 16LL;
      else
        v16 = (_QWORD *)v11;
      v11 = *(_QWORD *)v11;
    }
    v17 = (_QWORD *)*v14;
    if ( v16 != v17 )
    {
      if ( *((_BYTE *)v16 + 25) )
      {
        i = (_QWORD *)v16[2];
      }
      else
      {
        i = (_QWORD *)*v16;
        if ( *(_BYTE *)(*v16 + 25LL) )
        {
          for ( i = (_QWORD *)v16[1]; !*((_BYTE *)i + 25) && v16 == (_QWORD *)*i; i = (_QWORD *)i[1] )
            v16 = i;
          if ( *((_BYTE *)v16 + 25) )
            i = v16;
        }
        else
        {
          for ( j = i[2]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            i = (_QWORD *)j;
        }
      }
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 31, i + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0xx_EventWriteTransfer(
          v20,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NON_EXACT,
          this,
          v4);
      goto LABEL_47;
    }
    if ( !*v7 )
    {
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 31, v17 + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0xx_EventWriteTransfer(
          v21,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_USE_FIRST,
          this,
          v4);
      goto LABEL_47;
    }
LABEL_45:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0xx_EventWriteTransfer(
        v11,
        &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NOT_FOUND_REUSE,
        this,
        v4);
LABEL_47:
    std::shared_ptr<CRegion>::operator=(a3, (_QWORD *)this + 31);
LABEL_48:
    CSynchronousSuperWetInk::CleanupOldPerFrameData(this);
    return 0LL;
  }
  if ( *v7 )
    goto LABEL_45;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      7LL);
  return 2147942487LL;
}
