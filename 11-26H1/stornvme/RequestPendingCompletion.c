/*
 * XREFs of RequestPendingCompletion @ 0x1400095A0
 * Callers:
 *     NVMeHwInterrupt @ 0x140007B20 (NVMeHwInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeHwMSIInterrupt @ 0x140009320 (NVMeHwMSIInterrupt.c)
 * Callees:
 *     <none>
 */

bool __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rbx
  unsigned __int16 *v5; // rdx
  __int16 v6; // cx
  bool v7; // si
  unsigned __int16 v9; // r14
  __int16 i; // r15
  __int64 v11; // r10
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // r12
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 v23; // [rsp+68h] [rbp+10h]

  v2 = *(unsigned __int16 *)(a1 + 332);
  if ( a2 == 0xFFFF )
  {
    v4 = a1 + 544;
    v5 = (unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 16LL * *(unsigned __int16 *)(a1 + 714));
    if ( (v5[7] & 1) == *(_WORD *)(a1 + 716) )
    {
      v11 = *(_QWORD *)(a1 + 944);
      v7 = 0;
      v12 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          v7 = 0;
          if ( v12 >= v2 )
            break;
          v4 = v11 + 392LL * v12;
          v5 = (unsigned __int16 *)(*(_QWORD *)v4 + 16LL * *(unsigned __int16 *)(v4 + 170));
          if ( (v5[7] & 1) != *(_WORD *)(v4 + 172) )
            goto LABEL_17;
          ++v12;
        }
      }
      return v7;
    }
LABEL_17:
    v7 = 1;
    goto LABEL_8;
  }
  if ( a2 <= (unsigned __int16)v2 )
  {
    if ( a2 )
      v4 = 392LL * a2 + *(_QWORD *)(a1 + 944) - 392LL;
    else
      v4 = a1 + 544;
    v5 = (unsigned __int16 *)(*(_QWORD *)v4 + 16LL * *(unsigned __int16 *)(v4 + 170));
    v6 = v5[7] & 1;
    v7 = v6 != *(_WORD *)(v4 + 172);
    if ( v6 == *(_WORD *)(v4 + 172) )
      return v7;
LABEL_8:
    if ( (*(_DWORD *)(a1 + 108) & 2) != 0 )
    {
      v9 = *(_WORD *)(v4 + 170);
      for ( i = *(_WORD *)(v4 + 172); (v5[7] & 1) != i; v5 = (unsigned __int16 *)(*(_QWORD *)v4 + 16LL * v9) )
      {
        v13 = v5[5];
        v14 = v5[6];
        if ( *(_WORD *)(v4 + 168) && (*(_DWORD *)(a1 + 24) & 1) == 0 )
          break;
        if ( (_WORD)v13 )
        {
          v18 = *(_QWORD *)(a1 + 936);
          v15 = 326LL;
          v19 = 208 * v13;
          v16 = (_QWORD *)(v19 + v18 - 168);
          v17 = (__int64 *)(v19 + v18 - 176);
        }
        else
        {
          v15 = 324LL;
          v16 = (_QWORD *)(a1 + 376);
          v17 = (__int64 *)(a1 + 368);
        }
        v20 = v14;
        v21 = *v17;
        v23 = *(_WORD *)(v15 + a1);
        if ( *(_QWORD *)(32 * v14 + v21 + 8) && *v16 )
        {
          v22 = 0LL;
          StorPortExtendedFunction(47LL, a1, 0LL, &v22);
          *(_QWORD *)(*v16 + 16 * v20 + 8) = v22;
        }
        if ( v9 >= v23 - 1 )
        {
          v9 = 0;
          i = i != 1;
        }
        else
        {
          ++v9;
        }
      }
    }
    return v7;
  }
  return 0;
}
