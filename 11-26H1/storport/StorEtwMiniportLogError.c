/*
 * XREFs of StorEtwMiniportLogError @ 0x140052C80
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     StorpTelemetryMiniportLogError @ 0x14004DE50 (StorpTelemetryMiniportLogError.c)
 *     RaidAdapterGetFirstUnit @ 0x140061318 (RaidAdapterGetFirstUnit.c)
 *     McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer @ 0x140079324 (McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorEtwMiniportLogError(__int64 a1, __int64 a2, int a3, const wchar_t *a4, int a5, __int64 a6)
{
  char v6; // r12
  unsigned int v7; // ebx
  char v8; // r13
  char v9; // r14
  int *v10; // rsi
  __int64 v11; // r11
  __int64 *Unit; // rax
  __int64 v13; // r9
  __int64 FirstUnit; // rdi
  int *v15; // r15
  const int *v16; // r8
  int v17; // eax
  const int *v18; // rdx
  const int *v19; // rcx
  int v20; // r14d
  unsigned int v21; // r14d
  int *v22; // rcx
  int *v23; // rax
  char v25; // [rsp+90h] [rbp-59h]
  int v26; // [rsp+94h] [rbp-55h]
  int *v28; // [rsp+A0h] [rbp-49h] BYREF
  int *v29; // [rsp+A8h] [rbp-41h] BYREF
  const wchar_t *v30; // [rsp+B0h] [rbp-39h]
  __int64 v31; // [rsp+B8h] [rbp-31h]
  __int128 v32; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-19h] BYREF
  __int128 v34; // [rsp+E0h] [rbp-9h] BYREF

  v6 = -1;
  v7 = 0;
  v30 = a4;
  v31 = a6;
  v28 = 0LL;
  v8 = -1;
  v29 = 0LL;
  v9 = -1;
  v25 = -1;
  HIBYTE(v26) = -1;
  v32 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( (byte_140173444 & 0x10) != 0 )
  {
    RaidpPortGetAdapter(a1, &v28, &v29);
    v10 = v28;
    if ( v28 )
    {
      RaidDriverGetName(*((_QWORD *)v28 + 2), (__int64)&v32);
      v33 = *(_OWORD *)(v10 + 1282);
      if ( v11 )
      {
        if ( *(_WORD *)v11 != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)(v11 + 4) < 4u )
          return (unsigned int)-1056964602;
        v9 = *(_BYTE *)(v11 + 10);
        v6 = *(_BYTE *)(v11 + 8);
        v8 = *(_BYTE *)(v11 + 9);
        LOBYTE(v26) = v6;
        BYTE1(v26) = v8;
        BYTE2(v26) = v9;
        v25 = v9;
        Unit = RaidAdapterFindUnit((__int64)v10, v26);
        FirstUnit = (__int64)Unit;
        if ( !Unit )
          return (unsigned int)-1056964602;
        v34 = *(_OWORD *)(Unit + 263);
      }
      else
      {
        FirstUnit = RaidAdapterGetFirstUnit(v10);
      }
      v15 = (int *)&dword_140154ADC;
      if ( (byte_140173444 & 0x10) != 0 )
      {
        if ( FirstUnit )
        {
          v16 = (const int *)(FirstUnit + 242);
          LOBYTE(v17) = *(_BYTE *)(FirstUnit + 506) & 1;
          v18 = (const int *)(FirstUnit + 177);
          v19 = (const int *)(FirstUnit + 168);
        }
        else
        {
          v16 = &dword_140154ADC;
          v17 = *((unsigned __int8 *)v10 + 104) >> 7;
          v18 = &dword_140154ADC;
          v19 = &dword_140154ADC;
        }
        v20 = McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer(
                (_DWORD)v19,
                (_DWORD)v18,
                (_DWORD)v16,
                v10[14],
                v6,
                v8,
                v9,
                (__int64)&v34,
                (__int64)&v33,
                *((__int64 *)&v32 + 1),
                (__int64)v19,
                (__int64)v18,
                (__int64)v16,
                v17,
                a5,
                v31,
                a3,
                (__int64)v30);
      }
      else
      {
        v20 = 0;
      }
      v21 = (v20 >> 31) & 0xC1000001;
      if ( FirstUnit )
      {
        v22 = (int *)(FirstUnit + 242);
        v23 = (int *)(FirstUnit + 177);
        v15 = (int *)(FirstUnit + 168);
      }
      else
      {
        v22 = (int *)&dword_140154ADC;
        v23 = (int *)&dword_140154ADC;
      }
      LOBYTE(v13) = v25;
      StorpTelemetryMiniportLogError(
        (unsigned int)v10[14],
        v6,
        v8,
        v13,
        (__int64)&v34,
        (__int64)&v33,
        *((const wchar_t **)&v32 + 1),
        v15,
        v23,
        v22,
        a5,
        v31,
        a3,
        v30);
      return v21;
    }
    else if ( !v29 )
    {
      return (unsigned int)-1056964602;
    }
  }
  return v7;
}
