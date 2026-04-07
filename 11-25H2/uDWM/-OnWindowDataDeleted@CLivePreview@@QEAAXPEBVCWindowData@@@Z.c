/*
 * XREFs of ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800BA128
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001A658 (--1CWindowData@@QEAA@XZ.c)
 * Callees:
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1800959C0 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 *     ??$__std_find_trivial@PEAXPEAX@@YAPEAPEAXPEAPEAX0QEAX@Z @ 0x180099F40 (--$__std_find_trivial@PEAXPEAX@@YAPEAPEAXPEAPEAX0QEAX@Z.c)
 */

void __fastcall CLivePreview::OnWindowDataDeleted(CLivePreview *this, const struct CWindowData *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = __std_find_trivial<void *,void *>(*((_QWORD *)this + 56), *((_QWORD *)this + 57), (__int64)a2);
  v4 = *((_QWORD *)this + 57);
  if ( v3 != v4 )
  {
    std::_Copy_memmove<tagRECT *,tagRECT *>((void *)(v3 + 8), v4, (void *)v3);
    *((_QWORD *)this + 57) -= 8LL;
  }
}
