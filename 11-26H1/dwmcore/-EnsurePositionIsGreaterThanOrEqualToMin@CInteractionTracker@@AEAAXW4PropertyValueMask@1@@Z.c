/*
 * XREFs of ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x180139C10
 * Callers:
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18013992C (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(__int64 *a1, char a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]

  if ( !*((_DWORD *)a1 + 22) && (*((_BYTE *)a1 + 596) & 0x10) == 0 )
  {
    v2 = *((_DWORD *)a1 + 48);
    v5 = a1[23];
    v6 = v2;
    if ( (a2 & 1) != 0 )
      LODWORD(v5) = fmaxf(*((float *)a1 + 46), *((float *)a1 + 49));
    if ( (a2 & 2) != 0 )
      HIDWORD(v5) = fmaxf(*((float *)a1 + 47), *((float *)a1 + 50));
    v3 = *a1;
    v6 = 0;
    return (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v3 + 472))(a1, &v5, 0LL);
  }
  return result;
}
