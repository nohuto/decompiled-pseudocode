/*
 * XREFs of ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x180055974
 * Callers:
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180055940 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x180082C2C (-IsSplashScreen@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::HasNonTrivialRepresentation(CWindowData *this)
{
  char v2; // si
  int v3; // ebx
  int SystemMetrics; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // ecx

  if ( *((_QWORD *)this + 60) )
    return 1;
  if ( CWindowData::IsImmersiveWindow(this) )
    return (*((_BYTE *)this + 676) & 0x10) == 0 || CWindowData::IsSplashScreen(this);
  if ( !*((_QWORD *)this + 55) )
    return 0;
  v2 = 1;
  if ( (*((_BYTE *)this + 672) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 3) )
      return 0;
  }
  if ( (*((_BYTE *)this + 673) & 0x30) == 0 && (*((_DWORD *)this + 30) & 0x200000) == 0 )
    return 0;
  if ( (*((_DWORD *)this + 29) & 0x20000000) != 0 )
  {
    v3 = *((_DWORD *)this + 57) - *((_DWORD *)this + 55);
    SystemMetrics = GetSystemMetrics(57);
    v5 = 0;
    if ( v3 >= 0 )
      v5 = v3;
    if ( v5 <= SystemMetrics )
    {
      v6 = *((_DWORD *)this + 58) - *((_DWORD *)this + 56);
      v7 = GetSystemMetrics(58);
      v8 = 0;
      if ( v6 >= 0 )
        v8 = v6;
      if ( v8 <= v7 )
        return 0;
    }
  }
  return v2;
}
