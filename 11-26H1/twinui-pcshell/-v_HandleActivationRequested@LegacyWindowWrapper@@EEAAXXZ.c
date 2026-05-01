/*
 * XREFs of ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x18042D080
 * Callers:
 *     <none>
 * Callees:
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x18042CF5C (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyWindowWrapper::v_HandleActivationRequested(LegacyWindowWrapper *this)
{
  unsigned int v2; // edx
  __int64 v3; // rax
  __m128i si128; // xmm1
  _OWORD v5[3]; // [rsp+20h] [rbp-38h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  v2 = 0;
  if ( !*((_BYTE *)this + 585) )
  {
    v3 = *((unsigned int *)this + 156);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v5[0] = _mm_load_si128((const __m128i *)&_xmm);
    *((_BYTE *)this + 585) = 1;
    v5[2] = _mm_load_si128((const __m128i *)&_xmm);
    v5[1] = si128;
    LOBYTE(v2) = *((_DWORD *)v5 + 2 * v3 + 1) >= 2;
    LegacyWindowWrapper::SendVisibilityToWindow((__int64)this - 8, v2);
  }
}
