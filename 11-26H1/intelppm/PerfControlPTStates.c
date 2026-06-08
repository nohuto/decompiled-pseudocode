/*
 * XREFs of PerfControlPTStates @ 0x140002200
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChange @ 0x140002310 (InvokePTStateChange.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

void __fastcall PerfControlPTStates(__int64 a1, unsigned __int64 *a2, char a3, char a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // [rsp+50h] [rbp+8h]

  if ( !a4 )
  {
    v5 = *a2;
    v6 = *(_QWORD *)(a1 + 56);
    v7 = 32LL * (unsigned int)*a2;
    v14 = *a2;
    v8 = *(_QWORD *)(v6 + 56);
    v9 = *(unsigned __int8 *)(v7 + v8 + 25);
    if ( *(_DWORD *)(a1 + 40) == v9 )
      goto LABEL_3;
    if ( v9 == 1 )
    {
      if ( !*(_DWORD *)(v6 + 72) )
        goto LABEL_3;
      v11 = *(unsigned int *)(v6 + 68);
    }
    else
    {
      v13 = *(_DWORD *)(v6 + 68);
      if ( !v13 )
        goto LABEL_3;
      v11 = (unsigned int)(v13 - 1);
    }
    v12 = v8 + 32 * v11;
    if ( v12 )
    {
      if ( a3 )
      {
        InvokePTStateChange(v6, v12, HIDWORD(v5));
        goto LABEL_4;
      }
LABEL_7:
      *(_DWORD *)(a1 + 48) = v5;
      *(_DWORD *)(a1 + 40) = *(unsigned __int8 *)(v7 + v8 + 25);
      *(_DWORD *)(a1 + 44) = *(unsigned __int8 *)(v7 + v8 + 24);
      return;
    }
LABEL_3:
    if ( a3 )
    {
LABEL_4:
      if ( *(_BYTE *)(v7 + v8 + 25) == 1 )
      {
        v10 = *(_QWORD *)(v6 + 40);
      }
      else
      {
        v10 = *(_QWORD *)(v6 + 48);
        v6 += 8LL;
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v6)(
        v10,
        *(_QWORD *)(v7 + v8),
        *(_QWORD *)(v7 + v8 + 8),
        HIDWORD(v14));
      goto LABEL_7;
    }
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 40) = 0;
}
