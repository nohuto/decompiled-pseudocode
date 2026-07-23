/*
 * XREFs of WheapWmiExecuteErrorInjectionMethod @ 0x1406DC2B0
 * Callers:
 *     WheapWmiExecuteMethod @ 0x1406DC8E8 (WheapWmiExecuteMethod.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall WheapWmiExecuteErrorInjectionMethod(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        int *a5)
{
  int v5; // edi
  int v8; // ebp
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  int v14; // eax
  unsigned int v15; // ecx
  size_t v16; // r14
  unsigned int v17; // r12d
  PVOID Memory; // rax
  void *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  int InjectionCapabilities; // eax
  unsigned int v24; // eax
  unsigned int v26; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v8 = 0;
  v9 = a1 - 1;
  if ( !v9 )
  {
    v26 = 0;
    InjectionCapabilities = PshedGetInjectionCapabilities(&v26);
    v8 = 8;
    if ( a2 >= 8 )
    {
      if ( InjectionCapabilities < 0 )
      {
        *a3 = -1073741823;
        v12 = -1073741823;
      }
      else
      {
        v24 = v26;
        v12 = 0;
        *a3 = 0;
        a3[1] = v24;
      }
      goto LABEL_35;
    }
    goto LABEL_31;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        v12 = -1073741161;
        goto LABEL_35;
      }
      if ( WheapConfigTableLock.ApcState.ApcListHead[1].Flink )
      {
        if ( a3 )
        {
          if ( a2 >= 8 )
          {
            v13 = a3[1];
            if ( v13 )
            {
              v8 = v13 + 8;
              if ( a2 >= v13 + 8 )
              {
                v14 = guard_dispatch_icall_no_overrides(*a3, v13);
                *a3 = v14;
                v15 = 0;
                v12 = v14;
                if ( v14 >= 0 )
                {
                  v15 = v13;
                  v5 = v13 + 8;
                }
                a3[1] = v15;
                v8 = v5;
                goto LABEL_35;
              }
LABEL_31:
              v12 = -1073741789;
              goto LABEL_35;
            }
          }
        }
LABEL_25:
        v12 = -1073741811;
        goto LABEL_35;
      }
    }
    else if ( WheapConfigTableLock.Header.WaitListHead.Flink )
    {
      if ( a3 )
      {
        if ( a4 >= 8 )
        {
          v16 = a3[1];
          v17 = *a3;
          if ( (_DWORD)v16 )
          {
            if ( a4 >= v16 + 8 )
            {
              v8 = 4;
              if ( a2 >= 4 )
              {
                Memory = PshedAllocateMemory(v16);
                v19 = Memory;
                if ( Memory )
                {
                  memmove(Memory, a3 + 2, v16);
                  v12 = guard_dispatch_icall_no_overrides(v17, (unsigned int)v16);
                  PshedFreeMemory(v19);
                  *a3 = v12;
                }
                else
                {
                  v12 = -1073741670;
                }
                goto LABEL_35;
              }
              goto LABEL_31;
            }
          }
        }
      }
      goto LABEL_25;
    }
    v12 = -1073741637;
    goto LABEL_35;
  }
  if ( a4 < 0x24 )
    goto LABEL_25;
  v20 = *((_QWORD *)a3 + 1);
  v8 = 4;
  v21 = *((_QWORD *)a3 + 2);
  if ( a2 < 4 )
    goto LABEL_31;
  v22 = PshedInjectError(*a3, v20, v21, *((_QWORD *)a3 + 3), *((_QWORD *)a3 + 4));
  v12 = v22;
  if ( v22 < 0 )
    v12 = -1073741823;
  *a3 = (v22 >> 31) & 0xC0000001;
LABEL_35:
  *a5 = v8;
  return v12;
}
