/*
 * XREFs of ?ReplaceWith@?$DynArray@PEAVCLight@@$0A@@@QEAAJPEAV1@@Z @ 0x18021882C
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18007B830 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1801B2F34 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

__int64 __fastcall DynArray<CLight *,0>::ReplaceWith(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 result; // rax

  v4 = *(void **)a1;
  if ( v4 != *(void **)(a1 + 8) )
  {
    operator delete(v4);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  result = DynArrayImpl<0>::DetachData(a2, 8u, (_QWORD *)a1);
  if ( (int)result < 0 )
    *(_QWORD *)(a1 + 20) = 0LL;
  return result;
}
