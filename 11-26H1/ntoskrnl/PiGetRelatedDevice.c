/*
 * XREFs of PiGetRelatedDevice @ 0x1409A8A10
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1409A8800 (PiControlGetRelatedDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14042F140 (RtlLookupElementGenericTableAvl.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v24; // rax
  __int64 *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
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
                    v20 = *((unsigned __int16 *)v13 + 20);
                    if ( *a3 <= (unsigned int)v20 )
                    {
                      v9 = -1073741789;
                      LODWORD(v20) = v20 + 2;
                    }
                    else
                    {
                      memmove(a2, (const void *)v13[6], *((unsigned __int16 *)v13 + 20));
                      *(_WORD *)&a2[v20] = 0;
                    }
                    *a3 = v20;
                  }
                  else
                  {
                    v9 = -1073741810;
                  }
                  goto LABEL_21;
                case 2:
                  v25 = (__int64 *)v13[1];
                  i = v11;
                  v13 = v25;
                  if ( !v25 )
                    goto LABEL_14;
                  v26 = *((_DWORD *)v25 + 99);
                  if ( (v26 & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 24 || (v26 & 0x1000) == 0 )
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
                      v24 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)(v13 + 5), 0x43706E50u);
                      if ( v24 )
                      {
                        ObfDereferenceObjectWithTag(v24, 0x43706E50u);
                        break;
                      }
                    }
                    v13 = (__int64 *)*v13;
                  }
                  ExReleaseResourceLite(&PnpRegistryDeviceResource);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19);
                  goto LABEL_17;
              }
              v9 = -1073741811;
            }
            i = v11;
LABEL_21:
            ExReleaseResourceLite(&IopDeviceTreeLock);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22);
            ObfDereferenceObjectWithTag(i, 0x43706E50u);
            return v9;
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28);
  return 3221225486LL;
}
