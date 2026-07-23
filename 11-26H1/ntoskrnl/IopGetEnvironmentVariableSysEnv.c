/*
 * XREFs of IopGetEnvironmentVariableSysEnv @ 0x14079D6B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14079D9E8 (IopIssueSystemEnvironmentRequest.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetEnvironmentVariableSysEnv(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        __int128 *a4,
        void *a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v9; // rax
  unsigned int v10; // edi
  ULONG InputBufferLength; // ebp
  __int64 Pool2; // rax
  _DWORD *InputBuffer; // rsi
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  ULONG v16; // ebx
  _DWORD *v17; // rdi
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v22; // [rsp+50h] [rbp-28h] BYREF

  LODWORD(v22) = 0;
  v9 = -1LL;
  do
    ++v9;
  while ( a3[v9] );
  v10 = 2 * v9 + 2;
  InputBufferLength = 2 * v9 + 22;
  Pool2 = ExAllocatePool2(0x100uLL);
  InputBuffer = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 20), a3, v10);
    v15 = *a4;
    InputBuffer[4] = v10;
    *(_OWORD *)InputBuffer = v15;
    v16 = *a6 + 8;
    v17 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( !v17 )
    {
      v14 = -1073741670;
LABEL_17:
      ExFreePoolWithTag(InputBuffer, 0);
      return v14;
    }
    v18 = IopIssueSystemEnvironmentRequest(0x520004u, InputBuffer, InputBufferLength, v17, v16, (__int64)&v22);
    v14 = v18;
    if ( v18 < 0 )
    {
      if ( v18 != -1073741789 )
      {
LABEL_16:
        ExFreePoolWithTag(v17, 0);
        goto LABEL_17;
      }
      v20 = v22 - 8;
    }
    else
    {
      if ( a7 )
        *a7 = *v17;
      v19 = *a6;
      if ( *a6 >= v17[1] )
        v19 = v17[1];
      memmove(a5, v17 + 2, v19);
      v20 = v17[1];
    }
    *a6 = v20;
    goto LABEL_16;
  }
  return (unsigned int)-1073741670;
}
