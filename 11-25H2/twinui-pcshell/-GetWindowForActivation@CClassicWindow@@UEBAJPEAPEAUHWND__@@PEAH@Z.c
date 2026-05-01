/*
 * XREFs of ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x1800D9B80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800D8E48 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x1800D9C18 (-CanChangeForeground@@YAJXZ.c)
 */

__int64 __fastcall CClassicWindow::GetWindowForActivation(CClassicWindow *this, HWND *a2, int *a3)
{
  int v3; // ebx
  HWND v7; // rdx
  int v8; // esi
  CApplicationManagerUtility *v10; // rcx
  HWND v11; // rcx
  int pvAttribute; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v8 = CanChangeForeground();
  if ( v8 >= 0 )
  {
    v10 = (CApplicationManagerUtility *)*((_QWORD *)this + 2);
    *a2 = (HWND)v10;
    if ( CApplicationManagerUtility::IsValidAndVisibleWindow(v10, v7) )
    {
      *a3 = 1;
      v11 = *a2;
      pvAttribute = 0;
      if ( DwmGetWindowAttribute(v11, 0xEu, &pvAttribute, 4u) >= 0 )
      {
        LOBYTE(v3) = (pvAttribute & 0xFFFFFFFD) == 0;
        *a3 = v3;
      }
    }
  }
  return (unsigned int)v8;
}
