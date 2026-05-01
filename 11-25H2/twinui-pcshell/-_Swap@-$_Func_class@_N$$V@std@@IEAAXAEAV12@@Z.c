/*
 * XREFs of ?_Swap@?$_Func_class@_N$$V@std@@IEAAXAEAV12@@Z @ 0x1800FBB48
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800FB944 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<bool,>::_Swap(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rcx
  _BYTE *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE *v13; // rcx
  _BYTE *v14; // rdx
  __int64 v15; // rax
  _BYTE v16[56]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v17; // [rsp+58h] [rbp-20h]

  v4 = *(_BYTE **)(a1 + 56);
  if ( v4 != (_BYTE *)a1 )
  {
    v15 = *(_QWORD *)(a2 + 56);
    if ( v15 != a2 )
    {
      *(_QWORD *)(a1 + 56) = v15;
      *(_QWORD *)(a2 + 56) = v4;
      return;
    }
  }
  v5 = 0LL;
  v17 = 0LL;
  if ( v4 )
  {
    if ( v4 == (_BYTE *)a1 )
    {
      v6 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v4 + 8LL))(v4, v16);
      v8 = *(_QWORD *)(a1 + 56);
      v5 = (_BYTE *)v6;
      v17 = (_BYTE *)v6;
      if ( !v8 )
        goto LABEL_7;
      LOBYTE(v7) = v8 != a1;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7, v6);
      v5 = v17;
    }
    else
    {
      v5 = v4;
      v17 = v4;
    }
    *(_QWORD *)(a1 + 56) = 0LL;
  }
LABEL_7:
  v9 = *(_QWORD *)(a2 + 56);
  if ( !v9 )
    goto LABEL_12;
  if ( v9 != a2 )
  {
    *(_QWORD *)(a1 + 56) = v9;
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, a1);
  v11 = *(_QWORD *)(a2 + 56);
  if ( v11 )
  {
    LOBYTE(v10) = v11 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v10);
    v5 = v17;
LABEL_11:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_12;
  }
  v5 = v17;
LABEL_12:
  if ( v5 )
  {
    if ( v5 == v16 )
    {
      v12 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v5 + 8LL))(v5, a2);
      v13 = v17;
      *(_QWORD *)(a2 + 56) = v12;
      if ( v13 )
      {
        v14 = v16;
        LOBYTE(v14) = v13 != v16;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v13 + 32LL))(v13, v14);
      }
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v5;
    }
  }
}
