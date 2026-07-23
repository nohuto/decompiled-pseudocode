/*
 * XREFs of _CmGetDeviceMappedPropertyKeys @ 0x140AE0A94
 * Callers:
 *     _PnpDispatchDevice @ 0x140956100 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1409B70E4 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409536FC (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409551B0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyKeys(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 v11; // r11
  unsigned int i; // edi
  __int64 v13; // rsi
  unsigned int DeviceMappedPropertyFromRegProp; // eax
  unsigned int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned int j; // edi
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int DeviceMappedPropertyFromInstanceKeyRegValue; // eax
  unsigned int k; // edi
  __int64 v25; // rsi
  unsigned int DeviceMappedPropertyFromComposite; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ecx
  wchar_t v33[8]; // [rsp+50h] [rbp-38h] BYREF

  v7 = a7;
  *(_DWORD *)v33 = 0;
  *a7 = 0;
  v11 = a1;
  LODWORD(a7) = 0;
  for ( i = 0; i < 0x21; ++i )
  {
    v13 = (__int64)*(&CmDeviceRegPropMap + 3 * i);
    if ( v13 )
    {
      if ( a4
        || (DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                                v11,
                                                (__int64)a2,
                                                (__int64)a3,
                                                v13,
                                                v33,
                                                0LL,
                                                0,
                                                (unsigned int *)&a7,
                                                0),
            v15 = DeviceMappedPropertyFromRegProp,
            DeviceMappedPropertyFromRegProp == -1073741789)
        || !DeviceMappedPropertyFromRegProp )
      {
        if ( a5 )
        {
          v16 = *v7;
          if ( (unsigned int)v16 < a6 )
          {
            v17 = 5 * v16;
            *(_OWORD *)(a5 + 4 * v17) = *(_OWORD *)v13;
            *(_DWORD *)(a5 + 4 * v17 + 16) = *(_DWORD *)(v13 + 16);
          }
        }
        v18 = *v7 + 1;
        if ( v18 < *v7 )
        {
LABEL_10:
          v15 = -1073741675;
LABEL_11:
          *v7 = 0;
          return v15;
        }
        *v7 = v18;
      }
      else if ( DeviceMappedPropertyFromRegProp == -1073741632 )
      {
        goto LABEL_11;
      }
    }
    v11 = a1;
  }
  for ( j = 0; j < 2; ++j )
  {
    v21 = 32LL * j;
    v22 = *(__int64 *)((char *)&off_140BE03F0 + v21);
    if ( v22 )
    {
      if ( a4
        || (DeviceMappedPropertyFromInstanceKeyRegValue = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
                                                            v11,
                                                            (int)a2,
                                                            a3,
                                                            *(__int64 *)((char *)&off_140BE03F0 + v21),
                                                            v33,
                                                            0LL,
                                                            0,
                                                            &a7),
            v15 = DeviceMappedPropertyFromInstanceKeyRegValue,
            DeviceMappedPropertyFromInstanceKeyRegValue == -1073741789)
        || !DeviceMappedPropertyFromInstanceKeyRegValue )
      {
        if ( a5 )
        {
          v30 = *v7;
          if ( (unsigned int)v30 < a6 )
          {
            v31 = 5 * v30;
            *(_OWORD *)(a5 + 4 * v31) = *(_OWORD *)v22;
            *(_DWORD *)(a5 + 4 * v31 + 16) = *(_DWORD *)(v22 + 16);
          }
        }
        v32 = *v7 + 1;
        if ( v32 < *v7 )
          goto LABEL_10;
        *v7 = v32;
      }
      else if ( DeviceMappedPropertyFromInstanceKeyRegValue == -1073741632 )
      {
        goto LABEL_11;
      }
    }
    v11 = a1;
  }
  for ( k = 0; k < 0x1C; ++k )
  {
    v25 = (__int64)*(&off_140BE2850 + 2 * k);
    if ( a4
      || (DeviceMappedPropertyFromComposite = CmGetDeviceMappedPropertyFromComposite(
                                                v11,
                                                a2,
                                                a3,
                                                (const wchar_t *)v25,
                                                v33,
                                                0LL,
                                                0,
                                                (int *)&a7,
                                                0),
          v15 = DeviceMappedPropertyFromComposite,
          DeviceMappedPropertyFromComposite == -1073741789)
      || !DeviceMappedPropertyFromComposite )
    {
      if ( a5 )
      {
        v27 = *v7;
        if ( (unsigned int)v27 < a6 )
        {
          v28 = 5 * v27;
          *(_OWORD *)(a5 + 4 * v28) = *(_OWORD *)v25;
          *(_DWORD *)(a5 + 4 * v28 + 16) = *(_DWORD *)(v25 + 16);
        }
      }
      v29 = *v7 + 1;
      if ( v29 < *v7 )
        goto LABEL_10;
      *v7 = v29;
    }
    else if ( DeviceMappedPropertyFromComposite == -1073741632 )
    {
      goto LABEL_11;
    }
    v11 = a1;
  }
  return a6 < *v7 ? 0xC0000023 : 0;
}
