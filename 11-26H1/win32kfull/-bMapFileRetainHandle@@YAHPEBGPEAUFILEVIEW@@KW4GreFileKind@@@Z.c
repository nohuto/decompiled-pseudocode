/*
 * XREFs of ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x1401C676C
 * Callers:
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 *     bInitCacheTable @ 0x14031B73C (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x14031B914 (bReAllocCacheFile.c)
 * Callees:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CF7D0 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ??0FileObj@Gre@@QEAA@PEBG_N@Z @ 0x1400CFF68 (--0FileObj@Gre@@QEAA@PEBG_N@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?Reset@FileObj@Gre@@QEAAXPEAX@Z @ 0x1401C68C8 (-Reset@FileObj@Gre@@QEAAXPEAX@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bMapFileRetainHandle(unsigned __int16 *a1, __int64 a2, int a3)
{
  void *v6; // rsi
  unsigned int v7; // ebx
  __int64 result; // rax
  struct NETWORKED_FONT_FILE_NODE *v9; // rdx
  __int64 v10; // rax
  void *FileHandle; // [rsp+38h] [rbp-39h] BYREF
  __int64 v12; // [rsp+40h] [rbp-31h] BYREF
  __int64 v13; // [rsp+48h] [rbp-29h]
  __int64 v14; // [rsp+50h] [rbp-21h]
  __int64 v15; // [rsp+58h] [rbp-19h]
  int v16; // [rsp+60h] [rbp-11h]
  _OWORD v17[2]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v18; // [rsp+88h] [rbp+17h]
  __int128 v19; // [rsp+98h] [rbp+27h]
  __int128 v20; // [rsp+A8h] [rbp+37h]

  memset_0(v17, 0, 0x50uLL);
  v6 = *(void **)(a2 + 48);
  v7 = 0;
  if ( !v6 )
  {
    Gre::FileObj::FileObj(&FileHandle, a1, a3 != 0);
    v6 = FileHandle;
    FileHandle = 0LL;
    Gre::FileObj::Reset((Gre::FileObj *)&FileHandle, 0LL);
    if ( !v6 )
      return 0LL;
  }
  if ( a3 < 0 )
  {
    FileHandle = v6;
    Gre::FileObj::Reset((Gre::FileObj *)&FileHandle, 0LL);
    return 0LL;
  }
  if ( (unsigned int)bCreateSectionFromHandle(v6, a1, v17, a3, 0) )
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 6;
    if ( (unsigned __int8)Gre::MapViewOfSectionObj::Map(&v12, v18, 4 - (unsigned int)(a3 != 0)) )
    {
      v10 = v14;
      v14 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v15 = 0LL;
      v7 = 1;
      *((_QWORD *)&v17[0] + 1) = v10;
      v16 = 6;
    }
    else
    {
      vUnreferenceFileviewSection((struct FILEVIEW *)v17, v9);
    }
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v12);
  }
  result = v7;
  *(_OWORD *)a2 = v17[0];
  *(_OWORD *)(a2 + 16) = v17[1];
  *(_OWORD *)(a2 + 32) = v18;
  *(_OWORD *)(a2 + 48) = v19;
  *(_OWORD *)(a2 + 64) = v20;
  return result;
}
