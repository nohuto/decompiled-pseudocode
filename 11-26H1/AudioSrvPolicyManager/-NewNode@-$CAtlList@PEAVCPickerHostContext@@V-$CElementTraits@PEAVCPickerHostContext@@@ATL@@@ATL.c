/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x180041134
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001BA30 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180028870 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  struct ATL::CAtlPlex *v7; // r9
  __int64 v8; // r8
  __int64 *i; // rdx
  __int64 v10; // rdx

  result = (__int64 *)qword_180067EA8;
  if ( !qword_180067EA8 )
  {
    v7 = ATL::CAtlPlex::Create(&qword_180067EA0, (unsigned int)dword_180067EB0, 0x18uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = (unsigned int)(dword_180067EB0 - 1);
    result = (__int64 *)qword_180067EA8;
    for ( i = (__int64 *)((char *)v7 + 16 * v8 + 8 * v8 + 8); (int)v8 >= 0; LODWORD(v8) = v8 - 1 )
    {
      *i = (__int64)result;
      result = i;
      qword_180067EA8 = (__int64)i;
      i -= 3;
    }
  }
  v10 = *result;
  result[2] = *a2;
  qword_180067EA8 = v10;
  *result = a4;
  result[1] = 0LL;
  ++qword_180067E98;
  return result;
}
