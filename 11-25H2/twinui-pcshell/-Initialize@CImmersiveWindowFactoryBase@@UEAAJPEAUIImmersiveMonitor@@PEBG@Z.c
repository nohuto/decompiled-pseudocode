/*
 * XREFs of ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z @ 0x1806A2100
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x18001FF50 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::Initialize(
        CImmersiveWindowFactoryBase *this,
        struct IImmersiveMonitor *a2,
        const unsigned __int16 *a3)
{
  __int64 result; // rax

  result = _AllocString<CTCoAllocPolicy>((__int64)this, (__int64)a2, a3, (_QWORD *)this + 8);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, _QWORD))(*((_QWORD *)this - 9) + 72LL))(
             (char *)this - 72,
             a2,
             0LL);
  return result;
}
