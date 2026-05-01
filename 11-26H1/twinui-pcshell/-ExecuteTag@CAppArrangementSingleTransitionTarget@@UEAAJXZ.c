/*
 * XREFs of ?ExecuteTag@CAppArrangementSingleTransitionTarget@@UEAAJXZ @ 0x1804E4AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z @ 0x1804E4A3C (-AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CAppArrangementSingleTransitionTarget::ExecuteTag(
        CAppArrangementSingleTransitionTarget *this,
        const struct tagRECT *a2)
{
  __int64 result; // rax
  char v4; // di
  char *v5; // rsi
  int v6; // ebp
  _DWORD *v7; // r14
  const struct tagRECT *v8; // rdx
  int v9; // ebp
  char *v10; // rcx
  char *v11; // rax
  __int64 v12; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 10) == 45 || (v4 = 0, *((_DWORD *)this + 10) == 46) )
    v4 = 1;
  if ( *((_DWORD *)this + 10) == 4095 )
    goto LABEL_18;
  v5 = (char *)this + 136;
  if ( *((_BYTE *)this + 153) )
  {
    if ( !v4 )
      goto LABEL_18;
  }
  v6 = *((_DWORD *)this + 11);
  v7 = (_DWORD *)((char *)this + 72);
  AdjustSourceRectForNonClientArea(*((HWND *)this + 7), a2, (struct tagRECT *)((char *)this + 72));
  v9 = v6 & 0x800000;
  if ( v9 )
    AdjustSourceRectForNonClientArea(*((HWND *)this + 7), v8, (struct tagRECT *)((char *)this + 104));
  if ( *v7 || *((_DWORD *)this + 19) )
    *((_DWORD *)this + 11) &= ~0x200000u;
  if ( v4 )
    v5 = 0LL;
  if ( v9 )
  {
    v10 = (char *)this + 120;
    v11 = (char *)this + 104;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
  }
  result = DwmpTransitionWindowWithRects(
             *((_QWORD *)this + 7),
             *((_DWORD *)this + 10) ^ (*((_DWORD *)this + 11) ^ *((_DWORD *)this + 10)) & 0xFFFFF000,
             v7,
             (char *)this + 88,
             v11,
             v10,
             v5);
  if ( (int)result >= 0 )
  {
LABEL_18:
    v12 = *((_QWORD *)this + 8);
    if ( v12 )
      return DwmpTransitionWindow(v12, *((_DWORD *)this + 12) & 0xFFFFF000 | 0x2B);
  }
  return result;
}
