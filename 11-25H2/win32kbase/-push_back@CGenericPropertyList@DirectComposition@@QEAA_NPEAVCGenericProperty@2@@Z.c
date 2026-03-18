/*
 * XREFs of ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x140228E10
 * Callers:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1402280D0 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x140228194 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x140228260 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x140228330 (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14023D670 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14023D790 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVC.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x1400692E8 (DirectComposition--Memory--Allocate_0.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

bool __fastcall DirectComposition::CGenericPropertyList::push_back(
        DirectComposition::CGenericPropertyList *this,
        struct DirectComposition::CGenericProperty *a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v8; // rsi
  void *v9; // rax
  void *v10; // rbp
  _QWORD *v11; // rdx

  v4 = *((_QWORD *)this + 2);
  v5 = (_QWORD *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) != v4 )
  {
    v11 = (_QWORD *)((char *)this + 8);
LABEL_10:
    *(_QWORD *)(*(_QWORD *)this + 8LL * *v5) = a2;
    LOBYTE(v9) = 1;
    ++*v11;
    return (char)v9;
  }
  v8 = 4LL;
  if ( v4 )
    v8 = 2 * v4;
  v9 = (void *)DirectComposition::Memory::Allocate_0(8 * v8, 1885815620LL, a3, a4);
  v10 = v9;
  if ( v9 )
  {
    if ( *(_QWORD *)this )
    {
      memmove(v9, *(const void **)this, 8LL * *v5);
      GreDeleteFastMutex(*(char **)this);
    }
    *(_QWORD *)this = v10;
    v11 = (_QWORD *)((char *)this + 8);
    *((_QWORD *)this + 2) = v8;
    goto LABEL_10;
  }
  return (char)v9;
}
