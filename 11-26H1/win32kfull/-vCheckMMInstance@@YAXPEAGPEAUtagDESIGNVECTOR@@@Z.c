/*
 * XREFs of ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x140007000
 * Callers:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x140006DC8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 * Callees:
 *     GreGetCannonicalName @ 0x1400058BC (GreGetCannonicalName.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vCheckMMInstance(wchar_t *Str1, struct tagDESIGNVECTOR *a2)
{
  wchar_t *v4; // rbx
  wchar_t v5; // ax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  signed __int64 v8; // rdi
  _WORD *v9; // rcx
  __int16 v10; // ax
  _WORD *v11; // rax
  unsigned int v12[4]; // [rsp+20h] [rbp-458h] BYREF
  _WORD Src[264]; // [rsp+30h] [rbp-448h] BYREF
  char v14[528]; // [rsp+240h] [rbp-238h] BYREF

  *((_DWORD *)a2 + 1) = 0;
  v4 = Str1;
  do
  {
    v5 = *v4;
    if ( !*v4 )
      break;
    ++v4;
  }
  while ( v5 != 40 );
  if ( *v4 )
  {
    if ( !_wcsicmp(v4, L"OpenType)") )
    {
      v6 = v4 - Str1 - 1;
      if ( v6 <= 0x7FFFFFFE )
      {
        v7 = 260LL;
        v8 = (char *)Str1 - (char *)Src;
        v9 = Src;
        do
        {
          if ( !(v6 + v7 - 260) )
            break;
          v10 = *(_WORD *)((char *)v9 + v8);
          if ( !v10 )
            break;
          *v9++ = v10;
          --v7;
        }
        while ( v7 );
        v11 = v9 - 1;
        if ( v7 )
          v11 = v9;
        *v11 = 0;
        if ( v7 )
          GreGetCannonicalName(Src, v14, v12, a2);
      }
    }
  }
}
