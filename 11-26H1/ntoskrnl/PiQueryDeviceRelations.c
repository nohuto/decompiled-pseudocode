/*
 * XREFs of PiQueryDeviceRelations @ 0x140ACBF40
 * Callers:
 *     PiControlQueryDeviceRelations @ 0x140ACBDC0 (PiControlQueryDeviceRelations.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpQueryDeviceRelations @ 0x1409B023C (PnpQueryDeviceRelations.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryDeviceRelations(__int64 a1, int a2, unsigned int *a3, _WORD *a4)
{
  unsigned int v7; // ebx
  unsigned int v8; // esi
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rax
  unsigned int v15; // ebp
  void *v16; // r15
  __int64 v17; // r14
  int v18; // eax
  _QWORD *v19; // rax
  unsigned int v20; // edi
  unsigned int *Pool2; // rax
  _DWORD *v22; // r8
  __int64 **v23; // r14
  __int64 v24; // rdx
  __int64 v26; // rdx
  unsigned __int16 *v27; // rdi
  int v28; // r9d
  _WORD *v29; // rcx
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v31; // [rsp+28h] [rbp-30h]
  int DeviceRelations; // [rsp+68h] [rbp+10h]

  P = 0LL;
  v7 = 0;
  DeviceRelations = 0;
  v8 = 0;
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return 3221225485LL;
          v12 = 6;
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
        v12 = 2;
      }
    }
    else
    {
      v12 = 3;
    }
  }
  else
  {
    v12 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v14 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v15 = 0;
  v31 = v14;
  v16 = v14;
  if ( v14 )
  {
    v17 = *(_QWORD *)(v14[39] + 40LL);
    v18 = *(_DWORD *)(v17 + 300);
    if ( v18 != 789 && v18 != 790 )
    {
      if ( v12 )
      {
        DeviceRelations = PnpQueryDeviceRelations((__int64)v16, v12, 0LL, (__int64)&P);
        v7 = DeviceRelations;
        if ( DeviceRelations < 0 )
        {
          v22 = 0LL;
          P = 0LL;
          goto LABEL_19;
        }
      }
      else
      {
        v19 = *(_QWORD **)(v17 + 8);
        v20 = 0;
        while ( v19 )
        {
          v19 = (_QWORD *)*v19;
          ++v20;
        }
        Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
        P = Pool2;
        v22 = Pool2;
        if ( !Pool2 )
        {
          v7 = -1073741670;
          DeviceRelations = -1073741670;
          goto LABEL_19;
        }
        *Pool2 = v20;
        v23 = *(__int64 ***)(v17 + 8);
        if ( v23 )
        {
          do
          {
            if ( v15 >= v20 )
              break;
            ObfReferenceObjectWithTag(v23[4], 0x43706E50u);
            v24 = v15++;
            *((_QWORD *)P + v24 + 1) = v23[4];
            v23 = (__int64 **)*v23;
          }
          while ( v23 );
          v15 = 0;
        }
      }
      v22 = P;
LABEL_19:
      if ( v22 && *v22 )
      {
        v8 = 2;
        do
        {
          v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v22[2 * v15 + 2] + 312LL) + 40LL);
          if ( v26 )
          {
            v27 = (unsigned __int16 *)(v26 + 40);
            if ( v26 != -40 )
            {
              v28 = *v27;
              if ( (unsigned __int16)v28 >= 2u )
              {
                if ( a4 && *a3 >= (unsigned __int64)(v8 + v28) + 2 )
                {
                  memmove(a4, *(const void **)(v26 + 48), *v27);
                  v29 = &a4[(unsigned __int64)*v27 >> 1];
                  *v29 = 0;
                  a4 = v29 + 1;
                  v22 = P;
                }
                v8 += *v27 + 2;
              }
            }
          }
          ObfDereferenceObjectWithTag(*(PVOID *)&v22[2 * v15 + 2], 0x43706E50u);
          v22 = P;
          ++v15;
        }
        while ( v15 < *(_DWORD *)P );
        v7 = DeviceRelations;
        v16 = v31;
        if ( a4 && *a3 >= 2 )
          *a4 = 0;
        if ( *a3 < v8 )
          v7 = -1073741789;
      }
      goto LABEL_20;
    }
  }
  v7 = -1073741810;
LABEL_20:
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
    v8 = 0;
  *a3 = v8;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x43706E50u);
  return v7;
}
