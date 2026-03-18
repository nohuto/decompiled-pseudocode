/*
 * XREFs of ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140305F10
 * Callers:
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 *     bInitCacheTable @ 0x140303C78 (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x140303E68 (bReAllocCacheFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14010C4A4 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ??0FileObj@Gre@@QEAA@PEBG_N@Z @ 0x1401B1EDC (--0FileObj@Gre@@QEAA@PEBG_N@Z.c)
 *     ?Reset@FileObj@Gre@@QEAAXPEAX@Z @ 0x1401D26F8 (-Reset@FileObj@Gre@@QEAAXPEAX@Z.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x1401E2D2C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E756C (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305B64 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bMapFileRetainHandle(void *a1, __int64 a2, signed int a3)
{
  void *v5; // rsi
  unsigned int v6; // ebx
  __int64 result; // rax
  struct NETWORKED_FONT_FILE_NODE *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // [rsp+38h] [rbp-39h] BYREF
  __int64 v11; // [rsp+40h] [rbp-31h]
  __int128 v12; // [rsp+48h] [rbp-29h]
  __int64 v13; // [rsp+58h] [rbp-19h]
  int v14; // [rsp+60h] [rbp-11h]
  _OWORD v15[2]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v16; // [rsp+88h] [rbp+17h]
  __int128 v17; // [rsp+98h] [rbp+27h]
  __int128 v18; // [rsp+A8h] [rbp+37h]
  void *FileHandle; // [rsp+D8h] [rbp+67h] BYREF

  FileHandle = a1;
  memset_0(v15, 0, 0x50uLL);
  v5 = *(void **)(a2 + 48);
  v6 = 0;
  if ( !v5 )
  {
    Gre::FileObj::FileObj(&FileHandle, L"\\SystemRoot\\system32\\FNTCACHE.DAT", a3 != 0);
    v5 = FileHandle;
    FileHandle = 0LL;
    Gre::FileObj::Reset(&FileHandle, 0LL);
    if ( !v5 )
      return 0LL;
  }
  if ( a3 < 0 )
  {
    FileHandle = v5;
    Gre::FileObj::Reset(&FileHandle, 0LL);
    return 0LL;
  }
  if ( (unsigned int)bCreateSectionFromHandle(v5, L"\\SystemRoot\\system32\\FNTCACHE.DAT", v15, a3, 0) )
  {
    v10 = 0LL;
    v11 = 0LL;
    v13 = 0LL;
    v12 = 0LL;
    v14 = 5;
    if ( (unsigned __int8)Gre::MapViewOfSectionObj::Map((__int64)&v10, v16, 3LL, 0LL) )
    {
      v9 = v12;
      v12 = 0uLL;
      v10 = 0LL;
      v11 = 0LL;
      v13 = 0LL;
      v6 = 1;
      *((_QWORD *)&v15[0] + 1) = v9;
      v14 = 5;
    }
    else
    {
      vUnreferenceFileviewSection((struct FILEVIEW *)v15, v8);
    }
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v10);
  }
  result = v6;
  *(_OWORD *)a2 = v15[0];
  *(_OWORD *)(a2 + 16) = v15[1];
  *(_OWORD *)(a2 + 32) = v16;
  *(_OWORD *)(a2 + 48) = v17;
  *(_OWORD *)(a2 + 64) = v18;
  return result;
}
