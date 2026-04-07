/*
 * XREFs of ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800203B0
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001F900 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18004B728 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18002105C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall ColorCache::GetColor(unsigned int a1)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rbx
  unsigned int v4; // ebx
  unsigned int v6; // ebx
  unsigned int Buffer; // [rsp+20h] [rbp-18h] BYREF
  unsigned int Color; // [rsp+24h] [rbp-14h]
  char v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  EnterCriticalSection(&ColorCache::_lock);
  v9 = 1;
  Color = 0;
  Buffer = a1;
  v2 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, &Buffer);
  v3 = v2;
  if ( v2 )
  {
    if ( !v2[8] )
    {
      v10 = 0LL;
      GetUserColorPreference(&v10, 0LL);
      *((_DWORD *)v3 + 1) = GetColorFromPreference(&v10, a1, 0LL, 1LL);
      v3[8] = 1;
    }
    v4 = *((_DWORD *)v3 + 1);
    LeaveCriticalSection(&ColorCache::_lock);
    return v4;
  }
  else
  {
    v9 = 1;
    Buffer = a1;
    Color = CImmersiveColor::GetColor(a1);
    RtlInsertElementGenericTable(&ColorCache::_cachedColors, &Buffer, 0xCu, 0LL);
    v6 = Color;
    LeaveCriticalSection(&ColorCache::_lock);
    return v6;
  }
}
