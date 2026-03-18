/*
 * XREFs of ?SetFullRegion@CRegion@@UEAAXXZ @ 0x14014B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x140043780 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 */

void __fastcall CRegion::SetFullRegion(CRegion *this, __int64 a2, __int64 a3, __int64 a4)
{
  char **v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = (char **)*((_QWORD *)this + 2);
  if ( v5 )
  {
    RGNCOREOBJ::vDeleteRGNCOREOBJ(&v5, a2, a3, a4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 1;
}
