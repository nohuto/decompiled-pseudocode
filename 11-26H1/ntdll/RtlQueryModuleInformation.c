/*
 * XREFs of RtlQueryModuleInformation @ 0x18013BF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryModuleInformation(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int *Heap_0; // rbx
  ULONG i; // r8d
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  unsigned int *v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // xmm1
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE SystemInformation[4]; // [rsp+30h] [rbp-168h] BYREF
  int v21; // [rsp+34h] [rbp-164h]

  v21 = 0;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x12CuLL);
  v6 = 0;
  if ( a2 == 8 )
  {
    if ( (a3 & 7) != 0 )
      return 3221225713LL;
    goto LABEL_5;
  }
  if ( a2 != 272 )
    return 3221225712LL;
  result = (a3 & 7) != 0 ? 0xC00000F1 : 0;
  if ( (a3 & 7) == 0 )
  {
LABEL_5:
    Heap_0 = (unsigned int *)SystemInformation;
    for ( i = 304; ; i = ReturnLength[0] )
    {
      ReturnLength[0] = 0;
      v10 = NtQuerySystemInformation(SystemModuleInformation, Heap_0, i, ReturnLength);
      v11 = v10;
      if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073741820 )
        break;
      if ( !a3 )
      {
        v11 = 0;
        v12 = a2 * ((ReturnLength[0] - 8) / 0x128);
LABEL_28:
        *a1 = v12;
        break;
      }
      if ( v10 >= 0 )
      {
        v12 = a2 * *Heap_0;
        if ( *a1 >= v12 )
        {
          if ( *Heap_0 )
          {
            do
            {
              if ( a2 == 8 )
              {
                *(_QWORD *)(a3 + 8LL * v6) = *(_QWORD *)&Heap_0[74 * v6 + 6];
              }
              else
              {
                v13 = 272LL * v6;
                v14 = 74LL * v6;
                *(_QWORD *)(v13 + a3) = *(_QWORD *)&Heap_0[v14 + 6];
                *(_DWORD *)(v13 + a3 + 8) = Heap_0[v14 + 8];
                *(_WORD *)(v13 + a3 + 12) = HIWORD(Heap_0[v14 + 11]);
                v15 = (_OWORD *)(v13 + a3 + 14);
                v16 = &Heap_0[v14 + 12];
                v17 = 2LL;
                do
                {
                  *v15 = *(_OWORD *)v16;
                  v15[1] = *((_OWORD *)v16 + 1);
                  v15[2] = *((_OWORD *)v16 + 2);
                  v15[3] = *((_OWORD *)v16 + 3);
                  v15[4] = *((_OWORD *)v16 + 4);
                  v15[5] = *((_OWORD *)v16 + 5);
                  v15[6] = *((_OWORD *)v16 + 6);
                  v15 += 8;
                  v18 = *((_OWORD *)v16 + 7);
                  v16 += 32;
                  *(v15 - 1) = v18;
                  --v17;
                }
                while ( v17 );
              }
              ++v6;
            }
            while ( v6 < *Heap_0 );
          }
        }
        else
        {
          v11 = -1073741789;
        }
        goto LABEL_28;
      }
      if ( Heap_0 != (unsigned int *)SystemInformation )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
      Heap_0 = (unsigned int *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, ReturnLength[0]);
      if ( !Heap_0 )
        return 3221225626LL;
    }
    if ( Heap_0 != (unsigned int *)SystemInformation )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
    return v11;
  }
  return result;
}
