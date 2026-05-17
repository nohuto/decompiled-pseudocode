/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x1800B4540
 * Callers:
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext @ 0x1800B3F80 (RtlInitializeExtendedContext.c)
 *     RtlUnwind @ 0x1800B43C0 (RtlUnwind.c)
 * Callees:
 *     RtlpValidateContextFlags2 @ 0x1800B4AD0 (RtlpValidateContextFlags2.c)
 *     RtlpGetEntireXStateAreaLength2 @ 0x1800B4BA4 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B4C00 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, unsigned int a2, _QWORD *a3, unsigned __int64 a4)
{
  size_t v7; // r14
  _DWORD *v9; // rbx
  __int64 result; // rax
  _DWORD *v11; // rcx
  int v12; // ecx
  char v13; // r15
  _DWORD *v14; // rcx
  int v15; // esi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  int v18; // eax
  _DWORD v19[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v7) = 0;
  v19[0] = 0;
  v9 = 0LL;
  result = RtlpValidateContextFlags2(a2, v19, 2147353560LL);
  if ( (int)result < 0 )
    return result;
  if ( (a2 & 0x10000) != 0 )
  {
    v11 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = v11 + 179;
LABEL_4:
    *v11 = a2;
LABEL_5:
    v9[3] = (_DWORD)v9 - (_DWORD)v11;
    goto LABEL_6;
  }
  if ( (a2 & 0x100000) != 0 )
  {
    v11 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v11[12] = a2;
    v9 = v11 + 308;
    goto LABEL_5;
  }
  if ( (a2 & 0x200000) != 0 )
  {
    v11 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v9 = v11 + 104;
    goto LABEL_4;
  }
  if ( (a2 & 0x400000) != 0 )
  {
    v11 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = v11 + 228;
    goto LABEL_4;
  }
LABEL_6:
  v12 = v9[3];
  v9[2] = -v12;
  *v9 = -v12;
  v9[1] = v12 + 32;
  if ( (a2 & 0x10000) != 0 && (a2 & 0x10020) != 0x10020 )
    v9[3] = 204;
  v13 = v19[0];
  v14 = v9 + 8;
  if ( (v19[0] & 2) != 0 )
  {
    v16 = ((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v20 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL) & a4;
      RtlpRemoveArchDisallowedXStateFeatures(a2, &v20);
      a4 = v20;
    }
    v7 = (unsigned int)RtlpGetEntireXStateAreaLength2(a4, 2147353560LL) - 512;
    memset_thunk_772440563353939046((void *)(((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL), 0, v7);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4 | 0x8000000000000000uLL;
    v14 = (_DWORD *)(v7 + v16);
    v9[1] = v7 + v16 - *v9 - (_DWORD)v9;
    v15 = v16 - (_DWORD)v9;
  }
  else
  {
    v15 = 33;
  }
  v9[4] = v15;
  v9[5] = v7;
  if ( (v13 & 4) != 0 )
  {
    v17 = ((unsigned __int64)v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 16) = 0LL;
    v18 = v17 - (_DWORD)v9;
    LODWORD(v17) = v17 - *v9 - (_DWORD)v9;
    v9[6] = v18;
    v9[7] = 24;
    v9[1] = v17 + 24;
  }
  *a3 = v9;
  return 0LL;
}
