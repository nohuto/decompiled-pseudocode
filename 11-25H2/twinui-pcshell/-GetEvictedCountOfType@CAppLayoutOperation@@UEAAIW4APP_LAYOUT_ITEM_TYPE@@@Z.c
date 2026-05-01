/*
 * XREFs of ?GetEvictedCountOfType@CAppLayoutOperation@@UEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x18069B5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::GetEvictedCountOfType(__int64 a1, char a2)
{
  unsigned int v2; // esi
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v10[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h]

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v10[0] = 0LL;
    v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 128LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v10);
    if ( v6(v5, v10) >= 0 )
    {
      memset_0(v11, 0, 0x40uLL);
      while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v10[0] + 24LL))(v10[0], 1LL, v11) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 176LL))(*(_QWORD *)(a1 + 32), v12);
        v8 = v2 + 1;
        if ( v7 )
          v8 = v2;
        v2 = v8;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v10);
  }
  if ( (a2 & 4) != 0
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 80LL))(*(_QWORD *)(a1 + 24), 4LL)
    && !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 80LL))(*(_QWORD *)(a1 + 32), 4LL) )
  {
    ++v2;
  }
  return v2;
}
