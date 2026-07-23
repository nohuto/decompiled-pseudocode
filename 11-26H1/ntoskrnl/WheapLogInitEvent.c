/*
 * XREFs of WheapLogInitEvent @ 0x14084F4F8
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     Feature_3187405113__private_IsEnabledDeviceUsageNoInline @ 0x1406DAFEC (Feature_3187405113__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_490991929__private_IsEnabledDeviceUsageNoInline @ 0x1406DB048 (Feature_490991929__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void WheapLogInitEvent()
{
  char *Pool2; // rsi
  __int64 *v1; // rdx
  int i; // r8d
  __int64 *v3; // rcx
  __int64 v4; // r9
  char *v5; // rax
  __int128 v6; // xmm1
  int v7; // edi
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  unsigned int Size; // [rsp+38h] [rbp-9h] BYREF
  int Size_4; // [rsp+3Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *p_Size_4; // [rsp+58h] [rbp+17h]
  __int64 v14; // [rsp+60h] [rbp+1Fh]
  unsigned int *p_Size; // [rsp+68h] [rbp+27h]
  __int64 v16; // [rsp+70h] [rbp+2Fh]
  char *v17; // [rsp+78h] [rbp+37h]
  unsigned int v18; // [rsp+80h] [rbp+3Fh]
  int v19; // [rsp+84h] [rbp+43h]

  Size = 1072 * dword_140EEF0CC;
  Pool2 = (char *)ExAllocatePool2(0x42uLL);
  if ( Pool2 )
  {
    if ( (unsigned int)Feature_490991929__private_IsEnabledDeviceUsageNoInline() )
    {
      memset_0(Pool2, 0, Size);
    }
    else
    {
      v1 = (__int64 *)qword_140EEF0D8;
      for ( i = 0; v1 != &qword_140EEF0D8; v1 = (__int64 *)*v1 )
      {
        v3 = v1;
        v4 = 8LL;
        v5 = &Pool2[1072 * i];
        do
        {
          *(_OWORD *)v5 = *(_OWORD *)v3;
          *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
          *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
          *((_OWORD *)v5 + 3) = *((_OWORD *)v3 + 3);
          *((_OWORD *)v5 + 4) = *((_OWORD *)v3 + 4);
          *((_OWORD *)v5 + 5) = *((_OWORD *)v3 + 5);
          *((_OWORD *)v5 + 6) = *((_OWORD *)v3 + 6);
          v5 += 128;
          v6 = *((_OWORD *)v3 + 7);
          v3 += 16;
          *((_OWORD *)v5 - 1) = v6;
          --v4;
        }
        while ( v4 );
        ++i;
        *(_OWORD *)v5 = *(_OWORD *)v3;
        *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
        *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
      }
    }
    UserData.Ptr = (ULONGLONG)&dword_140EEF0CC;
    Size_4 = 10;
    *(_QWORD *)&UserData.Size = 4LL;
    p_Size_4 = &Size_4;
    p_Size = &Size;
    v18 = Size;
    v14 = 4LL;
    v16 = 4LL;
    v17 = Pool2;
    v19 = 0;
    if ( EtwEventEnabled(*(REGHANDLE *)&CmpContextListLock.SchedulerApcFill5[80], &EVENT_WHEA_INIT_OP) == 1 )
      EtwWrite(*(REGHANDLE *)&CmpContextListLock.SchedulerApcFill5[80], &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
    v7 = 32;
    Feature_3187405113__private_IsEnabledDeviceUsageNoInline();
    v8 = (_DWORD *)ExAllocatePool2(0x42uLL);
    if ( v8 )
    {
      if ( (unsigned int)Feature_3187405113__private_IsEnabledDeviceUsageNoInline() )
      {
        v9 = 0;
      }
      else
      {
        v9 = Size;
        v7 = Size + 32;
      }
      *v8 = 1733060695;
      v8[1] = 1;
      v8[2] = v7;
      v8[3] = 0;
      v8[5] = -2147483646;
      v8[4] = 1280201291;
      v8[6] = 2;
      v8[7] = v9;
      if ( !(unsigned int)Feature_3187405113__private_IsEnabledDeviceUsageNoInline() )
        memmove(v8 + 8, Pool2, Size);
      WheaLogInternalEvent(v8);
      ExFreePoolWithTag(v8, 0x61656857u);
    }
    ExFreePoolWithTag(Pool2, 0x61656857u);
  }
}
