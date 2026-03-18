/*
 * XREFs of PiGetDeviceRegProperty @ 0x14099536C
 * Callers:
 *     IoGetDeviceProperty @ 0x140994C70 (IoGetDeviceProperty.c)
 *     IopPnPDispatch @ 0x140A9FA40 (IopPnPDispatch.c)
 * Callees:
 *     wcschr @ 0x140537F60 (wcschr.c)
 *     wcsstr @ 0x140538480 (wcsstr.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     RtlFormatMessageEx @ 0x140B0FF70 (RtlFormatMessageEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(int a1, __int64 a2, int a3, int a4, void *a5, int *a6)
{
  wchar_t *v9; // r12
  int DeviceRegProp; // eax
  unsigned int v11; // ebx
  _WORD *Pool2; // rax
  _WORD *v13; // rdi
  unsigned int v14; // r15d
  const wchar_t *v15; // rsi
  char v16; // cl
  _WORD *v18; // rsi
  __int16 *v19; // rcx
  int v20; // edx
  __int16 v21; // ax
  __int16 v22; // ax
  wchar_t *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r12
  wchar_t *v27; // rcx
  unsigned int i; // r12d
  wchar_t *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  size_t Size; // [rsp+54h] [rbp-ACh] BYREF
  wchar_t *Str; // [rsp+60h] [rbp-A0h]
  void *Src; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v36[152]; // [rsp+78h] [rbp-88h] BYREF

  Src = a5;
  Size = (unsigned int)*a6;
  v9 = 0LL;
  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a1, 0, a4, (__int64)&Size + 4, (__int64)a5, (__int64)&Size, 0);
  v11 = DeviceRegProp;
  if ( a3 == 1 )
  {
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp != -1073741789 )
        return v11;
    }
    else if ( HIDWORD(Size) != 1 )
    {
      return (unsigned int)-1073741584;
    }
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    if ( Pool2 )
    {
      if ( v11 != -1073741789 )
      {
        memmove(Pool2, Src, (unsigned int)Size);
        goto LABEL_10;
      }
      v24 = CmGetDeviceRegProp(PiPnpRtlCtx, a1, 0, a4, (__int64)&Size + 4, (__int64)Pool2, (__int64)&Size, 0);
      v11 = v24;
      if ( v24 < 0 )
      {
        if ( v24 == -1073741789 )
          *a6 = Size;
      }
      else
      {
        if ( HIDWORD(Size) == 1 )
        {
LABEL_10:
          v14 = Size;
          if ( (unsigned int)Size > 2 && *v13 == 64 )
          {
            v18 = v13 + 1;
            v19 = v13 + 2;
            v20 = 0;
            while ( v19 < &v13[(unsigned __int64)(unsigned int)Size >> 1] )
            {
              v21 = *v18;
              if ( !*v18 )
                break;
              if ( v21 == 44 )
              {
                v22 = *v19;
                if ( *v19 != 37 && v22 != 45 && v22 != 35 )
                  break;
                v20 = 1;
              }
              else if ( v21 == 59 )
              {
                if ( !v20 )
                  break;
                v15 = v18 + 1;
                v14 = (_DWORD)v13 - (_DWORD)v15 + Size;
                v23 = wcsstr(v15, L";(");
                v9 = v23;
                if ( v23 )
                {
                  v25 = (v14 >> 1) - 2;
                  if ( v15[v25] == 41 )
                  {
                    *v23 = 0;
                    v26 = (__int64)(v23 + 2);
                    v15[v25] = 0;
                    Str = v23 + 2;
                    memset_0(v36, 0, sizeof(v36));
                    v27 = Str;
                    v35 = v26;
                    for ( i = 1; ; ++i )
                    {
                      v29 = wcschr(v27, 0x2Cu);
                      if ( !v29 )
                        break;
                      *v29 = 0;
                      v30 = (__int64)(v29 + 1);
                      if ( i >= 0x13 )
                      {
                        v9 = Str;
                        v16 = 1;
                        goto LABEL_13;
                      }
                      v31 = i;
                      *(_QWORD *)&v36[8 * v31 - 8] = v30;
                      v27 = (wchar_t *)v30;
                    }
                    v9 = Str;
                  }
                }
                v16 = 0;
                goto LABEL_13;
              }
              ++v18;
              ++v19;
            }
          }
          v15 = v13;
          v16 = 0;
LABEL_13:
          if ( *a6 >= v14 )
          {
            if ( v9 )
            {
              if ( v16 )
                v11 = -1073741619;
              else
                v11 = RtlFormatMessageEx((int)v15, 0, 0, 0, 1, (__int64)&v35, (NTSTRSAFE_PWSTR)Src, *a6, (__int64)a6);
            }
            else
            {
              memmove(Src, v15, v14);
            }
          }
          else
          {
            v11 = -1073741789;
          }
          *a6 = v14;
          goto LABEL_16;
        }
        v11 = -1073741584;
      }
    }
    else
    {
      v11 = -1073741670;
    }
LABEL_16:
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    return v11;
  }
  if ( DeviceRegProp >= 0 )
  {
    if ( HIDWORD(Size) == a3 )
      goto LABEL_4;
    return (unsigned int)-1073741584;
  }
  if ( DeviceRegProp == -1073741789 )
LABEL_4:
    *a6 = Size;
  return v11;
}
