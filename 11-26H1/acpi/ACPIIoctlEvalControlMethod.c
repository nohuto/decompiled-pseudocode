/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x140023DBC
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x14002ACF0 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1400C5FF0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1400221DC (AcpiIoctlCleanupArgumentObjects.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140022548 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1400228B4 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x14002298C (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x140024044 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x140038BA0 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140062778 (ACPIIoctlEvalPreProcessingV2Ex.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // r14d
  __int64 *v4; // r13
  void *v5; // r15
  PVOID v6; // rdi
  unsigned int v7; // r12d
  __int64 v10; // r9
  int v11; // eax
  int v12; // ebx
  __int64 v13; // r8
  int v14; // r14d
  int v15; // r14d
  int v16; // r14d
  int v17; // eax
  char v18; // r8
  __int64 v20; // [rsp+40h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+48h] [rbp-10h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+50h] BYREF
  KPRIORITY Priority; // [rsp+B0h] [rbp+58h]
  PVOID P; // [rsp+B8h] [rbp+60h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v6 = 0LL;
  v21[0] = 0LL;
  v7 = 0;
  P = 0LL;
  LODWORD(v23) = 0;
  KeEnterCriticalRegion();
  Priority = KeSetPriorityThread(KeGetCurrentThread(), 16);
  switch ( v3 )
  {
    case 3325956:
      v11 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)a2, a3, v10, &v20, &P, v21, (unsigned int *)&v23);
      break;
    case 3325976:
      v11 = ACPIIoctlEvalPreProcessingV1Ex(a1, (__int64)a2, a3);
      break;
    case 3326012:
      v11 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v20, (__int64)&P, (__int64)v21, (__int64)&v23);
      break;
    case 3326020:
      v11 = ACPIIoctlEvalPreProcessingV2Ex(
              a1,
              (_DWORD)a2,
              a3,
              v10,
              (__int64)&v20,
              (__int64)&P,
              (__int64)v21,
              (__int64)&v23);
      break;
    default:
      goto LABEL_11;
  }
  v6 = P;
  v12 = v11;
  if ( v11 < 0 )
    goto LABEL_26;
  v4 = (__int64 *)v20;
  v5 = (void *)v21[0];
  v7 = v23;
LABEL_11:
  v12 = AMLIEvalNameSpaceObject(v4, (__int64)v6, v7, (__int64)v5);
  AMLIDereferenceHandleEx((__int64)v4);
  if ( v5 )
  {
    AcpiIoctlCleanupArgumentObjects((__int64)v5, v7);
    ExFreePoolWithTag(v5, 0x41706341u);
  }
  if ( v12 >= 0 )
  {
    v14 = v3 - 3325956;
    if ( v14 )
    {
      v15 = v14 - 20;
      if ( v15 )
      {
        v16 = v15 - 36;
        if ( v16 )
        {
          if ( v16 != 8 )
          {
LABEL_25:
            dword_14008ED38 = 0;
            pszDest = 0;
            FreeDataBuffs((__int64)v6, 1u);
            goto LABEL_26;
          }
          LOBYTE(v13) = 1;
        }
        else
        {
          v13 = 0LL;
        }
        v17 = ACPIIoctlEvalPostProcessingV2(a2, v6, v13);
LABEL_24:
        v12 = v17;
        goto LABEL_25;
      }
      v18 = 1;
    }
    else
    {
      v18 = 0;
    }
    v17 = ACPIIoctlEvalPostProcessingV1(a2, (__int64)v6, v18);
    goto LABEL_24;
  }
LABEL_26:
  KeSetPriorityThread(KeGetCurrentThread(), Priority);
  KeLeaveCriticalRegion();
  if ( v6 )
    ExFreePoolWithTag(v6, 0x52706341u);
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v12;
}
