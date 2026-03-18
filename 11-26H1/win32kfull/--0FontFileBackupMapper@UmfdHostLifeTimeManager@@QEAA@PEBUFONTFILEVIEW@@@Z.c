/*
 * XREFs of ??0FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@PEBUFONTFILEVIEW@@@Z @ 0x14034D4E8
 * Callers:
 *     ?CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z @ 0x14034D6D0 (-CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z.c)
 * Callees:
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     EngMapFile @ 0x14031D5A0 (EngMapFile.c)
 */

UmfdHostLifeTimeManager::FontFileBackupMapper *__fastcall UmfdHostLifeTimeManager::FontFileBackupMapper::FontFileBackupMapper(
        UmfdHostLifeTimeManager::FontFileBackupMapper *this,
        const struct FONTFILEVIEW *a2)
{
  ULONG_PTR *v2; // r8
  __int64 v5; // rcx
  ULONG v6; // r9d
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+40h] [rbp-10h]

  v2 = (ULONG_PTR *)((char *)this + 8);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  v5 = *((_QWORD *)a2 + 2);
  v6 = *((_DWORD *)a2 + 6);
  if ( v5 )
  {
    *(_QWORD *)this = v5;
  }
  else
  {
    v7 = *((_QWORD *)a2 + 4);
    if ( v7 )
    {
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 6;
      if ( (unsigned __int8)Gre::MapViewOfSectionObj::Map((__int64)&v9, v7, 4LL, 0LL) )
      {
        *(_QWORD *)this = v11;
        v11 = 0LL;
        v9 = 0LL;
        v10 = 0LL;
        v12 = 0LL;
        v13 = 6;
        *((_BYTE *)this + 16) = 1;
      }
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v9);
    }
    else
    {
      *(_QWORD *)this = EngMapFile(*((LPWSTR *)a2 + 10), v6, v2);
    }
  }
  return this;
}
