/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14025CABC
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x14025E388 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x14004B14C (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x140095D9C (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1402DCAB8 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a3)
{
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  struct DMMVIDPNSOURCEMODESET *v4; // r9
  __int64 result; // rax

  NextMode = 0LL;
  v4 = (struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 6);
  if ( v4 != (struct DMMVIDPNSOURCEMODESET *const)((char *)a2 + 48) )
    NextMode = (struct DMMVIDPNSOURCEMODESET *)((char *)v4 - 8);
  while ( NextMode )
  {
    if ( DMMVIDPNSOURCEMODE::operator==(NextMode, (__int64)a3) )
    {
      DMMVIDPNSOURCEMODESET::PinMode(a2, *((_DWORD *)NextMode + 6));
      return 0LL;
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a2, NextMode);
  }
  WdLogSingleEntry2(7LL, this, a3);
  result = 3223192394LL;
  WdLogGlobalForLineNumber = 3419;
  return result;
}
