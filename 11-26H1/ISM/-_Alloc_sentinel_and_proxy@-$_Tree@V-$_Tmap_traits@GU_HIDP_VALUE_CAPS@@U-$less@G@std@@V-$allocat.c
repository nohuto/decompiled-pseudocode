/*
 * XREFs of ?_Alloc_sentinel_and_proxy@?$_Tree@V?$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18019F164
 * Callers:
 *     ??$_Construct@UHapticsTrigger@@@?$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAAEAUHapticsTrigger@@$$QEAU2@@Z @ 0x18019D4F8 (--$_Construct@UHapticsTrigger@@@-$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAAEAUHaptic.c)
 *     ??0HapticsTrigger@@QEAA@XZ @ 0x18019DD7C (--0HapticsTrigger@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short,_HIDP_VALUE_CAPS,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>,0>>::_Alloc_sentinel_and_proxy(
        _QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x68uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  *a1 = result;
  return result;
}
