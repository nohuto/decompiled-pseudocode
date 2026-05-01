/*
 * XREFs of ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x18023A648
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038C648 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CJumpViewExperienceManager::CalcWindowPosition(
        int *a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  int v7; // r11d
  int v8; // r10d
  unsigned __int64 v9; // rdx
  int v10; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r10d
  int v15; // eax
  int v16; // eax

  v7 = a1[3];
  v8 = a2;
  v9 = HIDWORD(a2);
  v10 = v9;
  if ( (int)v9 >= v7 )
    v10 = a1[3];
  if ( v10 <= a1[1] )
  {
    LODWORD(v9) = a1[1];
  }
  else if ( (int)v9 >= v7 )
  {
    LODWORD(v9) = a1[3];
  }
  a7[3] = v9;
  v12 = v9 - a4;
  if ( v12 <= a1[1] )
    v12 = a1[1];
  v13 = a1[2];
  a7[1] = v12;
  v14 = v8 - a3 / 2;
  v15 = v14;
  if ( v14 <= *a1 )
    v15 = *a1;
  if ( v15 >= v13 )
  {
    v14 = v13;
  }
  else if ( v14 <= *a1 )
  {
    v14 = *a1;
  }
  v16 = v14 + a3;
  *a7 = v14;
  if ( v14 + a3 >= v13 )
    v16 = v13;
  a7[2] = v16;
  return 0LL;
}
