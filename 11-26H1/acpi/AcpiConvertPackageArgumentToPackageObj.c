/*
 * XREFs of AcpiConvertPackageArgumentToPackageObj @ 0x140051A14
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004D1AC (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x14003AF34 (WPP_RECORDER_SF_DDD.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004D1AC (AcpiConvertMethodArgumentsToObjData.c)
 *     WPP_RECORDER_SF_DD @ 0x14004EE20 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_qDD @ 0x140066B70 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall AcpiConvertPackageArgumentToPackageObj(_WORD *a1, unsigned int *a2, PVOID *a3)
{
  unsigned int *v4; // rdi
  unsigned __int16 v5; // ax
  __int64 v6; // r9
  unsigned __int16 *v7; // r14
  unsigned __int64 v8; // r11
  unsigned __int16 *v9; // rcx
  unsigned int v10; // ebx
  unsigned __int64 v11; // rbp
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rax
  int v16; // ebx
  unsigned int v17; // eax
  unsigned int *Pool2; // rax
  int v19; // edx
  int v20; // edx
  int v21; // r8d
  int v22; // r9d

  *a2 = 0;
  v4 = a2;
  *a3 = 0LL;
  if ( a1 && ((v5 = a1[1]) == 0 || v5 >= 8u) && (*a1 == 4 || *a1 == 3) )
  {
    v6 = (unsigned __int16)a1[1];
    v7 = a1 + 2;
    v8 = (unsigned __int64)a1 + v6 + 4;
    v9 = a1 + 2;
    v10 = 0;
    v11 = 0LL;
    while ( (unsigned __int64)v9 < v8 )
    {
      v12 = *v9;
      if ( (unsigned __int16)v12 > 4u )
        goto LABEL_18;
      LODWORD(a2) = v9[1];
      if ( (unsigned __int16)a2 > (unsigned __int16)v6 )
        goto LABEL_18;
      v13 = v9[1];
      v14 = v13;
      if ( (unsigned __int16)a2 < 4u )
        v13 = 4LL;
      if ( (unsigned __int64)v9 + v13 + 4 > v8 )
      {
LABEL_18:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDD(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, v12, v6);
        v16 = -1073741788;
        goto LABEL_29;
      }
      ++v10;
      v15 = v9[1];
      if ( (unsigned __int16)a2 < 4u )
        v15 = 4LL;
      v11 += v15 + 4;
      if ( (unsigned __int16)a2 < 4u )
        v14 = 4LL;
      v9 = (unsigned __int16 *)((char *)v9 + v14 + 4);
    }
    v17 = 40 * v10 + 8;
    *v4 = v17;
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, v17, 1315988289LL);
    *a3 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v10;
      v16 = AcpiConvertMethodArgumentsToObjData(v7, v11, v10, (__int64)*a3 + 8);
      if ( v16 >= 0 )
        return (unsigned int)v16;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, v20, v21, v22);
    }
    else
    {
      v16 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          21,
          28,
          (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
          *v4,
          154);
      }
      *v4 = 0;
    }
  }
  else
  {
    v16 = -1073741811;
  }
LABEL_29:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x4E706341u);
    *v4 = 0;
    *a3 = 0LL;
  }
  return (unsigned int)v16;
}
