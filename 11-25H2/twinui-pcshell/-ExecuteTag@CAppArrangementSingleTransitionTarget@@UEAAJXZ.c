/*
 * XREFs of ?ExecuteTag@CAppArrangementSingleTransitionTarget@@UEAAJXZ @ 0x1804D2700
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z @ 0x1804D264C (-AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CAppArrangementSingleTransitionTarget::ExecuteTag(CAppArrangementSingleTransitionTarget *this)
{
  int v2; // ecx
  const struct tagRECT *v3; // rdx
  bool v4; // di
  int v5; // esi
  const struct tagRECT *v6; // rdx
  int v7; // esi
  char *v8; // rax
  char *v9; // r8
  char *v10; // rcx

  v2 = 0;
  v3 = (const struct tagRECT *)*((unsigned int *)this + 10);
  v4 = (unsigned int)((_DWORD)v3 - 45) <= 1;
  if ( (_DWORD)v3 == 4095 || *((_BYTE *)this + 153) && (unsigned int)((_DWORD)v3 - 45) > 1 )
    goto LABEL_20;
  v5 = *((_DWORD *)this + 11);
  AdjustSourceRectForNonClientArea(*((HWND *)this + 7), v3, (struct tagRECT *)((char *)this + 72));
  v7 = v5 & 0x800000;
  if ( v7 )
    AdjustSourceRectForNonClientArea(*((HWND *)this + 7), v6, (struct tagRECT *)((char *)this + 104));
  if ( *((_DWORD *)this + 18) || *((_DWORD *)this + 19) )
    *((_DWORD *)this + 11) &= ~0x200000u;
  v8 = (char *)this + 136;
  if ( v4 )
    v8 = 0LL;
  if ( v7 )
  {
    v9 = (char *)this + 120;
    v10 = (char *)this + 104;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
  }
  v2 = DwmpTransitionWindowWithRects(
         *((_QWORD *)this + 7),
         *((_DWORD *)this + 10) ^ (*((_DWORD *)this + 11) ^ *((_DWORD *)this + 10)) & 0xFFFFF000,
         (char *)this + 72,
         (char *)this + 88,
         v10,
         v9,
         v8);
  if ( v2 >= 0 )
  {
LABEL_20:
    if ( *((_QWORD *)this + 8) )
      return (unsigned int)DwmpTransitionWindow(*((_QWORD *)this + 8), *((_DWORD *)this + 12) & 0xFFFFF000 | 0x2B);
  }
  return (unsigned int)v2;
}
