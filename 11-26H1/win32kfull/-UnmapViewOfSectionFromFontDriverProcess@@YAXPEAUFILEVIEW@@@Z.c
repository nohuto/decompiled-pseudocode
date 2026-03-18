/*
 * XREFs of ?UnmapViewOfSectionFromFontDriverProcess@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3D54
 * Callers:
 *     ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x1400D3D14 (-vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UnmapViewOfSectionFromFontDriverProcess(struct FILEVIEW *a1)
{
  _QWORD v1[4]; // [rsp+20h] [rbp-38h] BYREF
  int v2; // [rsp+40h] [rbp-18h]

  v1[0] = *((_QWORD *)a1 + 9);
  v1[1] = 0LL;
  v1[2] = *((_QWORD *)a1 + 2);
  v1[3] = 0LL;
  v2 = 5;
  Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v1);
}
