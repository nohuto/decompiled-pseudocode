/*
 * XREFs of ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x18007C0A0
 * Callers:
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180024D74 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x1800C6264 (-ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCButtonHoldHelper::ResetState(MPCButtonHoldHelper *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    *((_WORD *)this + 4) = 0;
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
}
