/*
 * XREFs of ??1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14033828C
 * Callers:
 *     ?CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z @ 0x14033839C (-CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z.c)
 * Callees:
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E756C (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     EngUnmapFile @ 0x140306130 (EngUnmapFile.c)
 */

void __fastcall UmfdHostLifeTimeManager::FontFileBackupMapper::~FontFileBackupMapper(
        UmfdHostLifeTimeManager::FontFileBackupMapper *this)
{
  ULONG_PTR v1; // rax
  _QWORD v2[5]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+48h] [rbp-10h]

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    EngUnmapFile(v1);
  }
  else if ( *((_BYTE *)this + 16) )
  {
    v2[0] = 0LL;
    v2[1] = 0LL;
    v2[2] = *(_QWORD *)this;
    v2[3] = 0LL;
    v2[4] = 0LL;
    v3 = 3;
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v2);
  }
}
