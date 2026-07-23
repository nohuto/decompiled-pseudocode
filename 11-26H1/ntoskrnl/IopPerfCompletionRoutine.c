/*
 * XREFs of IopPerfCompletionRoutine @ 0x1404E00E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopPerfCompletionRoutine(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  char v6; // r15
  char v7; // r14
  __int64 v8; // r9
  unsigned int v9; // ebp
  __int64 v11; // rbx
  char v12; // al
  _QWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+40h] [rbp-48h]
  _QWORD v15[2]; // [rsp+48h] [rbp-40h] BYREF

  v3 = *a3;
  v6 = *(_BYTE *)(a2 + 67);
  v7 = *(_BYTE *)(a2 + 66) + 1;
  *(_BYTE *)(v3 + 3) = *((_BYTE *)a3 + 28) | *(_BYTE *)(*a3 + 3) & 2;
  v8 = a3[2];
  *(_QWORD *)(v3 + 56) = v8;
  *(_QWORD *)(v3 + 64) = a3[1];
  if ( v8 )
  {
    v14 = *((_DWORD *)a3 + 6);
    v13[0] = v8;
    v13[1] = a2;
    v9 = guard_dispatch_icall_no_overrides(a1, a2);
    v15[1] = 20LL;
    v15[0] = v13;
    EtwTraceKernelEvent((int)v15, 1, 0x20000010u, 293, 5249026);
    if ( v9 == -1073741802 )
      return v9;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) && *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66) )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v9 = 0;
  }
  if ( v6 != v7 )
  {
    v11 = v3 + 72;
    a3[2] = 0LL;
    a3[1] = *(_QWORD *)(v11 + 64);
    *a3 = v11;
    *((_BYTE *)a3 + 28) = *(_BYTE *)(v11 + 3);
    v12 = *(_BYTE *)(v11 + 3);
    if ( *(int *)(a2 + 48) < 0 )
    {
      if ( v12 < 0 )
        goto LABEL_8;
    }
    else if ( (v12 & 0x40) != 0 )
    {
      goto LABEL_8;
    }
    if ( !*(_BYTE *)(a2 + 68) || (v12 & 0x20) == 0 )
    {
      *(_BYTE *)(v11 + 3) = v12 | 0xC0;
      goto LABEL_9;
    }
LABEL_8:
    a3[2] = *(_QWORD *)(v11 + 56);
    a3[1] = *(_QWORD *)(v11 + 64);
LABEL_9:
    *(_QWORD *)(v11 + 64) = a3;
    *(_QWORD *)(v11 + 56) = IopPerfCompletionRoutine;
  }
  return v9;
}
