/*
 * XREFs of HalpEnumerateEnvironmentVariablesWithFilter @ 0x14046B680
 * Callers:
 *     HalEnumerateEnvironmentVariablesEx @ 0x14057E840 (HalEnumerateEnvironmentVariablesEx.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     HalpEfiStartRuntimeCode @ 0x14046BA80 (HalpEfiStartRuntimeCode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HalpEnumerateEnvironmentVariablesWithFilter(int a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  int v4; // r13d
  unsigned int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rbx
  _DWORD *v8; // rsi
  int v9; // r12d
  bool v10; // r15
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  bool v16; // cl
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v23; // edi
  char v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+40h] [rbp-C0h]
  size_t Size; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-B0h]
  unsigned int v29; // [rsp+54h] [rbp-ACh]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h]
  unsigned __int64 v32; // [rsp+70h] [rbp-90h]
  _DWORD *v33; // [rsp+78h] [rbp-88h]
  __int128 v34; // [rsp+80h] [rbp-80h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp-70h] BYREF
  _WORD Src[256]; // [rsp+A0h] [rbp-60h] BYREF

  v31 = a2;
  v33 = a4;
  v32 = a3;
  v4 = a1;
  v26 = a1;
  Affinity = 0LL;
  v25 = 0LL;
  v34 = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalpDeviceBlockUnblockPushLock.WaitBlockFill6[72]
    || !HalEfiRuntimeServicesTable
    || !HalEfiRuntimeServicesTable[4]
    || !HalEfiRuntimeServicesTable[3] )
  {
    return 3221225474LL;
  }
  if ( (unsigned int)(a1 - 1) > 1 || (a3 & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
    return 3221225485LL;
  v5 = *a4;
  v6 = 20;
  Src[0] = 0;
  v7 = a3;
  if ( a1 != 1 )
    v6 = 32;
  v8 = 0LL;
  v28 = v6;
  v9 = 0;
  v10 = v5 != 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v24 = 0;
  }
  else
  {
    v24 = 1;
    v11 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + KeGetPcr()->Prcb.Number);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v11 >> 6);
    Affinity.Mask = 1LL << v11;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    Size = 512LL;
    _InterlockedIncrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount + 1);
    HalpEfiStartRuntimeCode(16LL);
    v12 = ((__int64 (__fastcall *)(size_t *, _WORD *, __int128 *))HalEfiRuntimeServicesTable[4])(&Size, Src, &v34);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFEF);
    _InterlockedDecrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount + 1);
    if ( v12 )
      break;
    if ( !v31 || (unsigned __int8)guard_dispatch_icall_no_overrides(&v34, Src) )
    {
      v13 = (v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v13 != v7 )
      {
        v21 = v13 - v7;
        v7 = (v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v5 < v21 )
        {
          v10 = 0;
          v5 = 0;
          v9 = -1073741789;
        }
        else
        {
          v5 -= v21;
        }
      }
      v14 = Size + v28;
      if ( v4 != 1 )
        v14 = (v14 + 3) & 0xFFFFFFFC;
      v15 = 0;
      v16 = 0;
      if ( v5 >= v14 )
        v15 = v5 - v14;
      else
        v9 = -1073741789;
      if ( v5 >= v14 )
        v16 = v10;
      v29 = v15;
      v10 = v16;
      if ( v26 == 1 )
      {
        if ( v16 )
        {
          *(_OWORD *)(v7 + 4) = v34;
          memmove((void *)(v7 + 20), Src, Size);
          if ( v8 )
            *v8 = v7 - (_DWORD)v8;
          v8 = (_DWORD *)v7;
        }
        v5 = v15;
        v20 = v14;
      }
      else
      {
        if ( v16 )
        {
          *(_OWORD *)(v7 + 16) = v34;
          memmove((void *)(v7 + 32), Src, Size);
          v25 = v15;
          *(_DWORD *)(v7 + 4) = ((v7 + Size + 35) & 0xFFFFFFFC) - v7;
        }
        else
        {
          v25 = 0LL;
        }
        HalpEfiStartRuntimeCode(8LL);
        v19 = ((__int64 (__fastcall *)(_WORD *, __int128 *, __int64, __int64 *, __int64))HalEfiRuntimeServicesTable[3])(
                Src,
                &v34,
                v18,
                &v25,
                v17);
        _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFF7);
        if ( v19 )
        {
          if ( v19 != 0x8000000000000005uLL )
          {
            v23 = -1073741823;
            goto LABEL_41;
          }
          v5 = 0;
          v10 = 0;
          v9 = -1073741789;
        }
        else
        {
          v5 = v29;
          if ( v10 )
          {
            *(_DWORD *)(v7 + 8) = v25;
            v5 -= v25;
            if ( v8 )
              *v8 = v7 - (_DWORD)v8;
            v8 = (_DWORD *)v7;
          }
        }
        v20 = v25 + v14;
      }
      v4 = v26;
      v7 += v20;
    }
  }
  if ( v12 != 0x800000000000000EuLL )
    v9 = -1073741823;
  v23 = v9;
LABEL_41:
  if ( v24 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v8 )
    *v8 = 0;
  *v33 = v7 - v32;
  return v23;
}
