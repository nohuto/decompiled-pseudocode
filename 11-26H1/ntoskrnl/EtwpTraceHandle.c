/*
 * XREFs of EtwpTraceHandle @ 0x140A87B14
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 * Callees:
 *     EtwpTraceKernelEventWithFilter @ 0x1404C7F18 (EtwpTraceKernelEventWithFilter.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceHandle(unsigned __int16 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  unsigned int v6; // esi
  unsigned int v8; // r9d
  bool v10; // zf
  __int64 v11; // r10
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // r11
  unsigned int v16; // ebx
  unsigned int v17; // r8d
  __int64 v18; // rax
  char v19; // cl
  __int16 v20; // ax
  _WORD *Pool2; // rbx
  unsigned __int16 v22; // r14
  __int64 v23; // rax
  unsigned int v24; // r8d
  int v25; // eax
  int v26; // ecx
  int i; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v28; // [rsp+34h] [rbp-CCh]
  _DWORD v29[2]; // [rsp+38h] [rbp-C8h]
  _DWORD v30[2]; // [rsp+40h] [rbp-C0h]
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 *v32; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-A0h]
  int v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+74h] [rbp-8Ch]
  _BYTE P[272]; // [rsp+90h] [rbp-70h] BYREF

  v5 = *(_DWORD *)(a4 + 192);
  v6 = 0;
  v28 = a1;
  i = 0;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v10 = !_BitScanForward((unsigned int *)&v11, v8);
  v31 = 0LL;
  v29[0] = 0;
  if ( !v10 )
  {
    v12 = 1;
    do
    {
      v8 &= v8 - 1;
      v13 = 32LL * (unsigned int)v11 + EtwpHostSiloState + 4556;
      if ( v13 && (*(_DWORD *)(v13 + 16) & 0x40) != 0 )
      {
        v14 = 0LL;
        v15 = &stru_140F03830.WaitBlockFill5[20 * v11 + 48];
        v16 = *(unsigned __int16 *)v15;
LABEL_9:
        if ( (unsigned int)v14 < v16 )
        {
          v17 = 0;
          v18 = 0LL;
          v30[0] = *(_DWORD *)&v15[4 * v14 + 4];
          v29[0] = v5;
          while ( v17 < 4 )
          {
            v19 = *((_BYTE *)v30 + v18);
            if ( v19 != 63 )
            {
              if ( v19 == 42 )
                break;
              if ( *((_BYTE *)v29 + v18) != v19 )
              {
                v14 = (unsigned int)(v14 + 1);
                goto LABEL_9;
              }
            }
            ++v17;
            ++v18;
          }
          v6 |= 1 << v11;
        }
      }
      v10 = !_BitScanForward((unsigned int *)&v11, v8);
    }
    while ( !v10 );
    if ( v6 )
    {
      v20 = *(unsigned __int8 *)(a4 + 40);
      Pool2 = P;
      v22 = v28;
      WORD6(v31) = v20;
      v32 = &v31;
      DWORD2(v31) = a2;
      *(_QWORD *)&v31 = a3;
      v33[0] = 14LL;
      if ( v28 == 4385 )
      {
        v24 = 272;
        for ( i = 272; ; v24 = i )
        {
          v25 = ObQueryNameStringMode(a3, (__int64)Pool2, v24, &i, 0);
          if ( v25 != -1073741820 )
            break;
          if ( Pool2 != (_WORD *)P )
            ExFreePoolWithTag(Pool2, 0);
          Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
            goto LABEL_19;
        }
        if ( !v25 )
        {
          v26 = 0x2000;
          if ( *Pool2 < 0x2000u )
            v26 = (unsigned __int16)*Pool2;
          v12 = 2;
          v33[1] = *((_QWORD *)Pool2 + 1);
          v34 = v26;
          v35 = 0;
        }
      }
LABEL_19:
      v23 = 2LL * v12;
      v33[v23 - 1] = &EtwpNull;
      v33[v23] = 2LL;
      EtwpTraceKernelEventWithFilter((__int64)&v32, v12 + 1, v6, v22, 0x10601902u);
      if ( Pool2 )
      {
        if ( Pool2 != (_WORD *)P )
          ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
}
