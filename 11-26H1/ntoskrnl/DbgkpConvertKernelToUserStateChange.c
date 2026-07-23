/*
 * XREFs of DbgkpConvertKernelToUserStateChange @ 0x140AEC378
 * Callers:
 *     NtWaitForDebugEvent @ 0x140AEBFD0 (NtWaitForDebugEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgkpConvertKernelToUserStateChange(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // rdx
  int v4; // eax
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d

  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 40);
  v2 = *(_DWORD *)(a2 + 128);
  if ( !v2 )
  {
    v3 = a2 + 136;
    if ( *(_DWORD *)v3 == -2147483645 )
    {
      *(_DWORD *)a1 = 7;
    }
    else
    {
      v4 = 8;
      if ( *(_DWORD *)v3 != -2147483644 )
        v4 = 6;
      *(_DWORD *)a1 = v4;
    }
    *(_OWORD *)(a1 + 24) = *(_OWORD *)v3;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(v3 + 16);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(v3 + 32);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)(v3 + 48);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)(v3 + 64);
    *(_OWORD *)(a1 + 104) = *(_OWORD *)(v3 + 80);
    *(_OWORD *)(a1 + 120) = *(_OWORD *)(v3 + 96);
    *(_OWORD *)(a1 + 136) = *(_OWORD *)(v3 + 112);
    *(_OWORD *)(a1 + 152) = *(_OWORD *)(v3 + 128);
    *(_OWORD *)(a1 + 168) = *(_OWORD *)(v3 + 144);
    return;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    *(_DWORD *)a1 = 2;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 136);
    return;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_DWORD *)a1 = 3;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 152);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 168);
    *(_QWORD *)(a2 + 144) = 0LL;
    return;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_DWORD *)a1 = 4;
    goto LABEL_20;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *(_DWORD *)a1 = 5;
LABEL_20:
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 136);
    return;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      *(_DWORD *)a1 = 10;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 136);
    }
  }
  else
  {
    *(_DWORD *)a1 = 9;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 152);
    *(_QWORD *)(a2 + 136) = 0LL;
  }
}
