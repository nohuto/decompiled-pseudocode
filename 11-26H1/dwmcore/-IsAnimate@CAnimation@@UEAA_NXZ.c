/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x180176780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CAnimation::IsAnimate(CAnimation *this)
{
  return !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 9) + 200LL))((char *)this - 72)
      && *((_DWORD *)this + 8)
      && !*((_BYTE *)this + 222)
      && (!*((_BYTE *)this + 224) || !*((_BYTE *)this + 220));
}
