/*
 * XREFs of hfontCreate @ 0x14008F860
 * Callers:
 *     GreCreateFontIndirectW @ 0x140055014 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1401814B0 (NtGdiHfontCreate.c)
 *     hfontCreatePublic @ 0x1402180C0 (hfontCreatePublic.c)
 *     bInitSystemFont @ 0x1403EC64C (bInitSystemFont.c)
 *     bInitOneStockFontInternal @ 0x1403ED6C8 (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1403EDDD8 (hfontInitDefaultGuiFont.c)
 *     bInitStockFontsInternal @ 0x1403EE62C (bInitStockFontsInternal.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14008F82C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14008FAA0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall hfontCreate(char *Src, int a2, int a3, void *a4, int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // ebx
  _DWORD *Object; // rax
  _DWORD *v12; // rdi
  Gre::Base *v13; // rcx
  char *i; // rbx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 inserted; // rsi
  __int64 v18; // rbx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-A1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-91h] BYREF
  _BYTE v22[32]; // [rsp+40h] [rbp-81h] BYREF
  _DWORD *v23; // [rsp+60h] [rbp-61h]
  _BYTE v24[96]; // [rsp+70h] [rbp-51h] BYREF

  if ( Src )
  {
    v9 = *((_DWORD *)Src + 88);
    if ( v9 <= 0x10 )
    {
      v10 = 4 * v9 + 356;
      Object = (_DWORD *)AllocateObject(4 * v9 + 632, 10LL);
      v12 = Object;
      if ( Object )
      {
        Object[6] = a2;
        Object[7] = a3;
        Object[68] = v10;
        memmove(Object + 69, Src, v10);
        v12[8] = 0;
        *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
        DestinationString = 0LL;
        v12[9] = *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v13) + 221) + 1573016LL);
        for ( i = Src + 28; i < Src + 90; i += 2 )
        {
          if ( !*(_WORD *)i )
            break;
        }
        v15 = (i - (Src + 28)) >> 1;
        if ( (_DWORD)v15 )
        {
          SourceString.Buffer = (PWSTR)(Src + 28);
          DestinationString.Buffer = (PWSTR)(v12 + 52);
          SourceString.Length = 2 * v15;
          SourceString.MaximumLength = 64;
          DestinationString.MaximumLength = 64;
          RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
        }
        *((_WORD *)v12 + (int)v15 + 104) = 0;
        *((_DWORD *)Src + 3) = lNormAngle(*((unsigned int *)Src + 3));
        ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v24);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
        if ( !v23 )
        {
          LOBYTE(v16) = 10;
          inserted = HmgInsertObjectInternal(v12, a5 | 1u, v16);
          if ( inserted )
          {
            v23 = v12;
            v18 = HmgPentryFromPobj(v12);
            *(_QWORD *)(v18 + 16) = GreEncodeUserModePointer(a4);
            HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
            ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v24);
            return inserted;
          }
        }
        FreeObject(v12, 10LL);
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
        ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v24);
      }
    }
  }
  return 0LL;
}
