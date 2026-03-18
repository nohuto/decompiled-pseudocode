/*
 * XREFs of ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140247F70
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x14022B130 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140247DEC (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@UDCOMPOSITION_PROP.c)
 *     ?FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x140247E1C (-FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        DirectComposition::CResourceMarshaler *a4,
        _BYTE *a5)
{
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v16; // rax
  __int64 *v17; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v17, a3);
  if ( v17 == (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
  {
    v9 = DirectComposition::Memory::AllocateAndClear_0(0x10uLL, 0x70674344u, 1);
    v11 = v9;
    if ( !v9 )
      return 3221225495LL;
    *(_DWORD *)v9 = a3;
    *(_WORD *)(v9 + 4) = 4;
    *(_QWORD *)(v9 + 8) = 0LL;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 56),
            (struct DirectComposition::CGenericProperty *)v9,
            v10) )
    {
      GreDeleteFastMutex((char *)v11, v12, v13, v14);
      return 3221225495LL;
    }
  }
  else
  {
    v11 = *v17;
    if ( *(_BYTE *)(*v17 + 4) != 4 )
      v11 = 0LL;
    if ( !v11 )
      return 3221225485LL;
  }
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  DirectComposition::CReferenceProperty::FreeValue((DirectComposition::CReferenceProperty *)v11, a2);
  v16 = a5;
  *(_QWORD *)(v11 + 8) = a4;
  *(_BYTE *)(v11 + 5) = 1;
  *v16 = 1;
  return 0LL;
}
