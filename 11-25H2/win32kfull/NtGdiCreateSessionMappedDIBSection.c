/*
 * XREFs of NtGdiCreateSessionMappedDIBSection @ 0x140164920
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDIBitmapReal @ 0x14007C73C (GreCreateDIBitmapReal.c)
 *     GreGetBitmapBitsSize @ 0x140164C9C (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x140164D38 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCreateSessionMappedDIBSection(
        HDC a1,
        __int64 a2,
        int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        unsigned int Size,
        char a7,
        __int64 a8)
{
  __int64 DIBitmapReal; // rsi
  __int64 v12; // r13
  HANDLE v13; // rbx
  struct tagBITMAPINFO *v14; // rbx
  unsigned int BitmapBitsSize; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r12
  char CurrentThreadPreviousMode; // al
  __int64 v20; // r9
  char v21; // al
  signed int v22; // r12d
  __int64 v23; // rax
  int v24; // ecx
  ULONG v26; // ecx
  unsigned __int16 v27; // [rsp+70h] [rbp-78h]
  struct tagBITMAPINFO *v28; // [rsp+78h] [rbp-70h] BYREF
  __int64 v29; // [rsp+80h] [rbp-68h] BYREF
  __int64 v30; // [rsp+88h] [rbp-60h] BYREF
  __int64 v31; // [rsp+90h] [rbp-58h] BYREF
  __int64 v32; // [rsp+98h] [rbp-50h]
  __int128 v33; // [rsp+A0h] [rbp-48h]
  __int64 v34; // [rsp+B0h] [rbp-38h]
  int v35; // [rsp+B8h] [rbp-30h]
  int v37; // [rsp+F8h] [rbp+10h]

  v27 = a3;
  DIBitmapReal = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v12 = 0LL;
  if ( !a2 || !a4 )
  {
    v26 = 87;
    goto LABEL_24;
  }
  v13 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63544);
  if ( PsGetCurrentProcessId() != v13 )
  {
    v26 = 5;
LABEL_24:
    EngSetLastError(v26);
    return 0LL;
  }
  bCaptureBitmapInfo(a4, a5, Size, &v28);
  v14 = v28;
  if ( v28 )
  {
    BitmapBitsSize = GreGetBitmapBitsSize(v28);
    v18 = BitmapBitsSize;
    v37 = BitmapBitsSize;
    if ( BitmapBitsSize )
    {
      v28 = (struct tagBITMAPINFO *)(a3 & 0xFFFF0000);
      CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
      v30 = a2;
      LOBYTE(v20) = CurrentThreadPreviousMode;
      Gre::SectionObj::SectionObj(&v29, &v30, 0LL, v20);
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      v35 = 5;
      if ( v29 )
      {
        v30 = v27;
        v21 = Gre::MapViewOfSectionObj::Map(&v31, v29, 3LL, v27 + v18, &v28);
        if ( v21 )
          v12 = v33;
        v22 = v21 == 0 ? 0xC0000001 : 0;
        v23 = v30;
      }
      else
      {
        v22 = -1073741823;
        EngSetLastError(0xC0000001);
        v23 = v27;
      }
      if ( v22 < 0 )
        EngSetLastError(v22);
      else
        DIBitmapReal = GreCreateDIBitmapReal(
                         a1,
                         2LL,
                         v23 + v12,
                         (__int64)v14,
                         a5,
                         Size,
                         v37,
                         a2,
                         a3,
                         0LL,
                         a7 & 4 | 0xAu,
                         a8,
                         0LL);
      if ( DIBitmapReal )
      {
        v33 = 0uLL;
        v31 = 0LL;
        v32 = 0LL;
        v34 = 0LL;
        v24 = 5;
        v35 = 5;
      }
      else
      {
        EngSetLastError(0x57u);
        v24 = v35;
      }
      if ( v24 != 5 )
        Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v31);
      Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v29);
    }
    FreeThreadBufferWithTag(v14, v16, v17);
  }
  return DIBitmapReal;
}
