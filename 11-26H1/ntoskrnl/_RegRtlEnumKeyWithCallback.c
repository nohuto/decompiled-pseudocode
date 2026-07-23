/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x140974660
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetObjectSubKeyList @ 0x140AFD1DC (DrvDbGetObjectSubKeyList.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140B226B8 (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x1404A5D70 (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _RegRtlEnumKey @ 0x140974C20 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x140974E10 (_RegRtlQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(HANDLE KeyHandle, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  void *v5; // rdi
  char StackLimits; // al
  char *v8; // r15
  unsigned __int64 v9; // rsi
  int v10; // r14d
  unsigned int v11; // eax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 Pool2; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // [rsp+30h] [rbp-59h] BYREF
  __int64 v20; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-49h] BYREF
  char v22; // [rsp+50h] [rbp-39h] BYREF

  v3 = 0;
  v19 = 0;
  v21[0] = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  StackLimits = RtlpGetStackLimits((__int64)&v20, (__int64)v21);
  if ( (unsigned __int64)v21 - (v20 & -(__int64)(StackLimits != 0)) < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)RegRtlQueryInfoKey((_DWORD)KeyHandle, 0, (unsigned int)&v19, 0, 0LL, 0LL) )
    goto LABEL_3;
  v14 = v19;
  if ( v19 )
  {
    if ( v19 + 1 < v19 )
      return (unsigned int)-1073741675;
    v14 = v19 + 1;
  }
  v9 = 2LL * v14;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (unsigned int)v9 > 0x50 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v5 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v8 = (char *)Pool2;
    goto LABEL_4;
  }
LABEL_3:
  v8 = &v22;
  LODWORD(v9) = 80;
LABEL_4:
  v10 = 0;
  while ( 1 )
  {
    v19 = (unsigned int)v9 >> 1;
    v11 = RegRtlEnumKey(KeyHandle);
    if ( v11 == -2147483622 )
      break;
    v3 = 0;
    if ( v11 == -1073741444 )
      break;
    if ( v11 == -1073741789 )
    {
      v9 = 2LL * v19;
      if ( v9 > 0xFFFFFFFF )
      {
        v3 = -1073741675;
        break;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v13 = ExAllocatePool2(0x100uLL);
      v5 = (void *)v13;
      if ( !v13 )
        return (unsigned int)-1073741801;
      v8 = (char *)v13;
    }
    else
    {
      if ( v11 )
      {
        v3 = v11;
        break;
      }
      *(_WORD *)&v8[2 * ((unsigned __int64)(unsigned int)v9 >> 1) - 2] = 0;
      v16 = SysCtxInternalEnumSubkeyCallback((__int64)KeyHandle, (__int64)v8, a3);
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
          goto LABEL_4;
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 )
            v3 = -1073741248;
          else
            v3 = -1073741595;
        }
        break;
      }
      ++v10;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v3;
}
