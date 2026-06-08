/*
 * XREFs of EnumerateControlMethods @ 0x14002D664
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EnumerateControlMethods(__int64 a1, _DWORD *a2)
{
  int v3; // r15d
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 Pool2; // rax
  _DWORD *v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // eax
  _DWORD *v13; // r9
  unsigned int v14; // r11d
  __int64 v15; // rsi
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 v18; // rcx
  char v19; // r10
  int v20; // ecx
  unsigned int v21; // edx
  unsigned __int8 *v22; // r10
  __int64 v23; // r8
  int v24; // eax
  __int64 i; // rax
  __int64 v27; // [rsp+50h] [rbp-39h] BYREF
  __int128 *v28; // [rsp+58h] [rbp-31h]
  __int64 v29; // [rsp+60h] [rbp-29h]
  __int64 v30; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v31[3]; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v32[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v33; // [rsp+90h] [rbp+7h]
  __int128 v34; // [rsp+98h] [rbp+Fh] BYREF
  int v35; // [rsp+A8h] [rbp+1Fh]

  v30 = 0LL;
  v3 = 0;
  v32[0] = 1214866753;
  v31[1] = v32;
  v35 = 0;
  v28 = &v34;
  v5 = *(_QWORD *)(a1 + 16);
  v33 = 0LL;
  v32[1] = 1;
  v31[0] = 1LL;
  v31[2] = 16LL;
  v34 = 0LL;
  v27 = 1LL;
  v29 = 20LL;
  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v5,
         0LL,
         3325984LL,
         v31,
         &v27,
         0LL,
         0LL) == -2147483643
    && (_DWORD)v34 == 1198089537
    && (v6 = DWORD1(v34), DWORD1(v34) >= 0x14) )
  {
    v7 = DWORD1(v34);
    Pool2 = ExAllocatePool2(256LL, DWORD1(v34), 1919119952LL);
    v9 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v27 = 1LL;
      v28 = (__int128 *)Pool2;
      v29 = v6;
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
              WdfDriverGlobals,
              v11,
              0LL,
              3325984LL,
              v31,
              &v27,
              0LL,
              &v30);
      if ( v10 >= 0 )
      {
        if ( *v9 == 1198089537 && (v12 = v9[1]) != 0 && v30 == v7 )
        {
          v13 = v9 + 2;
          if ( v12 > 1 )
          {
            v14 = v9[3];
            v15 = v12 - 1;
            do
            {
              v13 = (_DWORD *)((char *)v13 + v14 + 8);
              v16 = 0;
              v17 = 0;
              v18 = 0LL;
              v14 = v13[1];
              while ( (unsigned int)v18 < v14 )
              {
                v19 = *((_BYTE *)v13 + v18 + 8);
                if ( v19 == 46 )
                {
                  v16 = v18;
                }
                else if ( !v19 )
                {
                  v17 = v18;
                  break;
                }
                v18 = (unsigned int)(v18 + 1);
              }
              v20 = 0;
              if ( v17 > v16 && v17 - v16 - 1 <= 4 )
              {
                v21 = v17 - 1;
                if ( v21 > v16 )
                {
                  v22 = (unsigned __int8 *)v13 + v21 + 8;
                  v23 = v21 - v16;
                  do
                  {
                    v24 = *v22--;
                    v20 = v24 + (v20 << 8);
                    --v23;
                  }
                  while ( v23 );
                }
              }
              for ( i = 0LL; (unsigned int)i < 0x10; i = (unsigned int)(i + 1) )
              {
                if ( *(_DWORD *)&AcpiFeatureMethods[8 * i] == v20 )
                {
                  v3 |= *(_DWORD *)&AcpiFeatureMethods[8 * i + 4];
                  break;
                }
              }
              --v15;
            }
            while ( v15 );
          }
        }
        else
        {
          v10 = -1072431089;
        }
      }
      ExFreePoolWithTag(v9, (ULONG)1919119952);
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1072431089;
  }
  *a2 = v3;
  return (unsigned int)v10;
}
