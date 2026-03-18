/*
 * XREFs of ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D9E1C
 * Callers:
 *     TdrBugcheckOnTimeout @ 0x14018EA50 (TdrBugcheckOnTimeout.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9E70 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

void __fastcall TdrUpdateDbgBuffer(struct _TDR_RECOVERY_CONTEXT *a1)
{
  _DWORD *v2; // rcx

  if ( *((_QWORD *)a1 + 357) )
  {
    if ( *((_QWORD *)a1 + 358) )
    {
      v2 = (_DWORD *)*((_QWORD *)a1 + 361);
      if ( v2 )
      {
        if ( *v2 == 1380209782 && v2[682] == 1380209782 )
          memmove(v2, (char *)a1 + 112, 0xAB0uLL);
      }
    }
  }
}
