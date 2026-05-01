/*
 * XREFs of ?v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1804338A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z @ 0x180433620 (-SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804336EC (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyUwpWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int v4; // ebp
  __int64 v5; // rax
  _OWORD v6[3]; // [rsp+20h] [rbp-38h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  v4 = 0;
  if ( *(_DWORD *)(a1 + 616) )
  {
    if ( a2 == 1 )
    {
      *(_BYTE *)(a1 + 593) = 1;
    }
    else
    {
      LegacyUwpWindowWrapper::SendViewStateToWindow((LegacyUwpWindowWrapper *)(a1 - 8), 0);
      v5 = *(unsigned int *)(a1 + 616);
      v6[0] = _mm_load_si128((const __m128i *)&_xmm);
      v6[2] = _mm_load_si128((const __m128i *)&_xmm);
      v6[1] = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v4) = *((_DWORD *)v6 + 2 * v5 + 1) >= 2;
      LegacyUwpWindowWrapper::SendVisibilityToWindow(a1 - 8, v4);
    }
  }
  else
  {
    PostMessageW((HWND)*(int *)(a1 + 296), 0x10u, 0LL, 0LL);
  }
}
