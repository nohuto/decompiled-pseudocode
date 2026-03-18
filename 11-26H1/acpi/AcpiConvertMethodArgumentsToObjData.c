/*
 * XREFs of AcpiConvertMethodArgumentsToObjData @ 0x14004D1AC
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x14004D0D0 (AcpiNativeMethodEvalRequestHandler.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x140051A14 (AcpiConvertPackageArgumentToPackageObj.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x14003D714 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_DD @ 0x14004EE20 (WPP_RECORDER_SF_DD.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x140051A14 (AcpiConvertPackageArgumentToPackageObj.c)
 *     AcpiCleanupObjDataArguments @ 0x140065D98 (AcpiCleanupObjDataArguments.c)
 *     WPP_RECORDER_SF_DDPP @ 0x140066778 (WPP_RECORDER_SF_DDPP.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall AcpiConvertMethodArgumentsToObjData(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 v7; // r12
  __int64 i; // rbp
  __int64 v10; // r8
  int v11; // ebx
  __int16 v12; // cx
  __int64 Pool2; // rax
  int v14; // edx
  size_t v15; // r8
  _QWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rax

  v4 = 0LL;
  v7 = a2;
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    v10 = a1[1];
    if ( v10 + v4 > v7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDPP(WPP_GLOBAL_Control->DeviceExtension, a2, v10, 1);
LABEL_26:
      v11 = -1073741788;
LABEL_27:
      AcpiCleanupObjDataArguments(a4, a3);
      return (unsigned int)v11;
    }
    if ( !*a1 )
    {
      if ( (unsigned int)v10 > 8 )
        goto LABEL_26;
      *(_WORD *)(a4 + 40 * i + 2) = 1;
      v17 = a1[1];
      v16 = (_QWORD *)(a4 + 16 + 40 * i);
      *v16 = 0LL;
      *(_DWORD *)(a4 + 40 * i + 24) = v17;
      v15 = a1[1];
LABEL_18:
      memmove(v16, a1 + 2, v15);
      goto LABEL_19;
    }
    if ( *a1 == 1 || *a1 == 2 || (unsigned int)*a1 - 3 > 1 )
    {
      if ( *a1 == 1 )
        v12 = 2;
      else
        v12 = 3;
      *(_WORD *)(a4 + 40 * i + 2) = v12;
      *(_DWORD *)(a4 + 40 * i + 24) = a1[1];
      Pool2 = ExAllocatePool2(64LL, a1[1], 1315988289LL);
      *(_QWORD *)(a4 + 40 * i + 32) = Pool2;
      if ( !Pool2 )
      {
        v11 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            21,
            26,
            (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
            a1[1],
            154);
        }
        goto LABEL_27;
      }
      v15 = *(unsigned int *)(a4 + 40 * i + 24);
      v16 = (_QWORD *)Pool2;
      goto LABEL_18;
    }
    *(_WORD *)(a4 + 40 * i + 2) = 4;
    v11 = AcpiConvertPackageArgumentToPackageObj(a1, a4 + 24 + 40 * i, a4 + 32 + 40 * i, 1LL);
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          21,
          25,
          (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
          (char)a1,
          a1[1]);
      }
      goto LABEL_27;
    }
LABEL_19:
    v18 = a1[1];
    v4 += v18;
    if ( (unsigned __int16)v18 < 4u )
      v18 = 4LL;
    a1 = (unsigned __int16 *)((char *)a1 + v18 + 4);
  }
  return 0;
}
