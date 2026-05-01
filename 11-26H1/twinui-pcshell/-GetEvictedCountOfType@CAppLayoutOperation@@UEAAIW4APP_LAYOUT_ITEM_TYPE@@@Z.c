/*
 * XREFs of ?GetEvictedCountOfType@CAppLayoutOperation@@UEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1806C3430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::GetEvictedCountOfType(__int64 a1, char a2)
{
  unsigned int v2; // esi
  _QWORD *v3; // r15
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v11[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]

  v2 = 0;
  v3 = (_QWORD *)(a1 + 24);
  if ( (a2 & 1) != 0 )
  {
    v6 = *v3;
    v11[0] = 0LL;
    v7 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 128LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v11);
    if ( v7(v6, v11) >= 0 )
    {
      memset_0(v12, 0, 0x40uLL);
      while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v11[0] + 24LL))(v11[0], 1LL, v12) >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 176LL))(*(_QWORD *)(a1 + 32), v13);
        v9 = v2 + 1;
        if ( v8 )
          v9 = v2;
        v2 = v9;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v11);
  }
  if ( (a2 & 4) != 0
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 80LL))(*v3, 4LL)
    && !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 80LL))(*(_QWORD *)(a1 + 32), 4LL) )
  {
    ++v2;
  }
  return v2;
}
