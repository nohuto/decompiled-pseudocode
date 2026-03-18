/*
 * XREFs of ?ApplyPositionShift@CInteractionTracker2@@AEAAXW4ScrollAxis@@M@Z @ 0x180271C30
 * Callers:
 *     ?ProcessApplyPositionShift@CInteractionTracker2@@AEAAXXZ @ 0x180274888 (-ProcessApplyPositionShift@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::ApplyPositionShift(__int64 a1, int a2, float a3)
{
  int v4; // ecx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 88);
  if ( v4 )
  {
    if ( (unsigned int)(v4 - 1) <= 1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1) )
    {
      if ( a2 )
      {
        if ( a2 != 1 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        v6 = *(_QWORD *)(a1 + 664);
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 656);
      }
      *(float *)(v6 + 536) = a3 + *(float *)(v6 + 536);
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 432);
    v8 = *(_QWORD *)(a1 + 424);
    v9 = v7;
    if ( a2 )
      *((float *)&v8 + 1) = *((float *)&v8 + 1) + a3;
    else
      *(float *)&v8 = *(float *)&v8 + a3;
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 472LL))(a1, &v8, 0LL);
  }
}
