/*
 * XREFs of PnpCallDriverQueryServiceHelper @ 0x140970C4C
 * Callers:
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 * Callees:
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140970EC4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     _CmGetInstallerClassRegProp @ 0x1409738BC (_CmGetInstallerClassRegProp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCallDriverQueryServiceHelper(
        PVOID *a1,
        ULONG *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        char a7,
        int a8,
        char a9,
        __int64 a10)
{
  char v10; // r15
  char *v11; // rdi
  __int64 v12; // rsi
  ULONG v15; // ecx
  int v17; // r13d
  PVOID v18; // r8
  int ObjectProperty; // eax
  int v20; // ecx
  int v22; // r10d
  unsigned int v23; // edx
  _WORD *v24; // rbx
  int v25; // r14d
  char v26; // si
  __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // r8d
  __int64 Pool2; // rax
  int InstallerClassRegProp; // eax
  int v32; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v33[3]; // [rsp+64h] [rbp-Ch] BYREF
  ULONG v35; // [rsp+C8h] [rbp+58h] BYREF

  v10 = a7;
  v11 = a6;
  v12 = a5;
  v32 = 0;
  v15 = *a2;
  v35 = *a2;
  v17 = 0;
  v18 = *a1;
  v33[0] = 0;
  if ( a4 )
  {
    v17 = (a7 != 0) + 1;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a5,
                       v17,
                       a6,
                       0LL,
                       a4,
                       v33,
                       (__int64)v18,
                       v15,
                       (__int64)&v35,
                       0);
  }
  else if ( a7 )
  {
    ObjectProperty = CmGetInstallerClassRegProp(
                       PiPnpRtlCtx,
                       a5,
                       (_DWORD)a6,
                       a3,
                       (__int64)&v32,
                       (__int64)v18,
                       (__int64)&v35);
  }
  else
  {
    ObjectProperty = CmGetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       a5,
                       (__int64)a6,
                       a3,
                       (__int64)&v32,
                       (__int64)v18,
                       (__int64)&v35,
                       0);
  }
  v20 = ObjectProperty;
  if ( ObjectProperty == -1073741789 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a2 = v35;
    Pool2 = ExAllocatePool2(0x100uLL);
    *a1 = (PVOID)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( a4 )
    {
      v20 = PnpGetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v12, v17, v11, 0LL, a4, v33, Pool2, v35, (__int64)&v35, 0);
    }
    else
    {
      if ( v10 )
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  PiPnpRtlCtx,
                                  v12,
                                  (_DWORD)v11,
                                  a3,
                                  (__int64)&v32,
                                  Pool2,
                                  (__int64)&v35);
      else
        InstallerClassRegProp = CmGetDeviceRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  v12,
                                  (__int64)v11,
                                  a3,
                                  (__int64)&v32,
                                  Pool2,
                                  (__int64)&v35,
                                  0);
      v20 = InstallerClassRegProp;
    }
  }
  if ( v20 >= 0 )
  {
    if ( a4 )
    {
      if ( v33[0] != 18 )
      {
        if ( v33[0] != 8210 )
        {
          v22 = 0;
          v32 = 0;
          return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v22, (unsigned int)*a1, v35, a10, a8, a9);
        }
        v32 = 7;
LABEL_16:
        if ( *a2 < 2 )
          return (unsigned int)-1073741823;
        v23 = v35;
        if ( v35 < 2 )
        {
          return (unsigned int)-1073741823;
        }
        else
        {
          v24 = *a1;
          v25 = a8;
          v26 = a9;
          while ( *v24 )
          {
            v27 = -1LL;
            do
              ++v27;
            while ( v24[v27] );
            v28 = (unsigned int)(v27 + 1);
            v29 = 2 * v28;
            if ( v23 < 2 * (int)v28 )
              return 0;
            v35 = v23 - v29;
            v20 = PipCallDriverAddDeviceQueryRoutine(1, (_DWORD)v24, v29, a10, v25, v26);
            if ( v20 < 0 )
              return (unsigned int)v20;
            v23 = v35;
            if ( v35 < 2 )
              return (unsigned int)v20;
            v24 += v28;
          }
        }
        return (unsigned int)v20;
      }
      v22 = 1;
      v32 = 1;
    }
    else
    {
      v22 = v32;
    }
    if ( v22 != 7 )
      return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v22, (unsigned int)*a1, v35, a10, a8, a9);
    goto LABEL_16;
  }
  return (unsigned int)v20;
}
