/*
 * XREFs of _CmIsDeviceSafeRemovalRequired @ 0x1409A8AF8
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409A913C (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x140420C10 (StringExHandleOtherFlagsW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceParent @ 0x1409322F8 (_CmGetDeviceParent.c)
 *     _CmGetDeviceStatus @ 0x1409A9004 (_CmGetDeviceStatus.c)
 */

bool __fastcall CmIsDeviceSafeRemovalRequired(_QWORD *a1, const WCHAR *a2, void *a3)
{
  bool v6; // di
  char v7; // r14
  char v8; // al
  char v9; // bl
  size_t v10; // r8
  __int64 v11; // rdx
  wchar_t *v12; // rcx
  signed __int64 v13; // rsi
  wchar_t v14; // ax
  wchar_t *v15; // rax
  char v16; // bl
  __int64 v17; // rdx
  wchar_t *v18; // rcx
  wchar_t v19; // ax
  wchar_t *v20; // rax
  size_t *pcchRemaining; // rax
  STRSAFE_LPWSTR *p_ppszDestEnd; // r9
  _BYTE v24[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+64h] [rbp-9Ch] BYREF
  int v26; // [rsp+68h] [rbp-98h] BYREF
  int v27; // [rsp+6Ch] [rbp-94h] BYREF
  int v28; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+74h] [rbp-8Ch] BYREF
  int v30; // [rsp+78h] [rbp-88h] BYREF
  int v31; // [rsp+7Ch] [rbp-84h] BYREF
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+80h] [rbp-80h] BYREF
  size_t v33; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[200]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v35[200]; // [rsp+220h] [rbp+120h] BYREF

  v28 = 0;
  v29 = 0;
  v26 = 0;
  v6 = 0;
  v24[0] = 0;
  v27 = 0;
  v31 = 0;
  v30 = 0;
  if ( (int)CmGetDeviceStatus((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&v27, (__int64)&v31, (__int64)&v30) >= 0 )
  {
    v25 = 4;
    v7 = v27 & 8;
    if ( (int)CmGetDeviceRegProp((__int64)a1, a2, (__int64)a3, 0x10u, (__int64)&v29, (__int64)&v26, (__int64)&v25, 0) >= 0 )
    {
      v8 = v26;
    }
    else
    {
      v8 = 0;
      v26 = 0;
    }
    v9 = v8 & 4;
    if ( v7 || (v8 & 2) != 0 )
    {
      v25 = 1;
      v6 = v8 >= 0;
      if ( !(unsigned int)PnpGetObjectProperty(
                            a1,
                            a2,
                            1u,
                            a3,
                            0LL,
                            (__int64)&DEVPKEY_Device_SafeRemovalRequiredOverride,
                            &v28,
                            v24,
                            1u,
                            (__int64)&v25,
                            0)
        && v28 == 17
        && v25 == 1 )
      {
        v6 = v24[0] != 0;
      }
      if ( !v9 && v6 )
      {
        v11 = 200LL;
        v12 = pszDest;
        v13 = (char *)a2 - (char *)pszDest;
        v6 = 0;
        do
        {
          if ( v11 == -2147483446 )
            break;
          v14 = *(wchar_t *)((char *)v12 + v13);
          if ( !v14 )
            break;
          *v12++ = v14;
          --v11;
        }
        while ( v11 );
        v15 = v12 - 1;
        if ( v11 )
          v15 = v12;
        *v15 = 0;
        if ( v11 )
        {
          while ( 1 )
          {
            LODWORD(ppszDestEnd) = 200;
            if ( (int)CmGetDeviceParent(a1, pszDest, v35, (unsigned int *)&ppszDestEnd) < 0 )
              return v9;
            v25 = 4;
            if ( (int)CmGetDeviceRegProp((__int64)a1, v35, 0LL, 0x10u, (__int64)&v29, (__int64)&v26, (__int64)&v25, 0) >= 0 )
            {
              v16 = v26;
            }
            else
            {
              v16 = 0;
              v26 = 0;
            }
            v9 = v16 & 4;
            if ( v9 )
              return v9;
            v17 = 200LL;
            v10 = 400LL;
            v18 = pszDest;
            do
            {
              if ( v17 == -2147483446 )
                break;
              v19 = v18[200];
              if ( !v19 )
                break;
              *v18++ = v19;
              --v17;
            }
            while ( v17 );
            v20 = v18 - 1;
            if ( v17 )
              v20 = v18;
            *v20 = 0;
            if ( !v17 )
            {
              pcchRemaining = &v33;
              p_ppszDestEnd = &ppszDestEnd;
              goto LABEL_27;
            }
          }
        }
        else
        {
          pcchRemaining = (size_t *)&ppszDestEnd;
          p_ppszDestEnd = (STRSAFE_LPWSTR *)&v33;
LABEL_27:
          StringExHandleOtherFlagsW(pszDest, 0x190uLL, v10, p_ppszDestEnd, pcchRemaining, 0x800u);
        }
      }
    }
  }
  return v6;
}
