/*
 * XREFs of ?do_length@?$codecvt@_WDH@std@@MEBAHAEAHPEBD1_K@Z @ 0x180018CA0
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x1800049A4 (_Mbrtowc.c)
 *     strlen_0 @ 0x180021D0E (strlen_0.c)
 */

__int64 __fastcall std::codecvt<wchar_t,char,int>::do_length(
        __int64 a1,
        unsigned int *a2,
        const char *a3,
        const char *a4,
        unsigned __int64 a5)
{
  unsigned int i; // ebx
  int v9; // ecx
  int v10; // eax
  wchar_t v12; // [rsp+58h] [rbp+10h] BYREF
  mbstate_t v13; // [rsp+60h] [rbp+18h] BYREF

  v13._Wchar = *a2;
  for ( i = 0; (int)i < a5; a3 += v10 )
  {
    if ( a3 == a4 )
      break;
    v12 = 0;
    v9 = Mbrtowc(&v12, a3, a4 - a3, &v13, (const _Cvtvec *)(a1 + 16));
    if ( (unsigned int)(v9 + 2) <= 1 )
      break;
    if ( !v9 && !v12 )
      v9 = strlen_0(a3) + 1;
    v10 = 0;
    if ( v9 != -3 )
      v10 = v9;
    ++i;
  }
  return i;
}
