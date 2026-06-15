/*
 * XREFs of sub_1400398CC @ 0x1400398CC
 * Callers:
 *     sub_140039890 @ 0x140039890 (sub_140039890.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140039950 @ 0x140039950 (sub_140039950.c)
 */

int __fastcall sub_1400398CC(__int64 a1)
{
  bool v1; // zf
  __int64 (__fastcall **v2)(); // rax
  DWORD v4; // ecx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_BYTE *)(a1 + 24) == 0;
  v2 = off_1400BA830;
  *(_QWORD *)a1 = off_1400BA830;
  if ( !v1 )
  {
    LODWORD(v2) = sub_140039950();
    if ( (int)v2 < 0 )
      LODWORD(v2) = sub_140007934(
                      (int)retaddr,
                      299,
                      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
                      (int)v2);
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 )
  {
    LODWORD(v2) = RtwqUnlockWorkQueue(v4);
    if ( (int)v2 < 0 )
      LODWORD(v2) = sub_140007934(
                      (int)retaddr,
                      304,
                      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
                      (int)v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return (int)v2;
}
