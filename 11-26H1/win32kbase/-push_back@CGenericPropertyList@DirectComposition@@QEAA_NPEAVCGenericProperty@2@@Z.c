/*
 * XREFs of ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x14022B130
 * Callers:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@IPEA_N@Z @ 0x14022A384 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14022A450 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x14022A520 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022A5F0 (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140247E50 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSI.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140247F70 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMP.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x1400B3D64 (DirectComposition--Memory--Allocate_0.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall DirectComposition::CGenericPropertyList::push_back(
        DirectComposition::CGenericPropertyList *this,
        struct DirectComposition::CGenericProperty *a2,
        int a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v7; // rsi
  void *v8; // rax
  void *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdx

  v3 = *((_QWORD *)this + 2);
  v4 = (_QWORD *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) != v3 )
  {
    v13 = (_QWORD *)((char *)this + 8);
LABEL_11:
    *(_QWORD *)(*(_QWORD *)this + 8LL * *v4) = a2;
    LOBYTE(v8) = 1;
    ++*v13;
    return (char)v8;
  }
  if ( v3 )
    v7 = 2 * v3;
  else
    v7 = 4LL;
  v8 = (void *)DirectComposition::Memory::Allocate_0(8 * v7, 0x70674344u, a3);
  v9 = v8;
  if ( v8 )
  {
    if ( *(_QWORD *)this )
    {
      memmove(v8, *(const void **)this, 8LL * *v4);
      GreDeleteFastMutex(*(char **)this, v10, v11, v12);
    }
    *(_QWORD *)this = v9;
    v13 = (_QWORD *)((char *)this + 8);
    *((_QWORD *)this + 2) = v7;
    goto LABEL_11;
  }
  return (char)v8;
}
