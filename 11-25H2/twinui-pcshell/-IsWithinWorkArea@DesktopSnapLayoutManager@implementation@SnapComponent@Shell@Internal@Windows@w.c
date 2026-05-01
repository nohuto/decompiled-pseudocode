/*
 * XREFs of ?IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA_NAEBURect@Foundation@67@@Z @ 0x180596100
 * Callers:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805970DC (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805972DC (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1802388D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::IsWithinWorkArea(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  int v4; // r9d
  float v5; // xmm0_4
  int v6; // r10d
  float v7; // xmm1_4
  int v8; // r11d
  float v9; // xmm0_4
  int v10; // ebx
  float v11; // xmm1_4
  int v12; // eax
  float v13; // xmm0_4
  int v14; // r8d
  _DWORD v16[4]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v17[6]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((float *)this + 18);
  v3 = *((float *)this + 19);
  v4 = (int)v2;
  v5 = v2 + *((float *)this + 20);
  v6 = (int)v3;
  v16[0] = v4;
  v7 = v3 + *((float *)this + 21);
  v8 = (int)v5;
  v16[1] = v6;
  v9 = *(float *)a2;
  v10 = (int)v7;
  v16[2] = v8;
  v11 = *((float *)a2 + 1);
  v16[3] = v10;
  v12 = (int)v9;
  v13 = v9 + *((float *)a2 + 2);
  v14 = (int)(float)(v11 + *((float *)a2 + 3));
  if ( v4 >= v12 )
    v4 = v12;
  v17[0] = v4;
  if ( v6 >= (int)v11 )
    v6 = (int)v11;
  v17[1] = v6;
  if ( v8 <= (int)v13 )
    v8 = (int)v13;
  v17[2] = v8;
  if ( v10 <= v14 )
    v10 = v14;
  v17[3] = v10;
  return Geometry::operator==(v17, v16);
}
