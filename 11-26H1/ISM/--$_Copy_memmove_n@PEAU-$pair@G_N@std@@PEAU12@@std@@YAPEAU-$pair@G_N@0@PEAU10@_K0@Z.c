/*
 * XREFs of ??$_Copy_memmove_n@PEAU?$pair@G_N@std@@PEAU12@@std@@YAPEAU?$pair@G_N@0@PEAU10@_K0@Z @ 0x18018186C
 * Callers:
 *     ??$_Assign_counted_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@_K@Z @ 0x18018179C (--$_Assign_counted_range@PEAU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N.c)
 *     ??$_Assign_counted_range@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEAW4_Button@@_K@Z @ 0x1801A98B8 (--$_Assign_counted_range@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@.c)
 * Callees:
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<std::pair<unsigned short,bool> *,std::pair<unsigned short,bool> *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = 4 * a2;
  memmove_0(a3, Src, 4 * a2);
  return (__int64)a3 + v4;
}
