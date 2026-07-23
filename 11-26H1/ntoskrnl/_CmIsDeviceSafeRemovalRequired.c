/*
 * XREFs of _CmIsDeviceSafeRemovalRequired @ 0x140952480
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _CmGetDeviceParent @ 0x14095276C (_CmGetDeviceParent.c)
 *     _CmGetDeviceStatus @ 0x140955C8C (_CmGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 */

bool __fastcall CmIsDeviceSafeRemovalRequired(__int64 a1, __int64 a2, int a3)
{
  bool v6; // di
  char v7; // r14
  char v8; // al
  char v9; // bl
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int64 v12; // rsi
  __int16 v13; // ax
  _WORD *v14; // rax
  char v15; // bl
  __int16 v16; // ax
  _BYTE v18[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+64h] [rbp-9Ch] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h] BYREF
  int v22; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+74h] [rbp-8Ch] BYREF
  int v24; // [rsp+78h] [rbp-88h] BYREF
  int v25; // [rsp+7Ch] [rbp-84h] BYREF
  int v26[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[400]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[400]; // [rsp+220h] [rbp+120h] BYREF

  v22 = 0;
  v23 = 0;
  v20 = 0;
  v6 = 0;
  v18[0] = 0;
  v21 = 0;
  v25 = 0;
  v24 = 0;
  if ( (int)CmGetDeviceStatus(a1, a2, a3, (unsigned int)&v21, (__int64)&v25, (__int64)&v24) >= 0 )
  {
    v19 = 4;
    v7 = v21 & 8;
    if ( (int)CmGetDeviceRegProp(a1, a2, a3, 16, (__int64)&v23, (__int64)&v20, (__int64)&v19, 0) >= 0 )
    {
      v8 = v20;
    }
    else
    {
      v8 = 0;
      v20 = 0;
    }
    v9 = v8 & 4;
    if ( v7 || (v8 & 2) != 0 )
    {
      v19 = 1;
      v6 = v8 >= 0;
      if ( !(unsigned int)PnpGetObjectProperty(
                            a1,
                            a2,
                            1,
                            a3,
                            0LL,
                            (__int64)&DEVPKEY_Device_SafeRemovalRequiredOverride,
                            (__int64)&v22,
                            (__int64)v18,
                            1,
                            (__int64)&v19,
                            0)
        && v22 == 17
        && v19 == 1 )
      {
        v6 = v18[0] != 0;
      }
      if ( !v9 && v6 )
      {
        v10 = 200LL;
        v11 = v27;
        v12 = a2 - (_QWORD)v27;
        v6 = 0;
        do
        {
          if ( v10 == -2147483446 )
            break;
          v13 = *(_WORD *)((char *)v11 + v12);
          if ( !v13 )
            break;
          *v11++ = v13;
          --v10;
        }
        while ( v10 );
        while ( 1 )
        {
          v14 = v11 - 1;
          if ( v10 )
            v14 = v11;
          *v14 = 0;
          if ( !v10 )
            break;
          v26[0] = 200;
          if ( (int)CmGetDeviceParent(a1, v27, v28, v26) < 0 )
            return v9;
          v19 = 4;
          if ( (int)CmGetDeviceRegProp(a1, (unsigned int)v28, 0, 16, (__int64)&v23, (__int64)&v20, (__int64)&v19, 0) >= 0 )
          {
            v15 = v20;
          }
          else
          {
            v15 = 0;
            v20 = 0;
          }
          v9 = v15 & 4;
          if ( v9 )
            return v9;
          v10 = 200LL;
          v11 = v27;
          do
          {
            if ( v10 == -2147483446 )
              break;
            v16 = v11[200];
            if ( !v16 )
              break;
            *v11++ = v16;
            --v10;
          }
          while ( v10 );
        }
      }
    }
  }
  return v6;
}
