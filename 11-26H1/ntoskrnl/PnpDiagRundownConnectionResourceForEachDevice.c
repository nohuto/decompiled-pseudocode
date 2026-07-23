/*
 * XREFs of PnpDiagRundownConnectionResourceForEachDevice @ 0x140AFD980
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagRundownConnectionResourceForEachDevice(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 i; // rdi
  __int64 v5; // rsi
  _DWORD *v6; // r14
  unsigned int v7; // ecx
  unsigned int v8; // [rsp+38h] [rbp-19h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+58h] [rbp+7h]
  __int64 v12; // [rsp+60h] [rbp+Fh]
  unsigned int *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  __int64 v15; // [rsp+78h] [rbp+27h]
  unsigned int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]

  v1 = *(_DWORD **)(a1 + 424);
  v9 = 0LL;
  v8 = 0;
  if ( v1 )
  {
    for ( i = 0LL; (unsigned int)i < *v1; i = (unsigned int)(i + 1) )
    {
      v5 = 0LL;
      v6 = &v1[9 * i];
      if ( v6[4] )
      {
        do
        {
          if ( LOBYTE(v6[5 * v5 + 5]) == 0x84 )
          {
            HIDWORD(v9) = v6[5 * v5 + 8];
            v7 = *(unsigned __int16 *)(a1 + 40);
            LODWORD(v9) = v6[5 * v5 + 7];
            UserData.Ptr = a1 + 32;
            v11 = &v9;
            v8 = v7 >> 1;
            v13 = &v8;
            v15 = *(_QWORD *)(a1 + 48);
            v16 = v7;
            *(_QWORD *)&UserData.Size = 8LL;
            v12 = 8LL;
            v14 = 4LL;
            v17 = 0;
            EtwWrite(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ConnectionResource, 0LL, 4u, &UserData);
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < v6[4] );
      }
    }
  }
  return 0LL;
}
