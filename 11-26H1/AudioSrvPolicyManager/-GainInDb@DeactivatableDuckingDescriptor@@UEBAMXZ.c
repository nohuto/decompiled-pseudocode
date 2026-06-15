/*
 * XREFs of ?GainInDb@DeactivatableDuckingDescriptor@@UEBAMXZ @ 0x180028720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall DeactivatableDuckingDescriptor::GainInDb(DeactivatableDuckingDescriptor *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3)) )
    return *(float *)(*((_QWORD *)this + 1) + 8LL);
  else
    return 0.0;
}
