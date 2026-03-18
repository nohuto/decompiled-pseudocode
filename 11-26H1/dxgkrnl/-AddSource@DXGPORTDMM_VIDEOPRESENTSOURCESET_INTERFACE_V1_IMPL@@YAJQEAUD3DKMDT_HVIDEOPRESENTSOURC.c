/*
 * XREFs of ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x140267CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x140097048 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x140097BE4 (--0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z.c)
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1402684EC (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1402685C0 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  struct DMMVIDEOPRESENTSOURCESET *v7; // rbx
  DMMVIDEOPRESENTSOURCE *v8; // rax
  DMMVIDEOPRESENTSOURCE *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  _QWORD *v14; // rax
  DMMVIDEOPRESENTSOURCE *v15; // [rsp+30h] [rbp+8h] BYREF
  DMMVIDEOPRESENTSOURCE *v16; // [rsp+38h] [rbp+10h] BYREF

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  WdLogGlobalForLineNumber = 141;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    result = 3223192324LL;
    WdLogGlobalForLineNumber = 147;
    return result;
  }
  v7 = (struct DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192341LL;
    WdLogGlobalForLineNumber = 161;
    return result;
  }
  v8 = (DMMVIDEOPRESENTSOURCE *)operator new(0x88uLL, 0x4E506456u, 256LL);
  if ( !v8 )
  {
    v15 = 0LL;
    goto LABEL_11;
  }
  v9 = DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(v8, v7, a2->Id);
  v15 = v9;
  if ( !v9 )
  {
LABEL_11:
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 180;
    LODWORD(v13) = -1073741801;
    goto LABEL_12;
  }
  v15 = 0LL;
  v16 = v9;
  v10 = DMMVIDEOPRESENTSOURCESET::AddSource(v7, &v16);
  v13 = v10;
  if ( v10 >= 0 )
  {
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v15);
    return DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v7, a2);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
  v14[3] = 0LL;
  v14[4] = v7;
  v14[5] = v13;
  WdLogGlobalForLineNumber = 194;
LABEL_12:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v15);
  return (unsigned int)v13;
}
