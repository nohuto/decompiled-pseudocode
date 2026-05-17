/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x1800E1108
 * Callers:
 *     EtwSendNotification @ 0x1800E0E80 (EtwSendNotification.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(
        unsigned int a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        int a9)
{
  __int64 v9; // rdi
  __int64 v10; // r13
  unsigned int v11; // eax
  int v12; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  __int64 Heap_0; // r15
  __int64 v16; // rsi
  __int64 v17; // rbx
  NTSTATUS v18; // r8d
  unsigned __int64 v19; // rdx
  unsigned int v20; // ecx
  ULONG v22; // eax
  _DWORD *v23; // rdx
  __int64 v24; // r9
  _DWORD *v25; // rax
  _WORD v26[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-34h] BYREF
  int v28; // [rsp+38h] [rbp-30h]
  int v29; // [rsp+3Ch] [rbp-2Ch] BYREF
  __int64 v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 v31; // [rsp+48h] [rbp-20h]
  _DWORD *v32; // [rsp+50h] [rbp-18h]
  char v33; // [rsp+B0h] [rbp+48h]
  unsigned int v36; // [rsp+C8h] [rbp+60h]

  v36 = a4;
  v9 = a5;
  v10 = 0LL;
  v11 = 0;
  v30 = a1;
  v12 = 0;
  v31 = 0LL;
  v13 = 0;
  v33 = 0;
  v14 = 0;
  v32 = 0LL;
  Heap_0 = 0LL;
  v28 = 0;
  v16 = 0LL;
  v27 = 0;
  v29 = 0;
  v26[0] = 0;
  if ( a9 == 4 || a9 == 11 )
  {
    Heap_0 = RtlAllocateHeap_0();
    if ( !Heap_0 )
      return 8;
    v10 = a5 + 72;
    v31 = a5;
    v16 = RtlAllocateHeap_0();
    if ( v16 )
    {
      v11 = 0;
      goto LABEL_10;
    }
    v13 = 8;
    goto LABEL_30;
  }
  while ( v11 < a4 )
  {
    HIDWORD(v30) = a2;
    v17 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
    v18 = NtTraceControl(19LL, &v30, 8LL, v9, a6, &v27);
    v19 = ((((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64)
        - v17;
    if ( a2 <= v19 )
    {
      v13 = 1460;
      goto LABEL_12;
    }
    a2 -= v19;
    v20 = (v27 + 7) & 0xFFFFFFF8;
    v27 = v20;
    if ( !v18 )
    {
      v13 = 0;
LABEL_7:
      if ( !a3 )
      {
        if ( v31 )
        {
          if ( *(_DWORD *)(v9 + 4) >= 0xF8u )
          {
            if ( *(_DWORD *)(v9 + 76) == 1 )
            {
              *(_DWORD *)(v16 + 8LL * v14) = *(_DWORD *)(v9 + 32);
              *(_WORD *)(v16 + 8LL * v14 + 4) = *(_WORD *)(v9 + 80);
              *(_WORD *)(v16 + 8LL * v14 + 6) = *(_WORD *)(v9 + 236);
              v20 = v27;
            }
            if ( ++v14 == 1 )
            {
              v9 = Heap_0;
            }
            else if ( *(_DWORD *)(v9 + 76) != 1 )
            {
              v23 = (_DWORD *)(v10 + 104);
              v24 = 4LL;
              do
              {
                *v23 += *(_DWORD *)((char *)v23 + v9 - v10 + 72);
                ++v23;
                --v24;
              }
              while ( v24 );
            }
          }
        }
        else
        {
          v25 = (_DWORD *)(v9 + 8);
          *(_DWORD *)(v9 + 8) = v20;
          v20 = v27;
          v9 += v27;
          v32 = v25;
          a6 -= v27;
        }
      }
      v12 += v20;
      goto LABEL_9;
    }
    v22 = RtlNtStatusToDosError(v18);
    v13 = v22;
    if ( !v22 )
    {
      v20 = v27;
      goto LABEL_7;
    }
    if ( v22 != 122 )
      break;
    v12 += v27;
    v33 = 1;
LABEL_9:
    v11 = ++v28;
LABEL_10:
    a4 = v36;
  }
  if ( v14 )
  {
    if ( *(_DWORD *)(v10 + 4) == 1 )
    {
      v13 = NtTraceControl(38LL, v16, 8 * v14, v26, 2, &v29);
      if ( !v13 && v29 == 2 )
        *(_WORD *)(v10 + 8) = v26[0];
    }
  }
  *a7 = v28;
  *a8 = v12;
  if ( v32 )
    *v32 = 0;
  if ( !v13 && v33 )
    v13 = 122;
LABEL_12:
  if ( Heap_0 )
LABEL_30:
    RtlFreeHeap_0();
  if ( v16 )
    RtlFreeHeap_0();
  return v13;
}
