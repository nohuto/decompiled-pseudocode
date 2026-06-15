/*
 * XREFs of ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180025660
 * Callers:
 *     ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18004A750 (-GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 */

void __fastcall ATL::Checked::memcpy_s(ATL::Checked *this, void *a2, const void *a3, void *a4)
{
  if ( a4 )
  {
    if ( !this )
      goto LABEL_8;
    if ( !a3 || a2 < a4 )
    {
      memset_0(this, 0, (size_t)a2);
      if ( a3 )
      {
        if ( a2 >= a4 )
          goto LABEL_10;
        *(_DWORD *)_o__errno(this, a2) = 34;
LABEL_9:
        invalid_parameter_noinfo();
LABEL_10:
        ATL::AtlThrowImpl(-2147024809);
      }
LABEL_8:
      *(_DWORD *)_o__errno(this, a2) = 22;
      goto LABEL_9;
    }
    memcpy_0(this, a3, (size_t)a4);
  }
}
