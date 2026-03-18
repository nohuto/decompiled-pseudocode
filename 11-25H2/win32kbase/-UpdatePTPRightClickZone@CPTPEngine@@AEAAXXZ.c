/*
 * XREFs of ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXXZ @ 0x1401293DC
 * Callers:
 *     ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x140129210 (-ProcessEnvironment@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::UpdatePTPRightClickZone(CPTPEngine *this)
{
  int v1; // edx
  __int128 v2; // [rsp+0h] [rbp-18h]

  v1 = *((_DWORD *)this + 7);
  v2 = *((_OWORD *)this + 5);
  *(_OWORD *)((char *)this + 3016) = v2;
  if ( v1 )
  {
    *((_DWORD *)this + 754) = 0;
    *((_DWORD *)this + 756) = DWORD2(v2) - v2;
  }
  *((_DWORD *)this + 770) = (v1 << 16) ^ (*((_DWORD *)this + 770) ^ (v1 << 16)) & 0xFFFEFFFF;
}
