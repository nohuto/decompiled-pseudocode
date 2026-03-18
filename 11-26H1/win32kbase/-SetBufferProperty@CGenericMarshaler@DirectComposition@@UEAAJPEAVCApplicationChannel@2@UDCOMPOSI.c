/*
 * XREFs of ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140247E50
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x14022B130 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140247DEC (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@UDCOMPOSITION_PROP.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        size_t Size,
        _BYTE *a6)
{
  char **v9; // rbx
  size_t v10; // rbp
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  char **v21; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v21, a3);
  v9 = v21;
  v10 = Size;
  if ( v21 != (char **)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
  {
    v11 = (__int64)*v21;
    if ( (*v21)[4] != 5 )
      v11 = 0LL;
    if ( !v11 )
      return 3221225485LL;
    if ( *(_QWORD *)(v11 + 8) >= Size )
      goto LABEL_12;
  }
  if ( Size + 24 < Size )
    return 3221225506LL;
  v13 = DirectComposition::Memory::AllocateAndClear_0(Size + 24, 0x70674344u, 1);
  v11 = v13;
  if ( v13 )
  {
    *(_DWORD *)v13 = a3;
    *(_WORD *)(v13 + 4) = 5;
    *(_QWORD *)(v13 + 8) = v10;
    *(_QWORD *)(v13 + 16) = 0LL;
    if ( v9 != (char **)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
    {
      GreDeleteFastMutex(*v9, v14, v15, v16);
      *v9 = (char *)v11;
LABEL_12:
      memmove((void *)(v11 + 24), a4, v10);
      v17 = a6;
      *(_QWORD *)(v11 + 16) = v10;
      *(_BYTE *)(v11 + 5) = 1;
      *v17 = 1;
      return 0LL;
    }
    if ( DirectComposition::CGenericPropertyList::push_back(
           (DirectComposition::CGenericPropertyList *)(a1 + 56),
           (struct DirectComposition::CGenericProperty *)v13,
           v15) )
    {
      goto LABEL_12;
    }
    GreDeleteFastMutex((char *)v11, v18, v19, v20);
  }
  return 3221225495LL;
}
