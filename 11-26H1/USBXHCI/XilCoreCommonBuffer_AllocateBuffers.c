/*
 * XREFs of XilCoreCommonBuffer_AllocateBuffers @ 0x1400199C4
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1400043A4 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x140019030 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x1400198E0 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 *     XilCoreCommonBuffer_Create @ 0x140057010 (XilCoreCommonBuffer_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x14001AD2C (DmaEnabler_AllocateCommonBufferPage.c)
 *     WPP_RECORDER_SF_qDD @ 0x14001B210 (WPP_RECORDER_SF_qDD.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003D4C8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x140056CEC (WPP_RECORDER_SF_ddqDddd.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1400827F8 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AllocateBuffers(__int64 **a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  unsigned int v7; // r13d
  __int64 result; // rax
  unsigned int i; // r12d
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  __int64 *v13; // r15
  __int64 **v14; // rdi
  KIRQL v15; // al
  __int64 v16; // r14
  _QWORD *v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 ***v24; // rcx
  int v25; // edx
  int v26; // r9d
  int v27; // eax
  int v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+18h]

  v3 = 0;
  v33 = 0LL;
  v5 = a2;
  v32 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v31 = *(_DWORD *)(a2 + 28);
    v27 = *(_DWORD *)(a2 + 24);
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qDD(a1[1][9], a2, 8, 12, (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids, v5, v27, v31);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 52);
  v7 = ((unsigned int)(a3 * *(_DWORD *)v5) >> 12) + (((a3 * *(_DWORD *)v5) & 0xFFF) != 0);
  result = 0x1000u / *(_DWORD *)v5;
  v34 = 0x1000u / *(_DWORD *)v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v30) = result;
    LODWORD(v29) = v7;
    WPP_RECORDER_SF_DD(a1[1][9], 5u, 8u, 0xDu, (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids, v29, v30);
    result = v34;
  }
  for ( i = 0; i < v7; ++i )
  {
    v10 = 104 * result + 32;
    v11 = **a1;
    result = *((_BYTE *)*a1 + 80)
           ? SecureDmaEnabler_AllocateCommonBufferPage(
               *(_QWORD *)(v11 + 104),
               v10,
               4096,
               (unsigned int)&v32,
               (__int64)&v33)
           : DmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(v11 + 96), v10, 4096, (unsigned int)&v32, (__int64)&v33);
    if ( (int)result < 0 )
      break;
    v13 = (__int64 *)v32;
    if ( (*(_DWORD *)(v32 + 8) & 0xFFF) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_(a1[1][9], v12, 8, 14, (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids);
      }
      if ( *((_BYTE *)*a1 + 80) )
        SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(**a1 + 104), v13);
      else
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v13[2]);
    }
    else
    {
      v14 = a1 + 2;
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 2);
      v16 = v33;
      *((_BYTE *)a1 + 25) = v15;
      ++*((_DWORD *)a1 + 50);
      *(_QWORD *)(v16 + 24) = v13;
      *(_BYTE *)(v16 + 16) = 1;
      v17 = *(_QWORD **)(v5 + 56);
      if ( *v17 != v5 + 48 )
LABEL_15:
        __fastfail(3u);
      *(_QWORD *)v16 = v5 + 48;
      *(_QWORD *)(v16 + 8) = v17;
      *v17 = v16;
      *(_QWORD *)(v5 + 56) = v16;
      if ( v34 )
      {
        v18 = v5 + 32;
        v19 = (_QWORD *)(v16 + 80);
        do
        {
          v20 = *v13;
          *(v19 - 4) = *v13;
          *(v19 - 4) = v20 + *(_DWORD *)v5 * v3;
          v21 = v13[1];
          *(v19 - 3) = v21;
          v22 = *(_DWORD *)v5 * v3;
          *(v19 - 2) = v16;
          *(v19 - 3) = v21 + v22;
          *((_DWORD *)v19 - 2) = *(_DWORD *)v5;
          v23 = *(_QWORD **)(v18 + 8);
          if ( *v23 != v18 )
            goto LABEL_15;
          *(v19 - 5) = v23;
          *(v19 - 6) = v18;
          *v23 = v19 - 6;
          *(_QWORD *)(v18 + 8) = v19 - 6;
          v24 = (__int64 ***)a1[21];
          if ( *v24 != a1 + 20 )
            goto LABEL_15;
          *v19 = a1 + 20;
          v19[1] = v24;
          *v24 = (__int64 **)v19;
          a1[21] = v19;
          v25 = *(_DWORD *)(v5 + 24) + 1;
          v26 = *(_DWORD *)(v5 + 28) + 1;
          *(_DWORD *)(v5 + 24) = v25;
          *(_DWORD *)(v5 + 28) = v26;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_ddqDddd(
                a1[1][9],
                v25,
                v18,
                v26,
                v28,
                i,
                v3,
                *(v19 - 4),
                *((_DWORD *)v19 - 6),
                *((_DWORD *)v19 - 2),
                v25,
                v26);
              v18 = v5 + 32;
            }
          }
          ++v3;
          v19 += 13;
        }
        while ( v3 < v34 );
        v14 = a1 + 2;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v14, *((_BYTE *)v14 + 9));
      v3 = 0;
    }
    result = v34;
  }
  return result;
}
