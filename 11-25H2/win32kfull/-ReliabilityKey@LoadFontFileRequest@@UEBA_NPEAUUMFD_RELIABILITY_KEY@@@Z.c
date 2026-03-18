/*
 * XREFs of ?ReliabilityKey@LoadFontFileRequest@@UEBA_NPEAUUMFD_RELIABILITY_KEY@@@Z @ 0x140340F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall LoadFontFileRequest::ReliabilityKey(LoadFontFileRequest *this, struct UMFD_RELIABILITY_KEY *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 68);
  return 1;
}
