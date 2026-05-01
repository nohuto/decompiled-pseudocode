/*
 * XREFs of ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x180306AC0
 * Callers:
 *     ?Cloak@CTaskWindow@@UEAAJXZ @ 0x180306210 (-Cloak@CTaskWindow@@UEAAJXZ.c)
 *     ?Uncloak@CTaskWindow@@UEAAJXZ @ 0x180306A70 (-Uncloak@CTaskWindow@@UEAAJXZ.c)
 *     ?ValidateActivation@CTaskWindow@@UEAA_NXZ @ 0x180306A90 (-ValidateActivation@CTaskWindow@@UEAA_NXZ.c)
 * Callees:
 *     ?ResultFromLastError@@YAJXZ @ 0x1801C9A20 (-ResultFromLastError@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTaskWindow::_Invoke(__int64 a1, int a2)
{
  char v2; // r12
  signed int Error; // ebx
  int v7; // r15d
  const struct CTaskWindow::WINDOW_ACTION *const near *v8; // r14
  __int64 i; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h]
  _DWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  char v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]

  v2 = 0;
  if ( a2 )
  {
    if ( (unsigned int)(a2 - 1) >= 2 )
      return (unsigned int)-2147019873;
  }
  else
  {
    v2 = 1;
  }
  v7 = *(_DWORD *)(a1 + 52);
  if ( v7 != -1 )
  {
    v12 = *(_DWORD *)(a1 + 52);
    v8 = (&CTaskWindow::s_rgActions)[a2];
    Error = 0;
    v13 = *(_QWORD *)(a1 + 40);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= *((_DWORD *)v8 + 2) )
      {
        if ( *((_DWORD *)v8 + 6) )
        {
          v10 = *(_QWORD *)(a1 + 136);
          v14[0] = a2;
          v11 = 0LL;
          v14[1] = v7;
          v15 = v2;
          v16 = v10;
          v17 = a1 + 40;
          do
          {
            Error = (*(__int64 (__fastcall **)(_DWORD *))(*((_QWORD *)v8 + 2) + 8 * v11))(v14);
            if ( Error < 0 )
              break;
            v11 = (unsigned int)(v11 + 1);
          }
          while ( (unsigned int)v11 < *((_DWORD *)v8 + 6) );
        }
        return (unsigned int)Error;
      }
      if ( !(*((unsigned __int8 (__fastcall **)(int *))*v8 + i))(&v12) )
        break;
    }
    Error = ResultFromLastError();
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  return (unsigned int)-2147019873;
}
