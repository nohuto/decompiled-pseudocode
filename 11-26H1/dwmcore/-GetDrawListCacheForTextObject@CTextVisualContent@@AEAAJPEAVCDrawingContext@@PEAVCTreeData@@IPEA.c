/*
 * XREFs of ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18028B97C
 * Callers:
 *     ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18028B5B0 (-Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18001CF50 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTextVisualContent::GetDrawListCacheForTextObject(
        CTextVisualContent *this,
        struct CDrawingContext *a2,
        struct CTreeData *a3,
        int a4,
        struct CDrawListCache **a5)
{
  struct CDrawListCache *v5; // rcx
  int Cache; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CDrawListCache *v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  if ( !*((_BYTE *)a2 + 8067) )
    goto LABEL_5;
  Cache = CDrawListCacheSet::GetCache(
            (struct CTreeData *)((char *)a3 + 16),
            2,
            a4,
            *((const struct IDeviceTarget **)a2 + 3),
            &v10);
  v7 = Cache;
  if ( Cache >= 0 )
  {
    v5 = v10;
LABEL_5:
    v7 = 0;
    v10 = 0LL;
    *a5 = v5;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
    (const char *)(unsigned int)Cache);
LABEL_6:
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v10);
  return v7;
}
