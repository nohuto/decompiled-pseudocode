/*
 * XREFs of ?FreezeAll@CDropFeedback@@UEAAXXZ @ 0x18051B170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDropFeedback::FreezeAll(CDropFeedback *this)
{
  __int64 v2; // rcx
  unsigned int i; // esi
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    v6 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 24LL))(v2, &v6);
    for ( i = 0; i < v6; ++i )
    {
      v4 = *((_QWORD *)this + 13);
      v7 = 0LL;
      v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v7);
      if ( v5(v4, i, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v7) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 176LL))(v7);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v7);
    }
  }
}
