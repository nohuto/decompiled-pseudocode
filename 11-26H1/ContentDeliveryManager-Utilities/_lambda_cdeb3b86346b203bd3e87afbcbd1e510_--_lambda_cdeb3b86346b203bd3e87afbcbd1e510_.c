/*
 * XREFs of _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x180049EF0
 * Callers:
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_cdeb3b86346b203bd3e87afbcbd1e510___ @ 0x180048104 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_cdeb3b86346b203bd3e87afbc.c)
 * Callees:
 *     ??0?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x18004AED4 (--0-$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  *a1 = *a2;
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::ComPtr<ContentManagement::ContentManagementService>(
    a1 + 1,
    a2 + 1);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(v3 + 16);
  v4 = (_QWORD *)(v3 + 88);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_BYTE *)(v2 + 32) = 0;
  *(_BYTE *)(v3 + 32) = 1;
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_BYTE *)(v2 + 48) = 0;
  *(_BYTE *)(v3 + 48) = 1;
  *(_QWORD *)(v2 + 56) = *(_QWORD *)(v3 + 56);
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_BYTE *)(v2 + 64) = 0;
  *(_BYTE *)(v3 + 64) = 1;
  *(_QWORD *)(v2 + 72) = *(_QWORD *)(v3 + 72);
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_BYTE *)(v2 + 80) = 0;
  *(_BYTE *)(v3 + 80) = 1;
  *(_QWORD *)(v2 + 88) = 0LL;
  if ( v2 + 88 != v3 + 88 )
  {
    *(_QWORD *)(v2 + 88) = *v4;
    *v4 = 0LL;
  }
  v5 = (_QWORD *)(v3 + 96);
  *(_QWORD *)(v2 + 96) = 0LL;
  if ( v2 + 96 != v3 + 96 )
  {
    *(_QWORD *)(v2 + 96) = *v5;
    *v5 = 0LL;
  }
  return v2;
}
