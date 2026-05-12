/*
 * XREFs of WppInitGlobalLogger @ 0x1401880B4
 * Callers:
 *     WppTraceCallback @ 0x140188500 (WppTraceCallback.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x14005CFD0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void __fastcall WppInitGlobalLogger(const GUID *Guid, _QWORD *a2, int *a3, _BYTE *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+58h] [rbp-A8h]
  const wchar_t *v18; // [rsp+60h] [rbp-A0h]
  int *v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+70h] [rbp-90h]
  int *v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+90h] [rbp-70h]
  const wchar_t *v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  _OWORD v32[2]; // [rsp+100h] [rbp+0h] BYREF
  int v33; // [rsp+120h] [rbp+20h]

  v17 = 32;
  v13 = 0;
  v18 = L"Start";
  v14 = 0;
  v19 = &v12;
  v12 = 0;
  v21 = &v11;
  v11 = 0;
  v16 = 0LL;
  v20 = 4;
  v22 = 4;
  v23 = 0LL;
  v24 = 0;
  GuidString = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2147483650LL, L"WMI\\GlobalLogger\\", &v16, 0LL, 0LL) >= 0 )
  {
    if ( v12 )
    {
      v20 = 4;
      v18 = L"Flags";
      v22 = 4;
      v19 = &v13;
      v27 = 4;
      v21 = &v11;
      v16 = 0LL;
      v25 = L"Level";
      v26 = &v14;
      v28 = &v11;
      v33 = *(_DWORD *)L"\\";
      v17 = 32;
      v23 = 0LL;
      v24 = 32;
      v29 = 1;
      v30 = 0LL;
      v31 = 0;
      v32[0] = *(_OWORD *)L"WMI\\GlobalLogger\\";
      v32[1] = *(_OWORD *)L"alLogger\\";
      if ( !RtlStringFromGUID(Guid, &GuidString) )
      {
        if ( GuidString.Length <= 0x4Cu )
        {
          v8 = -1LL;
          v9 = -1LL;
          do
            ++v9;
          while ( *((_WORD *)v32 + v9) );
          memmove((char *)v32 + 2 * (unsigned int)v9, GuidString.Buffer + 1, GuidString.Length);
          do
            ++v8;
          while ( *((_WORD *)v32 + v8) );
          if ( 2 * (unsigned __int64)(unsigned int)(v8 - 1) >= 0x70 )
            _report_rangecheckfailure();
          *((_WORD *)v32 + (unsigned int)(v8 - 1)) = 0;
          RtlFreeUnicodeString(&GuidString);
          if ( (int)RtlQueryRegistryValuesEx(2147483650LL, v32, &v16, 0LL, 0LL) >= 0 && v12 == 1 )
          {
            v10 = v13 & 0x7FFFFFFF;
            *a2 = 1LL;
            *a3 = v10;
            *a4 = v14;
          }
        }
        else
        {
          RtlFreeUnicodeString(&GuidString);
        }
      }
    }
  }
}
