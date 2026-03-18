/*
 * XREFs of DpiInitializeBlockList @ 0x14023BDD8
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiDestroyBlockList @ 0x14023BD88 (DpiDestroyBlockList.c)
 *     DxgkInitializeBlockList @ 0x14023BE9C (DxgkInitializeBlockList.c)
 */

__int64 __fastcall DpiInitializeBlockList(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  int v4; // edi
  _QWORD v6[2]; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+30h] [rbp-20h]
  int v8; // [rsp+34h] [rbp-1Ch]
  __int64 v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+44h] [rbp-Ch]
  int v12; // [rsp+4Ch] [rbp-4h]
  int v13; // [rsp+70h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v3 + 28) < 0xB001u )
    return 0LL;
  v6[0] = 29LL;
  v8 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = *(_DWORD *)(v1 + 2748);
  v6[1] = &v13;
  v7 = 4;
  v10 = 4;
  v9 = v1 + 5844;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(v3 + 272))(*(_QWORD *)(v1 + 48), v6);
  if ( v4 < 0 )
    return 0LL;
  if ( (int)DxgkInitializeBlockList(a1, *(unsigned int *)(v1 + 5844), 0LL) < 0 )
    DpiDestroyBlockList(v1);
  return (unsigned int)v4;
}
