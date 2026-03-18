/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x1403D66C0
 * Callers:
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     RtlInitializeExtendedContext @ 0x1403D5E20 (RtlInitializeExtendedContext.c)
 *     RtlDispatchException @ 0x1403D5F30 (RtlDispatchException.c)
 *     RtlUnwind @ 0x1403D65D0 (RtlUnwind.c)
 *     KiInitializeUserApc @ 0x140446248 (KiInitializeUserApc.c)
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 *     PspWow64InitThread @ 0x1409EA95C (PspWow64InitThread.c)
 *     PspInitializeThunkContext @ 0x1409EB378 (PspInitializeThunkContext.c)
 *     NtCreateThreadEx @ 0x140A008A0 (NtCreateThreadEx.c)
 *     PspWow64GetContextThread @ 0x140A214E8 (PspWow64GetContextThread.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x140B796B0 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x1403D69D0 (RtlpGetEntireXStateAreaLength.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  size_t v4; // rbp
  _DWORD *v9; // rbx
  int v10; // r11d
  bool v11; // cl
  char v12; // si
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  int v16; // ecx
  _DWORD *v17; // rcx
  int v18; // edi
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rdi
  __int64 v22; // r14

  LODWORD(v4) = 0;
  v9 = 0LL;
  v10 = a2 & 0x10000;
  if ( ((a2 & 0x10000) == 0 || (a2 & 0x27FEFF80) != 0)
    && (a2 & 0x7FFFF20) != 0x100000
    && ((a2 & 0x200000) == 0 || (a2 & 0x7DFFFF0) != 0)
    && (a2 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v11 = 0;
  v12 = 1;
  if ( (a2 & 0x400020) != 0x400020 )
    v11 = (a2 & 0x10040) != 65600 && (a2 & 0x100040) != 1048640;
  if ( !v11 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v12 = 3;
  }
  if ( (a2 & 0x100080) == 0x100080 )
  {
    if ( !(_BYTE)KiKernelCetEnabled )
      return 3221225659LL;
    v12 |= 4u;
  }
  v14 = a2 & 0x100000;
  if ( v10 )
  {
    v15 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = v15 + 179;
LABEL_27:
    *v15 = a2;
    goto LABEL_15;
  }
  if ( (_DWORD)v14 )
  {
    v15 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v15[12] = a2;
    v9 = v15 + 308;
LABEL_15:
    v9[3] = (_DWORD)v9 - (_DWORD)v15;
    goto LABEL_16;
  }
  if ( (a2 & 0x200000) != 0 )
  {
    v15 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v9 = v15 + 104;
    *v15 = a2;
    goto LABEL_15;
  }
  if ( (a2 & 0x400000) != 0 )
  {
    v15 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = v15 + 228;
    goto LABEL_27;
  }
LABEL_16:
  v16 = v9[3];
  v9[2] = -v16;
  *v9 = -v16;
  v9[1] = v16 + 32;
  if ( v10 && (a2 & 0x10020) != 0x10020 )
    v9[3] = 204;
  v17 = v9 + 8;
  if ( (v12 & 2) != 0 )
  {
    v21 = ((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v22 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & a4;
      if ( v10 )
      {
        a4 = v22 & 0x40000000000001FFLL;
      }
      else if ( (_DWORD)v14 )
      {
        a4 = v22 & 0x4000000000060DFFLL;
      }
      else if ( (a2 & 0x400000) != 0 )
      {
        a4 = v22 & 0x3C;
      }
      else
      {
        a4 = 0LL;
      }
    }
    v4 = (unsigned int)RtlpGetEntireXStateAreaLength(a4, v14, 0xFFFFF780000003D8uLL) - 512;
    memset_0((void *)(((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL), 0, v4);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4 | 0x8000000000000000uLL;
    v17 = (_DWORD *)(v21 + v4);
    v9[1] = v4 + v21 - *v9 - (_DWORD)v9;
    v18 = v21 - (_DWORD)v9;
  }
  else
  {
    v18 = 33;
  }
  v9[4] = v18;
  v9[5] = v4;
  if ( (v12 & 4) != 0 )
  {
    v19 = ((unsigned __int64)v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v19 = 0LL;
    *(_QWORD *)(v19 + 16) = 0LL;
    v20 = v19 - (_DWORD)v9;
    LODWORD(v19) = v19 - *v9 - (_DWORD)v9;
    v9[6] = v20;
    v9[7] = 24;
    v9[1] = v19 + 24;
  }
  *a3 = v9;
  return 0LL;
}
