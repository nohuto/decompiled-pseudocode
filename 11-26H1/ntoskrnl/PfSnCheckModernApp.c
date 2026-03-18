/*
 * XREFs of PfSnCheckModernApp @ 0x1409E923C
 * Callers:
 *     PfSnCalculateScenarioNameAndHash @ 0x1409E8E38 (PfSnCalculateScenarioNameAndHash.c)
 *     PfSnBeginAppLaunch @ 0x1409E9DD0 (PfSnBeginAppLaunch.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     RtlQueryPackageIdentity @ 0x140460890 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall PfSnCheckModernApp(int *a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  wchar_t *v7; // rbx
  int v8; // ebp
  _KPROCESS *Process; // r14
  ULONG_PTR v10; // r15
  int PackageIdentity; // eax
  unsigned int v12; // esi
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // r10
  unsigned __int8 *v22; // r10
  size_t v23; // r11
  size_t v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  size_t v27; // r11
  size_t v28; // r11
  __int64 v30; // r10
  __int64 v31; // r10
  __int64 v32; // r10
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 v35; // r11
  __int64 v36; // r11
  __int64 v37; // r11
  size_t v38[2]; // [rsp+30h] [rbp-F8h] BYREF
  wchar_t v39[72]; // [rsp+40h] [rbp-E8h] BYREF

  v7 = (wchar_t *)a3;
  v8 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, a3, a4);
  v38[0] = 130LL;
  PackageIdentity = RtlQueryPackageIdentity(v10, v7, (size_t *)a4, v39, v38, 0LL);
  v12 = PackageIdentity;
  if ( PackageIdentity >= 0 )
  {
    v14 = 314159LL;
    v15 = (__int64)&a4->Thread[-1].Padding[4] + 6;
    v16 = 314159LL;
    v13 = 1;
    if ( v15 >= 8 )
    {
      v17 = (unsigned __int64)v15 >> 3;
      v15 -= 8 * ((unsigned __int64)v15 >> 3);
      do
      {
        v18 = *((unsigned __int8 *)v7 + 6)
            + 37
            * (*((unsigned __int8 *)v7 + 5)
             + 37
             * (*((unsigned __int8 *)v7 + 4)
              + 37
              * (*((unsigned __int8 *)v7 + 3)
               + 37
               * (*((unsigned __int8 *)v7 + 2)
                + 37 * (*((unsigned __int8 *)v7 + 1) + 37 * (*(unsigned __int8 *)v7 + 37 * v16))))));
        v19 = *((unsigned __int8 *)v7 + 7);
        v7 += 4;
        v16 = v19 + 37 * v18;
        --v17;
      }
      while ( v17 );
    }
    v20 = v15 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v30 = v21 - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                if ( v33 != 1 )
                {
LABEL_11:
                  v22 = (unsigned __int8 *)v39;
                  v23 = v38[0] - 2;
                  if ( (signed __int64)(v38[0] - 2) >= 8 )
                  {
                    v24 = v23 >> 3;
                    v23 -= 8 * (v23 >> 3);
                    do
                    {
                      v25 = v22[6]
                          + 37
                          * (v22[5]
                           + 37 * (v22[4] + 37 * (v22[3] + 37 * (v22[2] + 37 * (v22[1] + 37 * (*v22 + 37 * v14))))));
                      v26 = v22[7];
                      v22 += 8;
                      v14 = v26 + 37 * v25;
                      --v24;
                    }
                    while ( v24 );
                  }
                  v27 = v23 - 1;
                  if ( v27 )
                  {
                    v28 = v27 - 1;
                    if ( v28 )
                    {
                      v34 = v28 - 1;
                      if ( v34 )
                      {
                        v35 = v34 - 1;
                        if ( v35 )
                        {
                          v36 = v35 - 1;
                          if ( v36 )
                          {
                            v37 = v36 - 1;
                            if ( v37 )
                            {
                              if ( v37 != 1 )
                                goto LABEL_18;
                              LODWORD(v14) = *v22++ + 37 * v14;
                            }
                            LODWORD(v14) = *v22++ + 37 * v14;
                          }
                          LODWORD(v14) = *v22++ + 37 * v14;
                        }
                        LODWORD(v14) = *v22++ + 37 * v14;
                      }
                      LODWORD(v14) = *v22++ + 37 * v14;
                    }
                    LODWORD(v14) = *v22++ + 37 * v14;
                  }
                  LODWORD(v14) = *v22 + 37 * v14;
LABEL_18:
                  v8 = v14 + v16;
LABEL_19:
                  *a2 = v8;
                  v12 = 0;
                  *a1 = v13;
                  goto LABEL_20;
                }
                LODWORD(v16) = *(unsigned __int8 *)v7 + 37 * v16;
                v7 = (wchar_t *)((char *)v7 + 1);
              }
              LODWORD(v16) = *(unsigned __int8 *)v7 + 37 * v16;
              v7 = (wchar_t *)((char *)v7 + 1);
            }
            LODWORD(v16) = *(unsigned __int8 *)v7 + 37 * v16;
            v7 = (wchar_t *)((char *)v7 + 1);
          }
          LODWORD(v16) = *(unsigned __int8 *)v7 + 37 * v16;
          v7 = (wchar_t *)((char *)v7 + 1);
        }
        LODWORD(v16) = *(unsigned __int8 *)v7 + 37 * v16;
        v7 = (wchar_t *)((char *)v7 + 1);
      }
      LODWORD(v16) = *(unsigned __int8 *)v7 + 37 * v16;
      v7 = (wchar_t *)((char *)v7 + 1);
    }
    LODWORD(v16) = *(unsigned __int8 *)v7 + 37 * v16;
    goto LABEL_11;
  }
  v13 = 0;
  if ( PackageIdentity == -1073741275 )
    goto LABEL_19;
LABEL_20:
  ObFastDereferenceObject((signed __int64 *)&Process[1].ActiveProcessors, v10, 0x746C6644u);
  return v12;
}
