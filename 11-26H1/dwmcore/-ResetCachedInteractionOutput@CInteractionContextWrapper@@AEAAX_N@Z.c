/*
 * XREFs of ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1801AD450
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z @ 0x1801E1120 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@A.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionContextWrapper::ResetCachedInteractionOutput(CInteractionContextWrapper *this, char a2)
{
  *((_BYTE *)this + 80) &= ~1u;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 1065353216;
  if ( !a2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    *(_QWORD *)((char *)this + 44) = 0LL;
    *(_QWORD *)((char *)this + 52) = 0LL;
    *(_QWORD *)((char *)this + 60) = 0LL;
    *((_DWORD *)this + 17) = 0;
  }
  *((_BYTE *)this + 144) &= ~1u;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 1065353216;
  if ( !a2 )
  {
    *((_QWORD *)this + 11) = 0LL;
    *(_QWORD *)((char *)this + 108) = 0LL;
    *(_QWORD *)((char *)this + 116) = 0LL;
    *(_QWORD *)((char *)this + 124) = 0LL;
    *((_DWORD *)this + 33) = 0;
  }
  *((_BYTE *)this + 208) &= ~1u;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 1065353216;
  if ( !a2 )
  {
    *((_QWORD *)this + 19) = 0LL;
    *(_QWORD *)((char *)this + 172) = 0LL;
    *(_QWORD *)((char *)this + 180) = 0LL;
    *(_QWORD *)((char *)this + 188) = 0LL;
    *((_DWORD *)this + 49) = 0;
  }
}
