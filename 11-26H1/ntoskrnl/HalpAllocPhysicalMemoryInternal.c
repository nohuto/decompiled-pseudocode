/*
 * XREFs of HalpAllocPhysicalMemoryInternal @ 0x140D0ED40
 * Callers:
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 * Callees:
 *     HalpAllocPhysicalMemoryFromDescriptor @ 0x140CB4244 (HalpAllocPhysicalMemoryFromDescriptor.c)
 */

unsigned __int64 __fastcall HalpAllocPhysicalMemoryInternal(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  _QWORD *v6; // r13
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 result; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // r10
  _QWORD *v13; // rsi
  __int64 v14; // r11
  char *v15; // r9
  int v16; // r8d
  unsigned __int64 v17; // rdx
  __int64 v18; // r11
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned int v22; // r11d
  __int64 v23; // r11
  char *v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-38h]
  _QWORD *v28; // [rsp+38h] [rbp-30h]
  unsigned int v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  if ( *(_DWORD *)&HalpPmuArbiter.ApcStateFill[40] + 2 <= (unsigned int)HalpAllocationDescriptorArraySize
    || HalpDescriptorPoolLow )
  {
    v4 = -1LL;
    v5 = 1LL;
    if ( a2 )
      v4 = *a2 >> 12;
    v27 = a3;
    if ( v4 >= a3 )
    {
      if ( BYTE2(HalpDeviceBlockUnblockPushLock.Timer.DueTime.u.LowPart) && v4 - a3 >= 0x100 )
        v5 = 256LL;
      v6 = (_QWORD *)(a1 + 32);
      v7 = 0LL;
      v8 = *(_QWORD **)(a1 + 32);
      v9 = 0LL;
      if ( v8 != (_QWORD *)(a1 + 32) )
      {
        do
        {
          v28 = v7;
          v7 = v8;
          result = HalpAllocPhysicalMemoryFromDescriptor((__int64)v8, v4, v5, a3, a4);
          v11 = v8 + 4;
          v12 = v8 + 4;
          if ( result )
          {
            v9 = (result >> 12) - *v11;
            if ( result >> 12 == *v11 || !HalpDescriptorPoolLow )
              break;
          }
          v8 = (_QWORD *)*v8;
          a4 = v30;
        }
        while ( v8 != v6 );
        if ( v8 != v6 )
        {
          v13 = v12;
          if ( !v9 && v28 && *((_DWORD *)v28 + 6) == 26 && (v14 = v28[5], v13 = v7 + 4, v14 + v28[4] == v7[4]) )
          {
            v15 = 0LL;
            v28[5] = v14 + v27;
          }
          else
          {
            v16 = *(_DWORD *)&HalpPmuArbiter.ApcStateFill[40];
            v15 = (char *)HalpAllocationDescriptorArray + 48 * *(unsigned int *)&HalpPmuArbiter.ApcStateFill[40];
            *((_QWORD *)v15 + 5) = v27;
            v17 = v9 + *v13;
            *((_DWORD *)v15 + 6) = 26;
            *((_QWORD *)v15 + 4) = v17;
            *(_DWORD *)&HalpPmuArbiter.ApcStateFill[40] = v16 + 1;
          }
          v18 = v7[5] - v27;
          if ( v9 )
          {
            v23 = v18 - v9;
            if ( v23 )
            {
              v24 = (char *)HalpAllocationDescriptorArray + 48 * *(unsigned int *)&HalpPmuArbiter.ApcStateFill[40];
              ++*(_DWORD *)&HalpPmuArbiter.ApcStateFill[40];
              *((_QWORD *)v24 + 5) = v23;
              v22 = a3;
              *((_QWORD *)v24 + 4) = v9 + *v13 + a3;
              *((_DWORD *)v24 + 6) = *((_DWORD *)v7 + 6);
              v25 = *v7;
              if ( *(_QWORD **)(*v7 + 8LL) != v7 )
                goto LABEL_36;
              *(_QWORD *)v24 = v25;
              *((_QWORD *)v24 + 1) = v7;
              *(_QWORD *)(v25 + 8) = v24;
              *v7 = v24;
            }
            else
            {
              v22 = a3;
            }
            v7[5] = v9;
            v26 = *v7;
            if ( *(_QWORD **)(*v7 + 8LL) == v7 )
            {
              *(_QWORD *)v15 = v26;
              *((_QWORD *)v15 + 1) = v7;
              *(_QWORD *)(v26 + 8) = v15;
              *v7 = v15;
              goto LABEL_30;
            }
          }
          else
          {
            *v12 += v27;
            v7[5] = v18;
            if ( v15 )
            {
              v19 = (_QWORD *)v7[1];
              if ( (_QWORD *)*v19 != v7 )
                goto LABEL_36;
              *(_QWORD *)v15 = v7;
              *((_QWORD *)v15 + 1) = v19;
              *v19 = v15;
              v7[1] = v15;
            }
            if ( v7[5] )
            {
LABEL_29:
              v22 = a3;
LABEL_30:
              HalpMmEarlyPhysicalPagesAllocated += v22;
              return result;
            }
            v20 = *v7;
            if ( *(_QWORD **)(*v7 + 8LL) == v7 )
            {
              v21 = (_QWORD *)v7[1];
              if ( (_QWORD *)*v21 == v7 )
              {
                *v21 = v20;
                *(_QWORD *)(v20 + 8) = v21;
                goto LABEL_29;
              }
            }
          }
LABEL_36:
          __fastfail(3u);
        }
      }
    }
  }
  return 0LL;
}
