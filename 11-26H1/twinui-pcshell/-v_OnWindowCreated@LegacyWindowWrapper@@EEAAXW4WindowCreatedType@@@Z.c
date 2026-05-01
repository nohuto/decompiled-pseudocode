/*
 * XREFs of ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18042D110
 * Callers:
 *     <none>
 * Callees:
 *     ?SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z @ 0x18042CE90 (-SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x18042CF5C (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall LegacyWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int result; // eax
  unsigned int v5; // ebp
  __int64 v6; // rax
  _OWORD v7[3]; // [rsp+20h] [rbp-38h]

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 624) )
    return PostMessageW((HWND)*(int *)(a1 + 296), 0x10u, 0LL, 0LL);
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 585) = 1;
  }
  else
  {
    LegacyWindowWrapper::SendViewStateToWindow((LegacyWindowWrapper *)(a1 - 8), 0);
    v6 = *(unsigned int *)(a1 + 624);
    v7[0] = _mm_load_si128((const __m128i *)&_xmm);
    v7[2] = _mm_load_si128((const __m128i *)&_xmm);
    v7[1] = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v5) = *((_DWORD *)v7 + 2 * v6 + 1) >= 2;
    return LegacyWindowWrapper::SendVisibilityToWindow(a1 - 8, v5);
  }
  return result;
}
