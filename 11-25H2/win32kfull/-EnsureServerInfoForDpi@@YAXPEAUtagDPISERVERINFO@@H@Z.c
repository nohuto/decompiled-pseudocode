/*
 * XREFs of ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1401E71D4
 * Callers:
 *     GetDPIServerInfoForDpi @ 0x140041CA8 (GetDPIServerInfoForDpi.c)
 * Callees:
 *     DeleteMetricsFont @ 0x14003FD0C (DeleteMetricsFont.c)
 *     GreTextInitialized @ 0x1400C006C (GreTextInitialized.c)
 *     CreateScaledFont @ 0x1401E7300 (CreateScaledFont.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall EnsureServerInfoForDpi(struct tagDPISERVERINFO *a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  struct HLFONT__ *v10; // rcx
  struct HLFONT__ *v11; // rcx
  _BYTE v12[8]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v13; // [rsp+50h] [rbp-11h] BYREF
  int v14; // [rsp+58h] [rbp-9h] BYREF
  int v15; // [rsp+5Ch] [rbp-5h] BYREF
  __int64 v16; // [rsp+60h] [rbp-1h] BYREF
  int v17; // [rsp+68h] [rbp+7h] BYREF
  int v18; // [rsp+6Ch] [rbp+Bh] BYREF
  _BYTE v19[72]; // [rsp+70h] [rbp+Fh] BYREF

  if ( !*(_DWORD *)a1 )
  {
    v4 = Get96DpiServerInfo();
    if ( (unsigned int)GreTextInitialized(v6, v5, v7) )
    {
      memset_0(v12, 0, 0x68uLL);
      if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v4 + 8), &v13, v8, a2, &v14, &v15, 0LL) )
      {
        v10 = (struct HLFONT__ *)*((_QWORD *)a1 + 1);
        *((_DWORD *)a1 + 4) = v14;
        *((_DWORD *)a1 + 5) = v15;
        *((_QWORD *)a1 + 1) = v13;
        DeleteMetricsFont(v10);
      }
      if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v4 + 24), &v16, v9, a2, &v17, &v18, v19) )
      {
        v11 = (struct HLFONT__ *)*((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 8) = v17;
        *((_DWORD *)a1 + 9) = v18;
        *((_QWORD *)a1 + 3) = v16;
        DeleteMetricsFont(v11);
      }
      *(_DWORD *)a1 = 1;
    }
    *((_DWORD *)a1 + 1) = (int)(*(_DWORD *)(v4 + 4) * a2 + 48) / 96;
  }
}
