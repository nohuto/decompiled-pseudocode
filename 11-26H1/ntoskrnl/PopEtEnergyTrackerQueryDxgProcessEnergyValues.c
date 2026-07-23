/*
 * XREFs of PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140B70848
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

char __fastcall PopEtEnergyTrackerQueryDxgProcessEnergyValues(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl
  struct _EX_RUNDOWN_REF *v4; // rsi
  __int64 v5; // r13
  int v6; // eax
  HANDLE v7; // rdi
  __int64 v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned int v16; // r14d
  unsigned int v17; // esi
  __int64 v18; // r15
  __int64 v19; // rdx
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int128 v27; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v30; // [rsp+98h] [rbp-68h]
  _QWORD *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+B4h] [rbp-4Ch]
  HANDLE v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int16 v36; // [rsp+3D0h] [rbp+2D0h]
  __int16 v37; // [rsp+3D2h] [rbp+2D2h]
  int v38; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v39; // [rsp+3E4h] [rbp+2E4h]
  HANDLE v40; // [rsp+3F0h] [rbp+2F0h]
  unsigned int v41; // [rsp+3FCh] [rbp+2FCh]
  __int16 v42; // [rsp+700h] [rbp+600h]
  _BYTE v43[4]; // [rsp+710h] [rbp+610h] BYREF
  __int64 v44; // [rsp+714h] [rbp+614h]
  HANDLE v45; // [rsp+720h] [rbp+620h]

  v3 = 0;
  v31 = a3;
  v4 = (struct _EX_RUNDOWN_REF *)a2;
  v30 = (struct _EX_RUNDOWN_REF *)a2;
  v5 = a1;
  v29 = a1;
  if ( *(int *)(PopEtGlobals + 1096) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 648) )
    {
      v6 = *(_DWORD *)(a2 + 500) & 0x4000008;
      Handle = 0LL;
      if ( v6 == 0x4000000 && (int)PsAcquireProcessExitSynchronization((struct _EX_RUNDOWN_REF *)a2) >= 0 )
      {
        if ( ObOpenObjectByPointer(v4, 0, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
        {
          v7 = Handle;
          if ( Handle )
          {
            v8 = 0LL;
            v9 = 0;
            v23 = 0;
            if ( *(_DWORD *)(v5 + 648) )
            {
              do
              {
                memset_0(v43, 0, 0x328uLL);
                v10 = *(_QWORD *)(PopEtGlobals + 1088);
                v28 = 0LL;
                v27 = 0LL;
                v21 = 0;
                v26 = v10;
                v11 = 5LL * v9;
                v24 = *(_QWORD *)(v5 + 656);
                v25 = v11;
                v44 = *(_QWORD *)(v24 + 20LL * v9 + 4);
                v45 = v7;
                if ( (int)guard_dispatch_icall_no_overrides((__int64)v43, v12) >= 0 )
                {
                  LODWORD(v27) = *(_DWORD *)(v24 + 20LL * v9);
                  *((_QWORD *)&v27 + 1) = &v21;
                  DWORD1(v27) = 30;
                  LODWORD(v28) = 4;
                  if ( (int)guard_dispatch_icall_no_overrides((__int64)&v27, 0LL) >= 0 )
                  {
                    v13 = 0;
                    if ( v21 )
                    {
                      v14 = v24;
                      do
                      {
                        memset_0(&v38, 0, 0x328uLL);
                        v39 = *(_QWORD *)(v14 + 4 * v11 + 4);
                        v40 = Handle;
                        v38 = 11;
                        v42 = v13;
                        if ( (int)guard_dispatch_icall_no_overrides((__int64)&v38, v15) >= 0 )
                        {
                          v16 = 0;
                          if ( v41 )
                          {
                            v17 = v41;
                            v18 = v25;
                            do
                            {
                              memset_0(&v32, 0, 0x328uLL);
                              v32 = 19;
                              v36 = v13;
                              v37 = v16;
                              v33 = *(_QWORD *)(v24 + 4 * v18 + 4);
                              v34 = Handle;
                              if ( (int)guard_dispatch_icall_no_overrides((__int64)&v32, v19) >= 0 )
                                v8 += v35;
                              ++v16;
                            }
                            while ( v16 < v17 );
                            v11 = v18;
                            v14 = v24;
                          }
                          else
                          {
                            v11 = v25;
                          }
                        }
                        ++v13;
                      }
                      while ( v13 < v21 );
                      v9 = v23;
                      v5 = v29;
                    }
                  }
                }
                v7 = Handle;
                v23 = ++v9;
              }
              while ( v9 < *(_DWORD *)(v5 + 648) );
              v4 = v30;
            }
            ObCloseHandle(v7, 1);
            v3 = 1;
            *v31 = v8;
          }
        }
        ExReleaseRundownProtection_0(v4 + 61);
      }
    }
  }
  return v3;
}
