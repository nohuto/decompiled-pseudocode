/*
 * XREFs of sub_14008C974 @ 0x14008C974
 * Callers:
 *     sub_14008DBB4 @ 0x14008DBB4 (sub_14008DBB4.c)
 *     sub_14008E30C @ 0x14008E30C (sub_14008E30C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008DCF4 @ 0x14008DCF4 (sub_14008DCF4.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14008C974(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // ebp

  if ( !a2 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v3 != 1094997074 )
    return 3221225485LL;
  if ( !v3 )
    return 3221225473LL;
  v5 = *(_QWORD *)(v3 + 5704);
  if ( v5 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    v6 = sub_1400143E0(64LL, 64LL, 1347314002LL, a1);
    if ( v6 )
    {
      v8 = sub_14008DCF4(*(PDEVICE_OBJECT *)(v3 + 32));
      if ( v8 < 0
        || (LOBYTE(v7) = 1, v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v6 + 32))(*(_QWORD *)(v6 + 8), v7), v8 < 0) )
      {
        ExFreePoolWithTag((PVOID)v6, 0x504E6152u);
        v6 = 0LL;
      }
      else
      {
        *a2 = v6;
      }
      *(_QWORD *)(v3 + 5704) = v6;
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
