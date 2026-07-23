/*
 * XREFs of PopFxVerifyDependencies @ 0x140B1E298
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x140B1DC50 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxVerifyDependencies(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _DWORD *Pool2; // r11
  unsigned int v8; // edx
  unsigned int i; // r8d
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // r15d
  unsigned int *v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned int v19; // esi
  unsigned int j; // ecx
  __int64 v21; // r9
  int v22; // r10d
  __int64 v23; // rax

  v6 = 0;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v8 = 0;
    for ( i = 0; i < a3; ++i )
    {
      if ( !*(_DWORD *)(a1 + 12LL * i) )
      {
        v10 = v8++;
        Pool2[v10] = i;
        while ( v8 )
        {
          v11 = (unsigned int)Pool2[v8 - 1];
          if ( (unsigned int)v11 >= a3 )
            goto LABEL_17;
          v12 = *(_DWORD *)(a1 + 12 * v11);
          if ( v12 == 2 )
            goto LABEL_17;
          _mm_lfence();
          v13 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a2 + 872) + 8 * v11) + 176LL);
          _mm_lfence();
          if ( v12 == 1 )
          {
            *(_DWORD *)(a1 + 12 * v11) = 2;
            --v8;
            v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 872) + 8 * v11) + 172LL);
            if ( v14 )
            {
              v15 = *(_DWORD *)(a1 + 12 * v11 + 4);
              v16 = v14;
              do
              {
                v17 = *(_DWORD *)(a1 + 12LL * *v13 + 4);
                if ( v17 > v15 )
                {
                  v15 = *(_DWORD *)(a1 + 12LL * *v13 + 4);
                  *(_DWORD *)(a1 + 12 * v11 + 4) = v17;
                }
                v13 += 2;
                --v16;
              }
              while ( v16 );
              if ( ++*(_DWORD *)(a1 + 12 * v11 + 4) > 4u )
              {
LABEL_17:
                v6 = -1073741811;
                goto LABEL_18;
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 12 * v11) = 1;
            v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 872) + 8 * v11) + 172LL);
            for ( j = 0; j < v19; ++j )
            {
              v21 = v13[2 * j];
              v22 = *(_DWORD *)(a1 + 12 * v21);
              if ( v22 == 1 )
                goto LABEL_17;
              if ( !v22 )
              {
                if ( v8 >= a3 )
                  goto LABEL_17;
                v23 = v8++;
                Pool2[v23] = v21;
              }
            }
          }
        }
      }
    }
LABEL_18:
    ExFreePoolWithTag(Pool2, 0x4D584650u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
