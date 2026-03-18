/*
 * XREFs of ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1400C9278
 * Callers:
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1400C9210 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA09C (-DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::IsTouchpadActive(CPTPEngine *this)
{
  int v1; // eax
  unsigned int v2; // edx
  unsigned int i; // r8d

  v1 = *((_DWORD *)this + 770);
  if ( (v1 & 1) != 0 )
    return 1;
  if ( (v1 & 2) != 0 )
    return 1;
  if ( (v1 & 4) != 0 )
    return 1;
  v2 = 0;
  if ( *((_DWORD *)this + 764) )
  {
    return 1;
  }
  else
  {
    for ( i = 0; i < 6; ++i )
    {
      if ( (*((_DWORD *)this + 82 * i + 204) & 0x40000000) != 0 )
        return 1;
    }
  }
  return v2;
}
