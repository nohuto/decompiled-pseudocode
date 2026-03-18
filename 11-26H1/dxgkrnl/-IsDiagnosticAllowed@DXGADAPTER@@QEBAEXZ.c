/*
 * XREFs of ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x140192BE0
 * Callers:
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x140430030 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x14006C8C0 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x14006CC34 (-IsCurrentConsoleSession@@YAEXZ.c)
 */

bool __fastcall DXGADAPTER::IsDiagnosticAllowed(DXGADAPTER *this)
{
  __int64 v1; // rbx
  int v2; // edi

  if ( *(_QWORD *)((char *)this + 4876) )
  {
    v1 = *((unsigned int *)this + 1221);
    v2 = *((_DWORD *)this + 1221);
  }
  else
  {
    v1 = 0x200000000LL;
    v2 = 0;
  }
  if ( IsCurrentProcessAdmin() )
    return 1;
  if ( v1 == 0x200000000LL )
    return IsCurrentConsoleSession();
  return (unsigned int)PsGetCurrentProcessSessionId() == v2;
}
