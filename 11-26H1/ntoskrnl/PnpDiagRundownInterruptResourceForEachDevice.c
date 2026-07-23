/*
 * XREFs of PnpDiagRundownInterruptResourceForEachDevice @ 0x1407A6430
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagRundownInterruptResourceForEachDevice(__int64 a1)
{
  unsigned int *v1; // rbx
  unsigned int i; // edi
  unsigned int v4; // esi
  unsigned int *v5; // r14
  unsigned int v6; // ecx
  __int16 v8; // [rsp+38h] [rbp-59h] BYREF
  __int16 v9; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-51h] BYREF
  __int64 v11; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  char *v13; // [rsp+68h] [rbp-29h]
  __int64 v14; // [rsp+70h] [rbp-21h]
  __int16 *v15; // [rsp+78h] [rbp-19h]
  __int64 v16; // [rsp+80h] [rbp-11h]
  __int16 *v17; // [rsp+88h] [rbp-9h]
  __int64 v18; // [rsp+90h] [rbp-1h]
  __int64 *v19; // [rsp+98h] [rbp+7h]
  __int64 v20; // [rsp+A0h] [rbp+Fh]
  unsigned int *v21; // [rsp+A8h] [rbp+17h]
  __int64 v22; // [rsp+B0h] [rbp+1Fh]
  __int64 v23; // [rsp+B8h] [rbp+27h]
  unsigned int v24; // [rsp+C0h] [rbp+2Fh]
  int v25; // [rsp+C4h] [rbp+33h]

  v1 = *(unsigned int **)(a1 + 424);
  v11 = 0LL;
  v8 = 0;
  v10 = 0;
  v9 = 0;
  if ( v1 )
  {
    for ( i = 0; i < *v1; ++i )
    {
      v4 = 0;
      v5 = &v1[8 * i + 1 + i];
      if ( v5[3] )
      {
        do
        {
          if ( LOBYTE(v5[5 * v4 + 4]) == 2 )
          {
            v8 = HIWORD(v5[5 * v4 + 5]);
            v9 = v5[5 * v4 + 6];
            v11 = *(_QWORD *)&v5[5 * v4 + 7];
            UserData.Ptr = a1 + 32;
            v6 = *(unsigned __int16 *)(a1 + 40);
            v13 = (char *)&v5[5 * v4 + 4] + 2;
            v15 = &v8;
            v17 = &v9;
            v19 = &v11;
            v10 = v6 >> 1;
            v21 = &v10;
            v23 = *(_QWORD *)(a1 + 48);
            v24 = v6;
            *(_QWORD *)&UserData.Size = 8LL;
            v14 = 2LL;
            v16 = 2LL;
            v18 = 2LL;
            v20 = 8LL;
            v22 = 4LL;
            v25 = 0;
            EtwWrite(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_InterruptResource, 0LL, 7u, &UserData);
          }
          ++v4;
        }
        while ( v4 < v5[3] );
      }
    }
  }
  return 0LL;
}
