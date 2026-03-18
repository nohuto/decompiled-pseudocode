/*
 * XREFs of ?Release@CRegion@@UEBAJXZ @ 0x1401287B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x140043780 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall CRegion::Release(volatile signed __int32 *P, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int32 v5; // edi
  char **v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = _InterlockedDecrement(P + 2);
  if ( !v5 && P )
  {
    *(_QWORD *)P = &CRegion::`vftable';
    v7 = (char **)*((_QWORD *)P + 2);
    if ( v7 )
    {
      RGNCOREOBJ::vDeleteRGNCOREOBJ(&v7, a2, a3, a4);
      *((_QWORD *)P + 2) = 0LL;
    }
    *((_DWORD *)P + 3) = 0;
    ExFreePoolWithTag((PVOID)P, 0);
  }
  return v5;
}
