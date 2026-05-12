/*
 * XREFs of sub_140088348 @ 0x140088348
 * Callers:
 *     sub_140087B50 @ 0x140087B50 (sub_140087B50.c)
 *     sub_140088A30 @ 0x140088A30 (sub_140088A30.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008DCF4 @ 0x14008DCF4 (sub_14008DCF4.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140088348(__int64 a1, __int64 *a2)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // ebp
  __int64 v10; // rax

  if ( !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    return 3221225473LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 576) + 144LL);
  if ( v6 )
  {
    *a2 = v6;
    return 0LL;
  }
  else
  {
    v7 = sub_1400143E0(64LL, 64LL, 1347314002LL, a1);
    if ( v7 )
    {
      v9 = sub_14008DCF4(*(PDEVICE_OBJECT *)(v5 + 32));
      if ( v9 < 0
        || (LOBYTE(v8) = 1, v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v7 + 32))(*(_QWORD *)(v7 + 8), v8), v9 < 0) )
      {
        ExFreePoolWithTag((PVOID)v7, 0x504E6152u);
        *(_QWORD *)(*(_QWORD *)(v5 + 576) + 144LL) = 0LL;
      }
      else
      {
        v10 = *(_QWORD *)(v5 + 576);
        *a2 = v7;
        *(_QWORD *)(v10 + 144) = v7;
      }
      return (unsigned int)v9;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
