/*
 * XREFs of ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1401469B4
 * Callers:
 *     FinishStockFontInit @ 0x140146690 (FinishStockFontInit.c)
 * Callees:
 *     bDeleteFont @ 0x1401461A0 (bDeleteFont.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x140146C40 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x140146CF0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x14014706C (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     bInitOneStockFontInternal @ 0x1403ED6C8 (bInitOneStockFontInternal.c)
 */

void __fastcall FinishStockFontInitInternal(const unsigned __int16 *a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned __int16 *v5; // rsi
  unsigned __int16 *v6; // rdi
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  unsigned int v9; // r9d
  __int64 v10; // rbx
  unsigned int v11; // r13d
  int *v12; // r14
  unsigned int v13; // r15d
  HANDLE *v14; // r12
  unsigned __int64 v15; // rdx
  unsigned __int16 *v16; // rcx
  unsigned __int16 v17; // ax
  unsigned __int16 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rbp
  unsigned int v22; // edi
  HANDLE *v23; // rbx
  __int64 v24; // [rsp+28h] [rbp-70h]
  __int128 v25; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+40h] [rbp-58h]
  PCWSTR SourceString[3]; // [rsp+48h] [rbp-50h]

  SourceString[0] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  SourceString[1] = a1;
  SourceString[2] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize";
  v25 = 0LL;
  v3 = 0;
  v26 = 0LL;
  v4 = 0LL;
  do
  {
    if ( !(unsigned int)bOpenKey(SourceString[v4], (PHANDLE)&v25 + (int)v3) )
      *(_QWORD *)((char *)&v25 + v4 * 8) = 0LL;
    ++v3;
    ++v4;
  }
  while ( v3 < 3 );
  v5 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v6 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v8 = Gre::Base::Globals(v7);
  if ( a2 )
    v10 = *((_QWORD *)v8 + 377);
  else
    v10 = *((_QWORD *)v8 + 376);
  v24 = v10;
  v11 = 0;
  v12 = (int *)&unk_14034C27C;
  do
  {
    v13 = 0;
    v14 = (HANDLE *)&v25;
    while ( v13 < 3 )
    {
      if ( *v14 && v5 && v6 && bGetRegString(*v14, *(const unsigned __int16 **)(v12 - 3), v5, v9) )
      {
        v15 = 260LL;
        v16 = v6;
        do
        {
          if ( v15 == -2147483386LL )
            break;
          v17 = *(unsigned __int16 *)((char *)v16 + (char *)L"\\SystemRoot\\Fonts\\" - (char *)v6);
          if ( !v17 )
            break;
          *v16++ = v17;
          --v15;
        }
        while ( v15 );
        v18 = v16 - 1;
        if ( v15 )
          v18 = v16;
        *v18 = 0;
        if ( v15 )
        {
          if ( (int)StringCchCatW(v6, v15, v5) >= 0 )
          {
            LOBYTE(v19) = 10;
            v20 = *(_QWORD *)(v10 + 8LL * *v12);
            v21 = v20 & -(__int64)((unsigned int)HmgValidHandle(v20, v19) != 0);
            if ( (unsigned int)bInitOneStockFontInternal(v6) )
            {
              if ( v21 )
                bDeleteFont(v21, 1LL);
              break;
            }
          }
        }
      }
      v10 = v24;
      ++v13;
      ++v14;
    }
    v10 = v24;
    ++v11;
    v12 += 4;
  }
  while ( v11 < 3 );
  if ( v5 )
    FreeTmpBuffer(v5);
  if ( v6 )
    FreeTmpBuffer(v6);
  v22 = 0;
  v23 = (HANDLE *)&v25;
  do
  {
    if ( *v23 )
      ZwClose(*v23);
    ++v22;
    ++v23;
  }
  while ( v22 < 3 );
}
