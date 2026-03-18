/*
 * XREFs of ?bCopySection@@YAHPEAX0_K@Z @ 0x14031D284
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x14031CE4C (-ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEA.c)
 * Callees:
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall bCopySection(void *a1, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  bool v8; // zf
  __int64 v9; // rsi
  size_t v10; // rcx
  size_t v11; // rsi
  char v12; // al
  __int64 v14; // [rsp+38h] [rbp-90h] BYREF
  __int64 v15; // [rsp+40h] [rbp-88h]
  __int64 v16; // [rsp+48h] [rbp-80h]
  __int64 v17; // [rsp+50h] [rbp-78h]
  int v18; // [rsp+58h] [rbp-70h]
  __int64 v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  __int64 v22; // [rsp+78h] [rbp-50h]
  int v23; // [rsp+80h] [rbp-48h]
  unsigned __int64 v24; // [rsp+E8h] [rbp+20h] BYREF

  v6 = a3;
  v7 = 0;
  while ( 1 )
  {
    v8 = v6 == 0;
    if ( !v6 )
      break;
    v9 = v6;
    if ( v6 > 0x10000 )
      v9 = 0x10000LL;
    v24 = a3 - v6;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 6;
    if ( !(unsigned __int8)Gre::MapViewOfSectionObj::Map(&v14, a1, 1LL, v9, &v24) )
      goto LABEL_18;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 6;
    if ( !(unsigned __int8)Gre::MapViewOfSectionObj::Map(&v19, a2, 0LL, v9, &v24) )
      goto LABEL_17;
    v10 = v17 - v15;
    if ( v17 - v15 >= (unsigned __int64)(v22 - v20) )
      v10 = v22 - v20;
    v11 = v6;
    if ( v10 < v6 )
      v11 = v10;
    memmove((void *)(v15 + v16), (const void *)(v21 + v20), v11);
    if ( !Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v14)
      || (v8 = !Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v19), v12 = 1, v8) )
    {
      v12 = 0;
    }
    if ( !v11 || !v12 )
    {
LABEL_17:
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v19);
LABEL_18:
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v14);
      v8 = v6 == 0;
      break;
    }
    v6 -= v11;
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v19);
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v14);
  }
  LOBYTE(v7) = v8;
  return v7;
}
