/*
 * XREFs of PpmEventWpsInitTableSnapshots @ 0x1407E15E4
 * Callers:
 *     PpmHeteroCompleteInitTablePhase @ 0x1407DA80C (PpmHeteroCompleteInitTablePhase.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PpmHeteroCheckInitTableBitIntel @ 0x1407E8890 (PpmHeteroCheckInitTableBitIntel.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventWpsInitTableSnapshots(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  _BYTE *Pool2; // rdi
  unsigned int v3; // edx
  unsigned int v4; // r15d
  unsigned int v5; // r9d
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r11
  unsigned int v11; // r10d
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-25h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-21h] BYREF
  int v19; // [rsp+44h] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  unsigned int *v21; // [rsp+58h] [rbp-9h]
  __int64 v22; // [rsp+60h] [rbp-1h]
  unsigned int *v23; // [rsp+68h] [rbp+7h]
  __int64 v24; // [rsp+70h] [rbp+Fh]
  int *v25; // [rsp+78h] [rbp+17h]
  __int64 v26; // [rsp+80h] [rbp+1Fh]
  _BYTE *v27; // [rsp+88h] [rbp+27h]
  int v28; // [rsp+90h] [rbp+2Fh]
  int v29; // [rsp+94h] [rbp+33h]

  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_INIT_TABLE_RUNDOWN;
  if ( !a1 )
    v1 = &PPM_ETW_WPS_INIT_TABLE_CHANGED;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, v1) )
    {
      if ( PpmHeteroInitTableCollection )
      {
        v17 = *(_DWORD *)PpmHeteroInitTableCollection;
        v16 = *(_DWORD *)(PpmHeteroInitTableCollection + 4);
        v18 = *(_DWORD *)(PpmHeteroInitTableCollection + 8);
        v19 = v17 * v16 * v18;
        Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          v3 = v18;
          UserData.Ptr = (ULONGLONG)&v18;
          v4 = 0;
          *(_QWORD *)&UserData.Size = 4LL;
          v21 = &v17;
          v5 = 0;
          v22 = 4LL;
          v23 = &v16;
          v25 = &v19;
          v24 = 4LL;
          v26 = 4LL;
          if ( v18 )
          {
            v6 = v16;
            v7 = v17;
            do
            {
              v8 = PpmHeteroInitTableCollection;
              v9 = v5 + 1LL;
              v10 = 3 * v9;
              if ( *(_QWORD *)(PpmHeteroInitTableCollection + 24 * v9) )
              {
                if ( *(_QWORD *)(PpmHeteroInitTableCollection + 24 * v9 + 8) )
                {
                  if ( *(_QWORD *)(PpmHeteroInitTableCollection + 24 * v9 + 16) )
                  {
                    v11 = 0;
                    if ( v6 )
                    {
                      do
                      {
                        v12 = 0;
                        if ( v7 )
                        {
                          do
                          {
                            v13 = v4++;
                            v14 = 15 * v13;
                            v15 = v11 + v12 * v6;
                            *(_DWORD *)&Pool2[v14 + 4] = v12++;
                            *(_DWORD *)&Pool2[v14] = v5;
                            *(_DWORD *)&Pool2[v14 + 8] = v11;
                            Pool2[v14 + 12] = *(_BYTE *)(v15 + *(_QWORD *)(v8 + 8 * v10));
                            Pool2[v14 + 13] = *(_BYTE *)((unsigned int)v15 + *(_QWORD *)(v8 + 8 * v10 + 8));
                            Pool2[v14 + 14] = *(_BYTE *)((unsigned int)v15 + *(_QWORD *)(v8 + 8 * v10 + 16));
                            v7 = v17;
                            v6 = v16;
                          }
                          while ( v12 < v17 );
                        }
                        ++v11;
                      }
                      while ( v11 < v6 );
                      v3 = v18;
                    }
                  }
                }
              }
              ++v5;
            }
            while ( v5 < v3 );
          }
          v27 = Pool2;
          v29 = 0;
          v28 = 15 * v19;
          EtwWrite(PpmEtwHandle, v1, 0LL, 5u, &UserData);
          ExFreePoolWithTag(Pool2, 0x654D5050u);
        }
      }
    }
  }
}
