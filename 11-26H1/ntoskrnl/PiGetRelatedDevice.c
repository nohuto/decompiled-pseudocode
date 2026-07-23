/*
 * XREFs of PiGetRelatedDevice @ 0x140969420
 * Callers:
 *     PiControlGetRelatedDevice @ 0x140969210 (PiControlGetRelatedDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiGetRelatedDevice(__int64 a1, char *a2, _DWORD *a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // r14d
  _QWORD **v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 *v13; // rbx
  int v14; // eax
  void *i; // rbp
  int v16; // eax
  struct _KTHREAD *v17; // rax
  __int64 v18; // r15
  _QWORD *v20; // rax
  __int64 *v21; // rax
  int v22; // eax
  _QWORD Buffer[7]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  Buffer[1] = a1;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v10 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v10 )
  {
    v11 = *v10;
    if ( *v10 )
    {
      if ( *(_WORD *)v11 == 3 )
      {
        v12 = *(_QWORD *)(v11[39] + 40LL);
        if ( v12 )
        {
          if ( *(_QWORD **)(v12 + 32) == v11 )
          {
            ObfReferenceObjectWithTag(v11, 0x43706E50u);
            KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
            v13 = *(__int64 **)(v11[39] + 40LL);
            if ( !v13 || (v14 = *((_DWORD *)v13 + 75), v14 == 790) || v14 == 789 )
            {
              v9 = -1073741810;
            }
            else
            {
              switch ( a4 )
              {
                case 1:
                  v13 = (__int64 *)v13[2];
                  i = v11;
LABEL_17:
                  if ( v13 )
                  {
                    v18 = *((unsigned __int16 *)v13 + 20);
                    if ( *a3 <= (unsigned int)v18 )
                    {
                      v9 = -1073741789;
                      LODWORD(v18) = v18 + 2;
                    }
                    else
                    {
                      memmove(a2, (const void *)v13[6], *((unsigned __int16 *)v13 + 20));
                      *(_WORD *)&a2[v18] = 0;
                    }
                    *a3 = v18;
                  }
                  else
                  {
                    v9 = -1073741810;
                  }
                  goto LABEL_21;
                case 2:
                  v21 = (__int64 *)v13[1];
                  i = v11;
                  v13 = v21;
                  if ( !v21 )
                    goto LABEL_14;
                  v22 = *((_DWORD *)v21 + 99);
                  if ( (v22 & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 24 || (v22 & 0x1000) == 0 )
                    goto LABEL_14;
                  goto LABEL_12;
                case 3:
LABEL_12:
                  v13 = (__int64 *)*v13;
                  for ( i = v11; v13; v13 = (__int64 *)*v13 )
                  {
                    v16 = *((_DWORD *)v13 + 99);
                    if ( (v16 & 0x2000) == 0 )
                      break;
                    if ( *((_DWORD *)v13 + 101) != 24 )
                      break;
                    if ( (v16 & 0x1000) == 0 )
                      break;
                  }
LABEL_14:
                  v17 = KeGetCurrentThread();
                  --v17->KernelApcDisable;
                  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
                  while ( v13 )
                  {
                    if ( v13[6] )
                    {
                      v20 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)(v13 + 5), 0x43706E50u);
                      if ( v20 )
                      {
                        ObfDereferenceObjectWithTag(v20, 0x43706E50u);
                        break;
                      }
                    }
                    v13 = (__int64 *)*v13;
                  }
                  ExReleaseResourceLite(&PnpRegistryDeviceResource);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  goto LABEL_17;
              }
              v9 = -1073741811;
            }
            i = v11;
LABEL_21:
            ExReleaseResourceLite(&IopDeviceTreeLock);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            ObfDereferenceObjectWithTag(i, 0x43706E50u);
            return v9;
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 3221225486LL;
}
