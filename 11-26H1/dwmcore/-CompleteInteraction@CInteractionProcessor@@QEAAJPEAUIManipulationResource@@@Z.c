/*
 * XREFs of ?CompleteInteraction@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@@Z @ 0x1801C6D88
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x1801C6D60 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?CompleteInteraction@CInteractionRoot@@UEAAJXZ @ 0x180226F40 (-CompleteInteraction@CInteractionRoot@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CompleteInteraction(
        CInteractionProcessor *this,
        struct IManipulationResource *a2)
{
  unsigned int v2; // edi
  struct IManipulationResource *v3; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx

  *((_BYTE *)this + 808) &= 0xC0u;
  v2 = 0;
  *((_QWORD *)this + 98) = 0LL;
  v3 = a2;
  *((_DWORD *)this + 198) = 0;
  *((_QWORD *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 812) = 0LL;
  *(_QWORD *)((char *)this + 820) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  if ( a2 )
  {
    v7 = 3LL;
    if ( *((_DWORD *)this + 317) != 1 )
      v7 = 0LL;
    (*(void (__fastcall **)(struct IManipulationResource *, __int64))(*(_QWORD *)v3 + 56LL))(v3, v7);
  }
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 148) &= 0xF1u;
  *((_BYTE *)this + 308) &= 0xF1u;
  *((_DWORD *)this + 76) = 0;
  *((_BYTE *)this + 468) &= 0xF1u;
  *((_DWORD *)this + 116) = 0;
  *((_BYTE *)this + 628) &= 0xF1u;
  *((_DWORD *)this + 156) = 0;
  *((_WORD *)this + 624) = 0;
  *(_QWORD *)((char *)this + 1252) = 0LL;
  *((_DWORD *)this + 315) = 0;
  if ( !*(_QWORD *)this )
    return (unsigned int)-2147019873;
  (*(void (__fastcall **)(_QWORD, struct IManipulationResource *, struct IManipulationResource *))(**(_QWORD **)this
                                                                                                 + 32LL))(
    *(_QWORD *)this,
    a2,
    v3);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, 0LL);
  if ( (*((_BYTE *)this + 1264) & 8) == 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 80LL))(*((_QWORD *)this + 20), 0LL);
    if ( (*((_BYTE *)this + 1264) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 128LL))(*((_QWORD *)this + 20));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 32LL))(*((_QWORD *)this + 40));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 40) + 80LL))(*((_QWORD *)this + 40), 0LL);
    if ( (*((_BYTE *)this + 1264) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 128LL))(*((_QWORD *)this + 40));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 32LL))(*((_QWORD *)this + 60));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 60) + 80LL))(*((_QWORD *)this + 60), 0LL);
    if ( (*((_BYTE *)this + 1264) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 128LL))(*((_QWORD *)this + 60));
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v2;
}
