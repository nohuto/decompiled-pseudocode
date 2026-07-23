/*
 * XREFs of PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1407E0674
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1407E0A20 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PsAcquireProcessExitSynchronization @ 0x1409D39E0 (PsAcquireProcessExitSynchronization.c)
 */

void __fastcall PopEtEnergyTrackerQueryProcessEnergyValues(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // r13
  int v5; // eax
  HANDLE v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rdx
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int128 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+A4h] [rbp-5Ch]
  HANDLE v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int16 v35; // [rsp+3C0h] [rbp+2C0h]
  __int16 v36; // [rsp+3C2h] [rbp+2C2h]
  int v37; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v38; // [rsp+3D4h] [rbp+2D4h]
  HANDLE v39; // [rsp+3E0h] [rbp+2E0h]
  unsigned int v40; // [rsp+3ECh] [rbp+2ECh]
  __int16 v41; // [rsp+6F0h] [rbp+5F0h]
  _BYTE v42[4]; // [rsp+700h] [rbp+600h] BYREF
  __int64 v43; // [rsp+704h] [rbp+604h]
  HANDLE v44; // [rsp+710h] [rbp+610h]

  v2 = *(_QWORD *)(a2 + 1640);
  v3 = (struct _EX_RUNDOWN_REF *)a2;
  v29 = (struct _EX_RUNDOWN_REF *)a2;
  v4 = a1;
  v28 = a1;
  v30 = v2;
  if ( v2 )
  {
    if ( *(int *)(PopEtGlobals + 1096) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 648) )
      {
        v5 = *(_DWORD *)(a2 + 500) & 0x4000008;
        Handle = 0LL;
        if ( v5 == 0x4000000 && (int)PsAcquireProcessExitSynchronization(a2) >= 0 )
        {
          if ( ObOpenObjectByPointer(v3, 0, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
          {
            v6 = Handle;
            if ( Handle )
            {
              v7 = 0LL;
              v8 = 0LL;
              v22 = 0;
              if ( *(_DWORD *)(v4 + 648) )
              {
                do
                {
                  memset_0(v42, 0, 0x328uLL);
                  v9 = 5 * v7;
                  v10 = *(_QWORD *)(v4 + 656);
                  v25 = 5 * v7;
                  v24 = v10;
                  v11 = *(_QWORD *)(PopEtGlobals + 1088);
                  v27 = 0LL;
                  v20 = 0;
                  v26 = 0LL;
                  v43 = *(_QWORD *)(v10 + 20 * v7 + 4);
                  v44 = v6;
                  v23 = v11;
                  if ( (int)guard_dispatch_icall_no_overrides((__int64)v42, v12) >= 0 )
                  {
                    LODWORD(v26) = *(_DWORD *)(v10 + 20 * v7);
                    DWORD1(v26) = 30;
                    *((_QWORD *)&v26 + 1) = &v20;
                    LODWORD(v27) = 4;
                    if ( (int)guard_dispatch_icall_no_overrides((__int64)&v26, 0LL) >= 0 )
                    {
                      v13 = 0;
                      if ( v20 )
                      {
                        do
                        {
                          memset_0(&v37, 0, 0x328uLL);
                          v38 = *(_QWORD *)(v10 + 4 * v9 + 4);
                          v39 = Handle;
                          v37 = 11;
                          v41 = v13;
                          if ( (int)guard_dispatch_icall_no_overrides((__int64)&v37, v14) >= 0 )
                          {
                            v15 = v40;
                            v16 = 0;
                            if ( v40 )
                            {
                              v17 = v25;
                              v18 = v24;
                              do
                              {
                                memset_0(&v31, 0, 0x328uLL);
                                v32 = *(_QWORD *)(v18 + 4 * v17 + 4);
                                v33 = Handle;
                                v31 = 19;
                                v35 = v13;
                                v36 = v16;
                                if ( (int)guard_dispatch_icall_no_overrides((__int64)&v31, v19) >= 0 )
                                  v8 += v34;
                                ++v16;
                              }
                              while ( v16 < v15 );
                              v10 = v18;
                              v9 = v17;
                            }
                            else
                            {
                              v10 = v24;
                            }
                          }
                          ++v13;
                        }
                        while ( v13 < v20 );
                        LODWORD(v7) = v22;
                        v4 = v28;
                      }
                    }
                  }
                  v6 = Handle;
                  v7 = (unsigned int)(v7 + 1);
                  v22 = v7;
                }
                while ( (unsigned int)v7 < *(_DWORD *)(v4 + 648) );
                v3 = v29;
                v2 = v30;
              }
              ObCloseHandle(v6, 1);
              if ( v8 )
                *(_QWORD *)(v2 + 432) = v8;
            }
          }
          ExReleaseRundownProtection_0(v3 + 61);
        }
      }
    }
  }
}
