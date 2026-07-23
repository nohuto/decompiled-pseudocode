/*
 * XREFs of MmAreMdlPagesCached @ 0x140449210
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020F10C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmAreMdlPagesCached(_DWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = a1 + 12;
  do
  {
    if ( *v1 > (unsigned __int64)qword_140E2D920
      || (*(_QWORD *)(48LL * *v1 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0
      || (*(_DWORD *)(48LL * *v1 - 0x21FFFFFFFFE0LL) & 0xC00000) != 0x400000 )
    {
      return 0LL;
    }
    ++v1;
  }
  while ( v1 < (_QWORD *)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                           + 12] );
  return 1LL;
}
