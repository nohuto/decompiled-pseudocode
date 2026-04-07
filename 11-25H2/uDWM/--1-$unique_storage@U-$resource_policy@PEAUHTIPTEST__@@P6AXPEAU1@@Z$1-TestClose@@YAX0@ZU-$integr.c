/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D5688
 * Callers:
 *     ??1?$shared_data@$0A@$0A@$0A@@details@tip2@@QEAA@XZ @ 0x1800D564C (--1-$shared_data@$0A@$0A@$0A@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     TestClose @ 0x1800D8D04 (TestClose.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return TestClose(v1);
  return result;
}
