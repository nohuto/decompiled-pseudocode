/*
 * XREFs of ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x18005AA50
 * Callers:
 *     ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038458 (-InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005AAFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     wmemcmp @ 0x180077E88 (wmemcmp.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CDWriteText::SetText(CDWriteText *this, const unsigned __int16 *a2)
{
  __int64 v4; // rdi
  const wchar_t **v5; // rsi
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  size_t v8; // r8
  int *v10; // rax
  char v11; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = -1LL;
    v5 = (const wchar_t **)((char *)this + 48);
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v7 = (const wchar_t *)((char *)this + 48);
    v8 = (size_t)v5[2];
    if ( (unsigned __int64)v5[3] > 7 )
      v7 = *v5;
    if ( v8 != v6 || v8 && wmemcmp(v7, a2, v8) )
    {
      do
        ++v4;
      while ( a2[v4] );
      std::wstring::assign(v5);
      v10 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v11);
      CVisual::SetDirtyFlags((CDWriteText *)((char *)this - 184), *v10);
    }
  }
  return 0LL;
}
