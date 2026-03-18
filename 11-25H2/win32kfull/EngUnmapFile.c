/*
 * XREFs of EngUnmapFile @ 0x140306130
 * Callers:
 *     ??1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14033828C (--1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14010C4A4 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E756C (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 */

BOOL __stdcall EngUnmapFile(ULONG_PTR iFile)
{
  __int64 v2; // rax
  BOOL v3; // ebx
  struct NETWORKED_FONT_FILE_NODE *v4; // rdx
  _QWORD v6[5]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+48h] [rbp-10h]

  if ( !iFile )
    return 0;
  v6[0] = 0LL;
  v6[1] = 0LL;
  v2 = *(_QWORD *)(iFile + 8);
  v6[3] = 0LL;
  v6[4] = 0LL;
  v6[2] = v2;
  v7 = 3;
  v3 = Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v6);
  vUnreferenceFileviewSection((struct FILEVIEW *)iFile, v4);
  Win32FreePool((void *)iFile);
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v6);
  return v3;
}
