/*
 * XREFs of GetProcessorStatusInfo @ 0x14000AEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 */

__int64 __fastcall GetProcessorStatusInfo(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // eax

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v8 = 0;
  v10 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v7,
                      off_140018040)
                  + 224);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 56);
    v12 = *(unsigned int *)(v11 + 64);
    v13 = 12 * v12 + 40;
    if ( a4 )
      *a4 = v13;
    if ( a2 >= v13 )
    {
      memset(a3, 0, v13);
      v14 = 0;
      a3[1] = *(_DWORD *)(*(_QWORD *)(v11 + 56) + 16LL);
      a3[9] = v12;
      if ( (_DWORD)v12 )
      {
        v15 = 0LL;
        v16 = a3 + 11;
        v17 = v12;
        do
        {
          v18 = *(_QWORD *)(v11 + 56);
          v15 += 32LL;
          *(v16 - 1) = *(_DWORD *)(v15 + v18 - 16);
          *v16 = *(unsigned __int8 *)(v15 + v18 - 7);
          v16 += 3;
          *(v16 - 2) = *(unsigned __int8 *)(v15 + v18 - 8);
          v19 = *(unsigned __int16 *)(v15 + v18 - 6);
          if ( v14 > v19 )
            v19 = v14;
          v14 = v19;
          --v17;
        }
        while ( v17 );
      }
      a3[7] = v14;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        3,
        13,
        (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids);
    }
    return (unsigned int)-1073741163;
  }
  return v8;
}
