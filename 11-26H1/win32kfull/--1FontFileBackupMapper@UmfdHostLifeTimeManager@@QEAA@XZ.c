/*
 * XREFs of ??1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14034D5C4
 * Callers:
 *     ?CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z @ 0x14034D6D0 (-CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z.c)
 * Callees:
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     EngUnmapFile @ 0x14031D660 (EngUnmapFile.c)
 */

void __fastcall UmfdHostLifeTimeManager::FontFileBackupMapper::~FontFileBackupMapper(
        UmfdHostLifeTimeManager::FontFileBackupMapper *this)
{
  ULONG_PTR v1; // rax
  _QWORD v2[4]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+40h] [rbp-18h]

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
    v3 = 4;
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v2);
  }
}
