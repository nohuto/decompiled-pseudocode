/*
 * XREFs of StorEtwLogoRequestServiceTimeEventData @ 0x14004EE08
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 * Callees:
 *     McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer @ 0x1400B00E8 (McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall StorEtwLogoRequestServiceTimeEventData(_QWORD *a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  int v6; // esi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  char v10; // r15
  _QWORD *v11; // rdi
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // r11
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  unsigned int v22; // r11d
  char v23; // r10
  __int64 i; // r9
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // ecx
  char v28; // dl
  char v29; // r10
  void *v30; // rdx
  __int64 v31; // r9
  char v32; // [rsp+28h] [rbp-A0h]
  char v33; // [rsp+30h] [rbp-98h]
  char v34; // [rsp+38h] [rbp-90h]
  int v35; // [rsp+40h] [rbp-88h]
  __int64 v36; // [rsp+48h] [rbp-80h]
  char v37; // [rsp+50h] [rbp-78h]
  __int64 v38; // [rsp+58h] [rbp-70h]
  __int64 v39; // [rsp+60h] [rbp-68h]
  char v40; // [rsp+68h] [rbp-60h]
  char v41; // [rsp+70h] [rbp-58h]
  __int64 v42; // [rsp+78h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  int v44; // [rsp+D0h] [rbp+8h]
  union _LARGE_INTEGER v46; // [rsp+E8h] [rbp+20h] BYREF

  result = (__int64)&retaddr;
  v4 = a1[21];
  LOBYTE(v5) = 0;
  v6 = 0;
  v46.QuadPart = 0LL;
  LOBYTE(v7) = 0;
  v44 = 0;
  LOBYTE(v8) = 0;
  v9 = 0LL;
  v10 = a2;
  v11 = a1;
  if ( !a2 )
  {
    if ( UseQPCTime )
      result = KeQueryPerformanceCounter(&v46).QuadPart;
    else
      result = KeQueryUnbiasedInterruptTime();
    if ( result <= 0 || (v12 = v11[87], result >= v12) )
    {
      v12 = v11[87];
      v13 = result - v12;
    }
    else
    {
      v13 = result - v12 - 1;
    }
    LODWORD(a1) = v46.LowPart;
    if ( UseQPCTime )
    {
      if ( v46.QuadPart && v13 )
      {
        v14 = 1000 * (v13 % v46.QuadPart);
        result = 10000 * (v14 % v46.QuadPart) / v46.QuadPart;
        v7 = result + 10000 * (v14 / v46.QuadPart + 1000 * (v13 / v46.QuadPart));
      }
    }
    else
    {
      LOBYTE(v7) = v13;
    }
    v15 = v11[88];
    if ( v15 >= v12 )
    {
      v16 = v15 - v12;
      if ( UseQPCTime )
      {
        if ( v46.QuadPart && v16 )
        {
          v17 = 1000 * (v16 % v46.QuadPart);
          result = 10000 * (v17 % v46.QuadPart) / v46.QuadPart;
          v8 = result + 10000 * (v17 / v46.QuadPart + 1000 * (v16 / v46.QuadPart));
        }
      }
      else
      {
        LOBYTE(v8) = v15 - v12;
      }
    }
    if ( v15 && (v18 = v11[89], v18 >= v15) )
    {
      v19 = v18 - v15;
    }
    else
    {
      v21 = v11[89];
      if ( v21 < v12 )
      {
LABEL_30:
        v10 = 0;
        goto LABEL_31;
      }
      v19 = v21 - v12;
    }
    if ( UseQPCTime )
    {
      if ( v46.QuadPart && v19 )
      {
        v20 = 1000 * (v19 % v46.QuadPart);
        result = 10000 * (v20 % v46.QuadPart) / v46.QuadPart;
        v5 = result + 10000 * (v20 / v46.QuadPart + 1000 * (v19 / v46.QuadPart));
      }
    }
    else
    {
      LOBYTE(v5) = v19;
    }
    goto LABEL_30;
  }
LABEL_31:
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v4 + 20) )
    {
      v22 = *(_DWORD *)(v4 + 56);
      v23 = 0;
      for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
      {
        a1 = (_QWORD *)*(unsigned int *)(v4 + 4 * i + 120);
        if ( (unsigned int)a1 >= 0x80 )
        {
          v25 = *(unsigned int *)(v4 + 16);
          if ( (unsigned int)a1 < (unsigned int)v25 )
          {
            v26 = (unsigned int)a1;
            v27 = *(_DWORD *)((char *)a1 + v4) - 64;
            if ( v27 )
            {
              LODWORD(a1) = v27 - 1;
              if ( (_DWORD)a1 )
              {
                if ( (_DWORD)a1 == 1 )
                {
                  LODWORD(a1) = v26 + 40;
                  if ( v26 + 40 <= v25 )
                  {
                    v6 = *(_DWORD *)(v26 + v4 + 12);
                    if ( v6 )
                      v9 = v26 + v4 + 32;
                    break;
                  }
                }
              }
              else
              {
                LODWORD(a1) = v26 + 56;
                if ( v26 + 56 <= v25 )
                {
                  v23 = 1;
                  LOBYTE(v44) = *(_BYTE *)(v26 + v4 + 10);
                  if ( !(_BYTE)v44 )
                    goto LABEL_51;
                  v6 = v44;
                  v9 = v26 + v4 + 24;
                }
              }
            }
            else
            {
              LODWORD(a1) = v26 + 40;
              if ( v26 + 40 <= v25 )
              {
                LOBYTE(v44) = *(_BYTE *)(v26 + v4 + 10);
                if ( (_BYTE)v44 )
                  v9 = v26 + v4 + 24;
LABEL_51:
                v6 = v44;
                break;
              }
            }
            if ( v23 )
              break;
          }
        }
      }
    }
    result = *(unsigned int *)(v4 + 52);
    LOBYTE(a1) = *(_BYTE *)(result + v4 + 8);
    v28 = *(_BYTE *)(result + v4 + 9);
    v29 = *(_BYTE *)(result + v4 + 10);
  }
  else
  {
    LOBYTE(a1) = *(_BYTE *)(v4 + 5);
    v9 = v4 + 72;
    v28 = *(_BYTE *)(v4 + 6);
    v6 = 16;
    v29 = *(_BYTE *)(v4 + 7);
  }
  if ( v10 )
  {
    if ( (byte_140173443 & 2) == 0 )
      return result;
    LOBYTE(v42) = 0;
    v41 = 0;
    v40 = 0;
    v39 = v11[96];
    v38 = v11[20];
    v37 = *(_BYTE *)(v4 + 3);
    v36 = v9;
    v35 = v6;
    v34 = a3;
    v33 = v29;
    v32 = v28;
    v30 = &EventLogoPerformanceMeasurementTarget;
  }
  else
  {
    if ( (byte_140173443 & 2) == 0 )
      return result;
    v42 = v11[90];
    v41 = v5;
    v40 = v8;
    v39 = v11[96];
    v38 = v11[20];
    v37 = *(_BYTE *)(v4 + 3);
    v36 = v9;
    v35 = v6;
    v34 = v7;
    v33 = v29;
    v32 = v28;
    v30 = &EventLogoPerformanceMeasurement;
  }
  v31 = v11[27];
  LOBYTE(v31) = *(_BYTE *)(v31 + 56);
  return McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer(
           (_DWORD)a1,
           (_DWORD)v30,
           (int)v11 + 728,
           v31,
           (char)a1,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42);
}
