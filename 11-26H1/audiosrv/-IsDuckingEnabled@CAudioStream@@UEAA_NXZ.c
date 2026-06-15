/*
 * XREFs of ?IsDuckingEnabled@CAudioStream@@UEAA_NXZ @ 0x18007A060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CAudioStream::IsDuckingEnabled(CAudioStream *this)
{
  return !_InterlockedCompareExchange((volatile signed __int32 *)this + 132, 1, 1)
      && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 120LL))(*((_QWORD *)this + 6)) == 0;
}
