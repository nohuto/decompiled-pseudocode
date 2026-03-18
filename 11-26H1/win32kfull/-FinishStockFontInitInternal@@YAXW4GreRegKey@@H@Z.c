/*
 * XREFs of ?FinishStockFontInitInternal@@YAXW4GreRegKey@@H@Z @ 0x14010FDF8
 * Callers:
 *     FinishStockFontInit @ 0x14010FBC0 (FinishStockFontInit.c)
 * Callees:
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x14011007C (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x140110230 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z @ 0x1401C6450 (-GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z.c)
 *     bDeleteFont @ 0x1401E29B0 (bDeleteFont.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     bInitOneStockFontInternal @ 0x1403FB108 (bInitOneStockFontInternal.c)
 */

char __fastcall FinishStockFontInitInternal(int a1, int a2)
{
  unsigned int v2; // ebx
  __int128 *v4; // rdi
  unsigned int *v5; // rsi
  unsigned __int16 *v6; // rsi
  unsigned __int16 *v7; // rdi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  unsigned int v10; // r9d
  int *v11; // r15
  unsigned int v12; // r13d
  __int64 v13; // rbx
  unsigned int v14; // r14d
  HANDLE *v15; // r12
  unsigned __int64 v16; // rdx
  unsigned __int16 *v17; // rcx
  unsigned __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rbp
  unsigned int v22; // edi
  HANDLE *v23; // rbx
  __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  int v26; // [rsp+28h] [rbp-60h]
  int v27; // [rsp+30h] [rbp-58h]
  __int128 v28; // [rsp+38h] [rbp-50h] BYREF
  __int64 v29; // [rsp+48h] [rbp-40h]

  v27 = a2;
  LODWORD(v25) = 5;
  HIDWORD(v25) = a1;
  v28 = 0LL;
  v2 = 0;
  v26 = 1;
  v29 = 0LL;
  v4 = &v28;
  v5 = (unsigned int *)&v25;
  do
  {
    if ( (int)GrepGetRegKey((char *)&v28 + 8 * (int)v2, 131097LL, *v5) < 0 )
      *(_QWORD *)v4 = 0LL;
    ++v2;
    ++v5;
    v4 = (__int128 *)((char *)v4 + 8);
  }
  while ( v2 < 3 );
  v6 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v7 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v9 = Gre::Base::Globals(v8);
  v11 = (int *)&unk_140358E3C;
  v12 = 0;
  v13 = *(_QWORD *)((char *)v9 + (a2 != 0 ? 8 : 0) + 3088);
  v25 = v13;
  do
  {
    v14 = 0;
    v15 = (HANDLE *)&v28;
    while ( v14 < 3 )
    {
      if ( *v15 )
      {
        if ( v6 )
        {
          if ( v7 )
          {
            LOBYTE(v9) = bGetRegString(*v15, *(const unsigned __int16 **)(v11 - 3), v6, v10);
            if ( (_BYTE)v9 )
            {
              v16 = 260LL;
              v17 = v7;
              do
              {
                if ( v16 == -2147483386LL )
                  break;
                v18 = *(unsigned __int16 *)((char *)v17 + (char *)L"\\SystemRoot\\Fonts\\" - (char *)v7);
                if ( !v18 )
                  break;
                *v17++ = v18;
                --v16;
              }
              while ( v16 );
              v9 = (struct Gre::Base::SESSION_GLOBALS *)(v17 - 1);
              if ( v16 )
                v9 = (struct Gre::Base::SESSION_GLOBALS *)v17;
              *(_WORD *)v9 = 0;
              if ( v16 )
              {
                LODWORD(v9) = StringCchCatW(v7, v16, v6);
                if ( (int)v9 >= 0 )
                {
                  LOBYTE(v19) = 10;
                  v20 = *(_QWORD *)(v13 + 8LL * *v11);
                  v21 = v20 & -(__int64)((unsigned int)HmgValidHandle(v20, v19) != 0);
                  LODWORD(v9) = bInitOneStockFontInternal(v7);
                  if ( (_DWORD)v9 )
                  {
                    if ( v21 )
                      LOBYTE(v9) = bDeleteFont(v21, 1LL);
                    v13 = v25;
                    break;
                  }
                  v13 = v25;
                }
              }
            }
          }
        }
      }
      ++v14;
      ++v15;
    }
    ++v12;
    v11 += 4;
  }
  while ( v12 < 3 );
  if ( v6 )
    LOBYTE(v9) = FreeTmpBuffer(v6);
  if ( v7 )
    LOBYTE(v9) = FreeTmpBuffer(v7);
  v22 = 0;
  v23 = (HANDLE *)&v28;
  do
  {
    if ( *v23 )
      LOBYTE(v9) = ZwClose(*v23);
    ++v22;
    ++v23;
  }
  while ( v22 < 3 );
  return (char)v9;
}
