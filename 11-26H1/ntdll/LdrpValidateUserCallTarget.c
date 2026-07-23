/*
 * XREFs of LdrpValidateUserCallTarget @ 0x180127470
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180077EF0 (RtlGuardRestoreContext.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpValidateUserCallTarget(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax

  v1 = *(_QWORD *)(LdrSystemDllInitBlock.CfgBitMap + 8 * (a1 >> 9));
  v2 = a1 >> 3;
  if ( (a1 & 0xF) != 0 )
  {
    v2 &= ~1uLL;
    if ( !_bittest64(&v1, v2) )
    {
LABEL_6:
      LdrpHandleInvalidUserCallTarget();
      return;
    }
LABEL_5:
    if ( _bittest64(&v1, v2 | 1) )
      return;
    goto LABEL_6;
  }
  if ( !_bittest64(&v1, v2) )
    goto LABEL_5;
}
