/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400D74F4
 * Callers:
 *     ACPIInitialize @ 0x1400D7008 (ACPIInitialize.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_s @ 0x14003EBCC (WPP_RECORDER_SF_s.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _BYTE *Pool2; // r14
  unsigned int v2; // ebx
  signed int v3; // esi
  __int64 v4; // r13
  __int64 v5; // r15
  void *v6; // rdx
  int v7; // ebx
  bool v8; // zf
  _BYTE *v9; // rdi
  __int64 *v10; // rdi
  char *v11; // rbx
  int v12; // eax
  int *v13; // rsi
  ULONG_PTR BugCheckParameter4; // rdi
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-59h] BYREF
  __int64 v18; // [rsp+38h] [rbp-51h] BYREF
  ULONG_PTR v19; // [rsp+40h] [rbp-49h] BYREF
  __int128 v20; // [rsp+48h] [rbp-41h] BYREF
  __int128 v21; // [rsp+58h] [rbp-31h]
  __int64 v22; // [rsp+68h] [rbp-21h]
  void *Src[14]; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+F8h] [rbp+6Fh] BYREF
  _BYTE v26[8]; // [rsp+100h] [rbp+77h] BYREF
  __int64 InputBuffer; // [rsp+108h] [rbp+7Fh] BYREF

  v22 = 0LL;
  strcpy(v26, "\\_PIC");
  v19 = 0LL;
  Src[0] = "\\_S1";
  Src[1] = "\\_S2";
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v20 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  InputBuffer = 0LL;
  v17 = 0LL;
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 15LL, 1299211073LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v3 = 2;
  AcpiSupportedSystemStates = 98;
  v4 = 0LL;
  do
  {
    v5 = (unsigned __int8)byte_140076E30[v4 * 4];
    v6 = &WPP_4c655a2938a836836194307c42e4bf2d_Traceguids;
    v7 = dword_140076E10[v4];
    if ( v3 == 2 )
    {
      v8 = (AcpiOverrideAttributes & 0x10) == 0;
      goto LABEL_8;
    }
    if ( v3 == 3 )
    {
      v8 = (AcpiOverrideAttributes & 0x20) == 0;
LABEL_8:
      if ( !v8 )
        goto LABEL_17;
      goto LABEL_9;
    }
    if ( v3 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
LABEL_17:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          6,
          13,
          (__int64)&WPP_4c655a2938a836836194307c42e4bf2d_Traceguids,
          (__int64)Src[v5]);
      }
      Pool2[2 * v5 + v5] = 0;
      if ( v7 )
      {
        HIDWORD(v17) |= v7;
        LODWORD(v17) = 2;
      }
      goto LABEL_31;
    }
LABEL_9:
    if ( (AcpiOverrideAttributes & 4) != 0 && (unsigned int)v3 < 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          6,
          14,
          (__int64)&WPP_4c655a2938a836836194307c42e4bf2d_Traceguids,
          (__int64)Src[v5]);
      }
      Pool2[2 * v5 + v5] = 0;
      if ( v7 )
      {
        HIDWORD(v18) |= v7;
        LODWORD(v18) = 9;
      }
      goto LABEL_31;
    }
    if ( !*((_BYTE *)AcpiInformation + 133) || AcpiStrictS4Supported )
    {
      v9 = Src[v5];
      if ( (int)AMLIGetNameSpaceObject(v9, 0LL, &v19, 0) < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v6,
            6,
            15,
            (__int64)&WPP_4c655a2938a836836194307c42e4bf2d_Traceguids,
            (__int64)v9);
        }
        Pool2[2 * v5 + v5] = 0;
        if ( v7 )
        {
          HIDWORD(InputBuffer) |= v7;
          LODWORD(InputBuffer) = 1;
        }
        goto LABEL_31;
      }
      v10 = (__int64 *)v19;
      AcpiSupportedSystemStates |= 1 << v3;
      AMLIEvalPackageElement((__int64 *)v19, 0, (__int64)&v20);
      v11 = &Pool2[2 * v5];
      v11[v5 + 1] = v21;
      dword_14008ED38 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)&v20, 1u);
      AMLIEvalPackageElement(v10, 1u, (__int64)&v20);
      v11[v5 + 2] = v21;
      dword_14008ED38 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)&v20, 1u);
      AMLIDereferenceHandleEx((__int64)v10);
      v19 = 0LL;
    }
    v12 = AcpiSupportedSystemStates;
    if ( _bittest(&v12, v3) )
      Pool2[2 * v5 + v5] = 1;
LABEL_31:
    ++v3;
    ++v4;
  }
  while ( v3 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        22,
        16,
        (__int64)&WPP_4c655a2938a836836194307c42e4bf2d_Traceguids);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 0xDuLL, 0LL, 0LL);
  }
  if ( (_DWORD)InputBuffer )
    ZwPowerInformation(SystemPowerLoggingEntry, &InputBuffer, 8u, 0LL, 0);
  if ( (_DWORD)v17 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v17, 8u, 0LL, 0);
  if ( (_DWORD)v18 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v18, 8u, 0LL, 0);
  v25 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(Pool2, &v25);
  ExFreePoolWithTag(Pool2, 0);
  if ( v25 == 1 || v25 == 2 || (unsigned int)(v25 - 3) < 2 )
  {
    v13 = a1;
    *a1 = v25;
  }
  else
  {
    v13 = a1;
    *a1 = 4096;
  }
  if ( (int)AMLIGetNameSpaceObject(v26, 0LL, &v19, 0) >= 0 )
  {
    BugCheckParameter4 = v19;
    v20 = 0LL;
    v22 = 0LL;
    WORD1(v20) = 1;
    v21 = (unsigned __int64)v25;
    v15 = AMLIEvalNameSpaceObject((__int64 *)v19, 0LL, 1, (__int64)&v20);
    v2 = v15;
    if ( v15 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v13, v15, BugCheckParameter4);
    AMLIDereferenceHandleEx(BugCheckParameter4);
  }
  else
  {
    return 0;
  }
  return v2;
}
