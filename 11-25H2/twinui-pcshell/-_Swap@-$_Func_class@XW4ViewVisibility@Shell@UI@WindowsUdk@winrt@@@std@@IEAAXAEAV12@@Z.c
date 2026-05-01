/*
 * XREFs of ?_Swap@?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@IEAAXAEAV12@@Z @ 0x1800BE744
 * Callers:
 *     ??4?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800BE6BC (--4-$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::_Swap(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rcx
  __int64 v5; // rax
  _BYTE *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _BYTE *v14; // rcx
  _BYTE *v15; // rdx
  _BYTE v16[56]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v17; // [rsp+58h] [rbp-20h]

  v4 = *(_BYTE **)(a1 + 56);
  if ( v4 != (_BYTE *)a1 )
  {
    v5 = *(_QWORD *)(a2 + 56);
    if ( v5 != a2 )
    {
      *(_QWORD *)(a1 + 56) = v5;
      *(_QWORD *)(a2 + 56) = v4;
      return;
    }
  }
  v6 = 0LL;
  v17 = 0LL;
  if ( v4 )
  {
    if ( v4 == (_BYTE *)a1 )
    {
      v7 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v4 + 8LL))(v4, v16);
      v9 = *(_QWORD *)(a1 + 56);
      v6 = (_BYTE *)v7;
      v17 = (_BYTE *)v7;
      if ( !v9 )
        goto LABEL_10;
      LOBYTE(v8) = v9 != a1;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v8, v7);
      v6 = v17;
    }
    else
    {
      v6 = v4;
      v17 = v4;
    }
    *(_QWORD *)(a1 + 56) = 0LL;
  }
LABEL_10:
  v10 = *(_QWORD *)(a2 + 56);
  if ( !v10 )
    goto LABEL_15;
  if ( v10 != a2 )
  {
    *(_QWORD *)(a1 + 56) = v10;
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, a1);
  v12 = *(_QWORD *)(a2 + 56);
  if ( v12 )
  {
    LOBYTE(v11) = v12 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
    v6 = v17;
LABEL_14:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_15;
  }
  v6 = v17;
LABEL_15:
  if ( v6 )
  {
    if ( v6 == v16 )
    {
      v13 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 8LL))(v6, a2);
      v14 = v17;
      *(_QWORD *)(a2 + 56) = v13;
      if ( v14 )
      {
        v15 = v16;
        LOBYTE(v15) = v14 != v16;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v14 + 32LL))(v14, v15);
      }
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v6;
    }
  }
}
