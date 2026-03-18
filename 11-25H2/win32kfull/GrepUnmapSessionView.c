/*
 * XREFs of GrepUnmapSessionView @ 0x1403062A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E756C (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 */

void __fastcall GrepUnmapSessionView(__int64 a1)
{
  _QWORD v1[5]; // [rsp+20h] [rbp-38h] BYREF
  int v2; // [rsp+48h] [rbp-10h]

  v1[2] = a1;
  v1[0] = 0LL;
  v1[1] = 0LL;
  v1[3] = 0LL;
  v1[4] = 0LL;
  v2 = 3;
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v1);
}
