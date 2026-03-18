/*
 * XREFs of ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18013C350
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ @ 0x18013B8B0 (-NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::CheckForOutOfBounds(CInteractionTracker *this, __int64 a2)
{
  unsigned int v3; // xmm1_4
  __int64 v4; // rax
  unsigned int v5; // xmm0_4
  void (__fastcall *v6)(CInteractionTracker *, unsigned __int64 *, _QWORD); // rax
  unsigned int v7; // xmm1_4
  __int64 v8; // rax
  unsigned int v9; // xmm0_4
  void (__fastcall *v10)(CInteractionTracker *, unsigned __int64 *, _QWORD); // rax
  unsigned __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]

  if ( !*((_DWORD *)this + 22) && (*((_BYTE *)this + 596) & 0x10) == 0 )
  {
    *(float *)&v3 = fmaxf(*((float *)this + 47), *((float *)this + 50));
    v4 = *(_QWORD *)this;
    v11 = *((_QWORD *)this + 23);
    *(float *)&v5 = fmaxf(*((float *)this + 46), *((float *)this + 49));
    v6 = *(void (__fastcall **)(CInteractionTracker *, unsigned __int64 *, _QWORD))(v4 + 472);
    v12 = 0;
    v11 = __PAIR64__(v3, v5);
    v6(this, &v11, 0LL);
  }
  if ( !*((_DWORD *)this + 22) )
  {
    if ( (*((_BYTE *)this + 596) & 0x10) == 0 )
    {
      *(float *)&v7 = fminf(*((float *)this + 47), *((float *)this + 53));
      v8 = *(_QWORD *)this;
      v11 = *((_QWORD *)this + 23);
      *(float *)&v9 = fminf(*((float *)this + 46), *((float *)this + 52));
      v10 = *(void (__fastcall **)(CInteractionTracker *, unsigned __int64 *, _QWORD))(v8 + 472);
      v12 = 0;
      v11 = __PAIR64__(v7, v9);
      v10(this, &v11, 0LL);
    }
    if ( !*((_DWORD *)this + 22) )
    {
      if ( (*((_BYTE *)this + 596) & 0x10) == 0 )
        (*(void (__fastcall **)(CInteractionTracker *, __int64, _QWORD))(*(_QWORD *)this + 496LL))(this, a2, 0LL);
      if ( !*((_DWORD *)this + 22) && (*((_BYTE *)this + 596) & 0x10) == 0 )
        (*(void (__fastcall **)(CInteractionTracker *, __int64, _QWORD))(*(_QWORD *)this + 496LL))(this, a2, 0LL);
    }
  }
}
