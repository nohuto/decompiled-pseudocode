/*
 * XREFs of ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1801EF680
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_32e1af1a445ebcc77aa1b0711fa787a6_::_lambda_32e1af1a445ebcc77aa1b0711fa787a6_ @ 0x180409B3C (_lambda_32e1af1a445ebcc77aa1b0711fa787a6_--_lambda_32e1af1a445ebcc77aa1b0711fa787a6_.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x18040BF6C (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::IsApplicationVisibleInContactPanel(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        int *a3)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v5; // rax
  PeoplePaneViewManager *v6; // rcx
  __int64 *Ptr; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rax
  HWND v10; // rdx
  unsigned __int16 *v12[2]; // [rsp+20h] [rbp-40h]
  _DWORD **v13; // [rsp+30h] [rbp-30h]
  _BYTE v14[32]; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+80h] [rbp+20h] BYREF
  const unsigned __int16 *v16; // [rsp+88h] [rbp+28h] BYREF
  int *v17; // [rsp+90h] [rbp+30h] BYREF

  v17 = a3;
  v16 = a2;
  v3 = this + 5;
  AcquireSRWLockShared(this + 5);
  v5 = lambda_32e1af1a445ebcc77aa1b0711fa787a6_::_lambda_32e1af1a445ebcc77aa1b0711fa787a6_(v14, &this[-11], &v16, &v17);
  Ptr = (__int64 *)this[6].Ptr;
  v8 = (__int64 *)this[7].Ptr;
  *(_OWORD *)v12 = *(_OWORD *)v5;
  v13 = *(_DWORD ***)(v5 + 16);
  while ( Ptr != v8 )
  {
    v9 = *Ptr;
    v15 = 0;
    v10 = *(HWND *)(v9 + 48);
    if ( v10 && (int)PeoplePaneViewManager::IsWindowVisibleInContactPanel(v6, v10, v12[1], &v15) >= 0 && v15 )
    {
      **v13 = 1;
      break;
    }
    Ptr += 2;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
