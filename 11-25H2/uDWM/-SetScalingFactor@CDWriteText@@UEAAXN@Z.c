/*
 * XREFs of ?SetScalingFactor@CDWriteText@@UEAAXN@Z @ 0x18007C580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDWriteText::SetScalingFactor(CDWriteText *this, double a2)
{
  if ( *((double *)this + 31) != a2 )
  {
    *((double *)this + 31) = a2;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 21) + 24LL))((char *)this - 168, 4096LL);
  }
}
