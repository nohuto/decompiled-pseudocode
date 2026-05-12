/*
 * XREFs of sub_140010960 @ 0x140010960
 * Callers:
 *     sub_140010540 @ 0x140010540 (sub_140010540.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 * Callees:
 *     sub_140088288 @ 0x140088288 (sub_140088288.c)
 */

char __fastcall sub_140010960(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v4; // rdx
  int v6; // ebx
  __int64 v7; // r8
  unsigned int v8; // ecx
  _DWORD *v9; // rax
  __int64 v10; // rax
  int ***v11; // rbp
  int **v12; // rax
  int *v13; // r9
  int v14; // ecx
  int v15; // edx
  bool v16; // zf
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v4 = *a2;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 64LL);
  if ( v4 && *(_WORD *)v4 == 1 && *(_DWORD *)(v4 + 4) == 4 )
  {
    *(_WORD *)(v4 + 2) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 56LL);
    *(_BYTE *)(v4 + 8) = *(_BYTE *)(v7 + 104);
    *(_BYTE *)(v4 + 9) = *(_BYTE *)(v7 + 105);
    *(_BYTE *)(v4 + 10) = *(_BYTE *)(v7 + 106);
  }
  v8 = a2[7] & 0xFFFFFFEF | (8 * (*(_DWORD *)(a1 + 16) & 2));
  *((_DWORD *)a2 + 5) = 0;
  *((_DWORD *)a2 + 14) = v8;
  a2[3] = a1 + 120;
  *((_DWORD *)a2 + 12) = v6 & 0x7FFFFFFF;
  v9 = *(_DWORD **)(v7 + 24);
  if ( *v9 == 1094997074 )
  {
    v10 = (__int64)(v9 + 154);
  }
  else if ( *v9 == 1314275652 )
  {
    v10 = (__int64)(v9 + 102);
  }
  else
  {
    v10 = 240LL;
  }
  v11 = *(int ****)v10;
  ProcNumber = 0;
  if ( KeGetProcessorNumberFromIndex(v6 & 0x7FFFFFFF, &ProcNumber) >= 0 )
  {
    v12 = *v11;
    if ( *v11 )
    {
      v13 = *v12;
      if ( *v12 )
      {
        v14 = *v13;
        if ( ((_BYTE)v12[31] & 1) != 0 )
        {
          if ( v14 == 1314275652 )
            sub_140088288(*v12, &ProcNumber, (char *)a2 + 52);
        }
        else if ( v14 == 1094997074 )
        {
          if ( (v13[1165] & 2) == 0
            || ProcNumber.Group >= *((_WORD *)v13 + 2331)
            || (v15 = *(unsigned __int8 *)(ProcNumber.Number + (ProcNumber.Group << 6) + *((_QWORD *)v13 + 585)),
                *((_DWORD *)a2 + 13) = v15,
                v15 == 255) )
          {
            *((_DWORD *)a2 + 13) = 0;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)v2 == 3 )
  {
    a2[4] = *(_QWORD *)(a1 + 8) + 48LL;
    *((_DWORD *)a2 + 10) = (*(unsigned int *)(*(_QWORD *)(a1 + 8) + 40LL)
                          + 4095LL
                          + (unsigned __int64)((*(_DWORD *)(*(_QWORD *)(a1 + 8) + 32LL)
                                              + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 44LL)) & 0xFFF)) >> 12;
    v18 = *(_DWORD *)(a1 + 56) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 44LL);
    *((_DWORD *)a2 + 14) &= 0xFFFFFFF0;
    *((_DWORD *)a2 + 11) = v18;
LABEL_20:
    a2[1] = *(_QWORD *)(v2 + 24) + *(unsigned int *)(a1 + 56);
    *((_DWORD *)a2 + 4) = *(_DWORD *)(v2 + 8) - *(_DWORD *)(a1 + 56);
    goto LABEL_21;
  }
  if ( *(_BYTE *)v2 == 4 )
  {
    a2[4] = *(_QWORD *)(a1 + 8) + 48LL;
    *((_DWORD *)a2 + 10) = (*(unsigned int *)(*(_QWORD *)(a1 + 8) + 40LL)
                          + 4095LL
                          + (unsigned __int64)((*(_DWORD *)(*(_QWORD *)(a1 + 8) + 32LL)
                                              + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 44LL)) & 0xFFF)) >> 12;
    v16 = byte_1401688BC == 0;
    *((_DWORD *)a2 + 11) = *(_DWORD *)(a1 + 56) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 44LL);
    if ( !v16 && (*(_BYTE *)(v2 + 2) & 4) != 0 )
      *((_DWORD *)a2 + 14) |= 0x20u;
    *((_DWORD *)a2 + 14) = a2[7] & 0xFFFFFFF0 | 1;
    goto LABEL_20;
  }
LABEL_21:
  if ( (*(_DWORD *)(a1 + 16) & 8) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 24);
    if ( v19 )
      v2 = *(_QWORD *)(v19 + 184);
  }
  LOBYTE(v17) = *(_BYTE *)v2 - 3;
  if ( (unsigned __int8)v17 <= 1u )
  {
    v17 = *(_DWORD *)(v2 + 16);
    *((_DWORD *)a2 + 5) = v17;
    if ( v17 )
    {
      v17 &= 0xFFFF0000;
      if ( v17 == 1448280064 )
      {
        *((_DWORD *)a2 + 14) |= 0x40u;
      }
      else if ( *(_BYTE *)v2 == 4 )
      {
        *((_DWORD *)a2 + 14) |= 0x80u;
      }
    }
  }
  if ( v6 < 0 && *((_DWORD *)a2 + 4) > 0x40000u )
    *((_DWORD *)a2 + 4) = 0x40000;
  return v17;
}
